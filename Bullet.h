//���U��Dot �@�ˤ���|�令��L�W�r 
class Bullet
{
	private:
		int mPosX, mPosY;//0, 0
		int mVelX, mVelY;//main.cpp calls Bullet constructor to set up different Velocity for different RemoteWeapon
		int Damage;
    public:
		//The dimensions of the dot
		static const int DOT_WIDTH = 20;                    //��ɭԳo��|�nmain�I�sconstructor �Ӫ�l�Ƥl�u���t�סA����e 
		static const int DOT_HEIGHT = 20;
		//Maximum axis velocity of the dot
		static const int DOT_VEL = 10;
		//Initializes the variables
		Dot();
		//Takes key presses and adjusts the dot's velocity
		void handleEvent( SDL_Event& e );
		//Moves the dot
		void move();
		//Shows the dot on the screen
		void render();
//-----------------------------------------------------------�H�W��SDL		
		
		
		void GetDamage();// return Damage 
		 
}



