//底下的Dot 一樣之後會改成其他名字 
class Bullet
{
	private:
		int mPosX, mPosY;//0, 0
		int mVelX, mVelY;//main.cpp calls Bullet constructor to set up different Velocity for different RemoteWeapon
		int Damage;
    public:
		//The dimensions of the dot
		static const int DOT_WIDTH = 20;                    //到時候這邊會要main呼叫constructor 來初始化子彈的速度，長跟寬 
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
//-----------------------------------------------------------以上為SDL		
		
		
		void GetDamage();// return Damage 
		 
}



