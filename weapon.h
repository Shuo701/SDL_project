class Weapon{
//	friend void EnergyConsume(EE_freshman&);//every weapon has different EnergyConsume  感覺會用到friend 
	
	private:
		int mPosX;
		int mPosY;
	public:
		Weapon(int mposX, int mposY)
//		double FireFrequence();    main function                           //固定時間發射 
//		void GetAttack();//display attack
		void GetmPosX();//gDotTexture.render這個函數需要有 武器位置的參數 
		void GetmPosY();
		void SetPosX();//每飛一段距離都需要更新一次位置 
		void SetPosY();
		void ChangePositionWithCharacter(Engineer& character);//每次刷新螢幕都把武器位置更改到與人物相同 
//		void get_Durability();//display Durability
//		void set_Durability();
		void render();//每次武器更改位置後都要重新render一次 
};

class MeleeWeapon : public Weapon{
	private:
		int ID;//不一定會用到，ID編號即為矩陣內的index 值， e.g.ID = 1 mean Weapon[1] 
		int Damage;
	public:
		MeleeWeapon(int id, int damage);
		void GetDamage();//取出攻擊數值 
};

class RangedWeapon : public Weapon{ // 遠程武器的作用主要是去連結有著特定傷害的不同子彈 
	private:
		int ID;
	public:
		RangedWeapon(int id);		
};

//這邊預計把武器分成遠程跟近戰處理， 


