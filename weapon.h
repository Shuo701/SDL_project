class Weapon{
//	friend void EnergyConsume(EE_freshman&);//every weapon has different EnergyConsume  �Pı�|�Ψ�friend 
	
	private:
		int mPosX;
		int mPosY;
	public:
		Weapon(int mposX, int mposY)
//		double FireFrequence();    main function                           //�T�w�ɶ��o�g 
//		void GetAttack();//display attack
		void GetmPosX();
		void GetmPosY();
		void SetPosX();
		void SetPosY();
		void ChangePositionWithCharacter(Dot& character); 
//		void get_Durability();//display Durability
//		void set_Durability();


	
		void render();//�C���Z������m�᳣�n���srender�@�� 
};

class MeleeWeapon : public Weapon{
	private:
		int ID;//���@�w�|�Ψ�AID�s���Y���x�}����index �ȡA e.g.ID = 1 mean Weapon[1] 
		int Damage;
	public:
		MeleeWeapon(int id, int damage);
		void GetDamage();//���X�����ƭ� 
};

class RangedWeapon : public Weapon{ // ���{�Z�����@�ΥD�n�O�h�s�����ۯS�w�ˮ`�����P�l�u 
	private:
		int ID;
	public:
		RangedWeapon(int id);
		
		
};

//�o��w�p��Z���������{���ԳB�z�A 


