class Weapon{
//	friend void EnergyConsume(EE_freshman&);//every weapon has different EnergyConsume  感覺會用到friend 
	
	private:
		int ID;//不一定會用到，ID編號即為矩陣內的index 值， e.g.ID = 1 mean Weapon[1] 
		int Attack;
		int mPosX;
		int mPosY;
		
		
	public:
//		double FireFrequence();    main function                           //固定時間發射 
		void GetAttack();//display attack
		void Get_mPosX();
		void Get_mPosY();
//		void get_Durability();//display Durability
//		void set_Durability();		
};

class RemoteWeapon : public Weapon{
	public 
};

//這邊預計把武器分成遠程跟近戰處理， 


