//dot���W�r�i�H����A�令�O�� �i��令Engineer 
class Engineer
{
    private:
		int HP;
		int MaxHP;//�קK�ɥ]���q�ɶW�L�W�� 
		int Energy;//bullet
		int MaxEnergy;//�קK�ɥ]���q�ɶW�L�W�� 
		Weapon SelfArmory[2];//contain two weapon
		
		//The X and Y offsets of the dot
		int mPosX, mPosY;
		//The velocity of the dot
		int mVelX, mVelY;
		
    public:
		//The dimensions of the dot
		static const int ENGINEER_WIDTH = 128;                  // ����|�令�H���Ϥ��j�p 
		static const int ENGINEER_HEIGHT = 128;                 
		//Maximum axis velocity of the dot
		static const int ENGINEER_VEL = 5;
		//Initializes the variables
		Engineer(int hp, int max_hp, int energy, int max_energy);
		
		//Takes key presses and adjusts the dot's velocity
		void handleEvent( SDL_Event& e );
		//Moves the dot
		void move();
		
		//Shows the dot on the screen
		void render();
		
//		Engineer(int HP, int Defense, int Energy, int Xcoordinate
//					int Ycoordinate ,int Velocity );


//-------------------------------------------------------------------�W����SDL���ާ@ 
		
		void GetHP();//read HP (and display on window)
		void GetEnergy(); 
		void GetmPosX();
		void GetmPosY();
		
		void IncreaseHP(int HP_Package);//using when  getting �ɦ�] 
		void TakeDamage(int damage);//reduce HP when touching bullet or touch monster 
		void IncreaseEnergy(int EnergyPackage);//using when  getting �ɯ�q�] 
//		void SetDefense(); //using when attacked by monsters or get �ɥ] 
		
//		void WeaponGroundChanging();//change weapon with that on the ground   ���B��main function
//		void WeaponChoosing();//choose which weapon we use	  ���B��main function
		
 

};




