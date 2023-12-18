#include "char.h"
#include "weapon.h"

//    Weapon p = Weapon(0,20,00);
//    Weapon &SelfArmory[0] = p;---------------------------�H���Z���γ\�i�H�o�˼g �A��reference����]�O�o�˥i�H��ֳгy�h�l������ 
//    Weapon q = Weapon(0,10,00);
//	  Weapon &SelfArmory[1] = q;

Engineer::Engineer(int hp, int max_hp , int energy, int max_energy)
{
    //Initialize the offsets
    HP = hp;
    MaxHP = max_hp;
    Energy = energy;
    MaxEnergy = max_energy;
    mPosX = (�����e��)/2 - ENGINEER_WIDTH/2;
    mPosY = (�����e��)/2 - ENGINEER_HEIGHT/2;//�Ϩ���ͦ��b�ù����� 

    //Initialize the velocity
    mVelX = 0;
    mVelY = 0;
    

//    Weapon SelfArmory[0] = new//�Z���@ 
//    Weapon SelfArmory[1] = //�Z���G 
}


//main �|�ھڿ�����H���h�I�s������constructor 



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
            case SDLK_d: mVelX += ENGINEER_VEL; break;//                             motion�D�{������L�ާ@���W�U���k�O�o�]�n��wads 
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
	gEngineerTexture.render( mPosX, mPosY );    //--------------------------�|����W�� gEngineerTexture.render( mPosX, mPosY );
}
 //----------------------------------------------------------------------------------------------------------------------�H�W��SDL        
 
   
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


  
		   
		   
		                                                                                                                                                                                                                                                                               






