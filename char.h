//dot���W�r�i�H����A�令�O�� �i��令Engineer 
class Dot
{
    private:
		int HP;
		int Energy;//bullet
		Weapon SelfArmory[2];//contain two weapon
		
		//The X and Y offsets of the dot
		int mPosX, mPosY;
		//The velocity of the dot
		int mVelX, mVelY;
		
    public:
		//The dimensions of the dot
		static const int DOT_WIDTH = 20;                  // ����|�令�H���Ϥ��j�p 
		static const int DOT_HEIGHT = 20;                 
		//Maximum axis velocity of the dot
		static const int DOT_VEL = 5;
		//Initializes the variables
		Dot();
		
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
		
		void SetHP();//using when attacked by monsters or get �ɥ] 
		void TakeDamage();//reduce HP when touching bullet or touch monster 
		
		void SetDefense(); //using when attacked by monsters or get �ɥ] 
		
//		void WeaponGroundChanging();//change weapon with that on the ground   ���B��main function
//		void WeaponChoosing();//choose which weapon we use	  ���B��main function
		
 

};




