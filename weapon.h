class Weapon{
//	friend void EnergyConsume(EE_freshman&);//every weapon has different EnergyConsume  �Pı�|�Ψ�friend 
	
	private:
		int ID;//���@�w�|�Ψ�AID�s���Y���x�}����index �ȡA e.g.ID = 1 mean Weapon[1] 
		int Attack;
		int mPosX;
		int mPosY;
		
		
	public:
//		double FireFrequence();    main function                           //�T�w�ɶ��o�g 
		void GetAttack();//display attack
		void Get_mPosX();
		void Get_mPosY();
//		void get_Durability();//display Durability
//		void set_Durability();		
};

class RemoteWeapon : public Weapon{
	public 
};

//�o��w�p��Z���������{���ԳB�z�A 


