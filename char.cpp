#include "char.h"
#include "weapon.h"

//    Weapon p = Weapon(0,20,00);
//    Weapon &SelfArmory[0] = p;---------------------------人拿武器或許可以這樣寫 ，用reference的原因是這樣可以減少創造多餘的物件 
//    Weapon q = Weapon(0,10,00);
//	  Weapon &SelfArmory[1] = q;

Engineer::Engineer(int hp, int max_hp , int energy, int max_energy)
{
    //Initialize the offsets
    HP = hp;
    MaxHP = max_hp;
    Energy = energy;
    MaxEnergy = max_energy;
    mPosX = (視窗寬度)/2 - ENGINEER_WIDTH/2;
    mPosY = (視窗寬度)/2 - ENGINEER_HEIGHT/2;//使角色生成在螢幕中心 

    //Initialize the velocity
    mVelX = 0;
    mVelY = 0;
    

//    Weapon SelfArmory[0] = new//武器一 
//    Weapon SelfArmory[1] = //武器二 
}


//main 會根據選取的人物去呼叫對應的constructor 



void Engineer::handleEvent( SDL_Event& e )
{
    //If a key was pressed
	if( e.type == SDL_KEYDOWN && e.key.repeat == 0 )
    {
        //Adjust the velocity
        switch( e.key.keysym.sym )
        {
            case SDLK_s: mVelY -= ENGINEER_VEL; break;
            case SDLK_w: mVelY += ENGINEER_VEL; break;
            case SDLK_a: mVelX -= ENGINEER_VEL; break;
            case SDLK_d: mVelX += ENGINEER_VEL; break;//                             motion主程式中鍵盤操作的上下左右記得也要換wads 
        }
    }
    //If a key was released
    else if( e.type == SDL_KEYUP && e.key.repeat == 0 )
    {
        //Adjust the velocity
        switch( e.key.keysym.sym )
        {
            case SDLK_w: mVelY += ENGINEER_VEL; break;
            case SDLK_s: mVelY -= ENGINEER_VEL; break;
            case SDLK_a: mVelX += ENGINEER_VEL; break;
            case SDLK_d: mVelX -= ENGINEER_VEL; break;
        }
    }
}
void Engineer::move()
{
    //Move the dot left or right
    mPosX += mVelX;

    //If the dot went too far to the left or right
    if( ( mPosX < 0 ) || ( mPosX + ENGINEER_WIDTH > SCREEN_WIDTH ) )
    {
        //Move back
        mPosX -= mVelX;
    }

    //Move the dot up or down
    mPosY += mVelY;

    //If the dot went too far up or down
    if( ( mPosY < 0 ) || ( mPosY + ENGINEER_HEIGHT > SCREEN_HEIGHT ) )
    {
        //Move back
        mPosY -= mVelY;
    }
}

void Engineer::render()
{
    //Show the dot
	gEngineerTexture.render( mPosX, mPosY );    //--------------------------尚未改名成 gEngineerTexture.render( mPosX, mPosY );
}
 //----------------------------------------------------------------------------------------------------------------------以上為SDL        
 
   
void Engineer::GetHP(){return HP;}
void Engineer::GetEnergy(){return Energy;}
void Engineer::GetmPosX(){return mPosX;}		
void Engineer::GetmPosY(){return mPosY;}

void Engineer::IncreaseHP(int HP_Package){
	if((HP +=  HP_Package) <= MaxHP){
		return HP +=  HP_Package;		
	}
	else if((HP +=  HP_Package) > MaxHP){
		return MaxHP;
	}
}

void Engineer::IncreaseEnergy(int EnergyPackage){
	if((Energy += EnergyPackage) <= MaxEnergy){
		return Energy += EnergyPackage;		
	}
	else if((Energy += EnergyPackage) > MaxEnergy){
		return MaxEnergy;
	}
}

void Engineer::TakeDamage(int damage){return HP -= damage;}


  
		   
		   
		                                                                                                                                                                                                                                                                               






