#include "weapon.h"
#include "char.h"

//get_Attack(){ return Attack;}
void Weapon::GetmPosX(){ return mPosX;}
void Weapon::GetmPosY(){ return mPosY;}
void Weapon::SetPosX(int NewmPosX){ mPosX = NewmPosX;}
void Weapon::SetPosY(int NewmPosY){ mPosY = NewmPosY; }

Weapon::Weapon(){                          //��l�ƪ��y�Эn��H���b�P�Ӧ�m -------------------------main
	mPosX = mposX;
	mPosY = mposY;
}


void MeleeWeapon::render(){
    //Show the dot
	gDotTexture.render( GetmPosX(), GetmPosY() ); //�쪩gDotTexture.render( mPosX, mPosY ); 
}


void RangedWeapon::render(){
	gDotTexture.render( GetmPosX(), GetmPosY() );
}

//--------------------------------------------------------------------------SDL

void Weapon::ChangePositionWithCharacter(Dot& character){ //�C��H�����ʨ�@�ӷs��m�A�N�I�s�o�Ө�Ƨ��Z���y�ШϨ�P�H�����s�y�ЬۦP ----------main
	SetPosX(character.GetmPosX());
	SetPosY(character.GetmPosY());
}

MeleeWeapon::MeleeWeapon(int id, int damage){ //��ԪZ�������O����l�ƬO�� main��ʿ�J -----------------------------------main
	ID = id;
	Damage = damage;
}
void MeleeWeapon::GetDamage(){return Damage;}





RangedWeapon::RangedWeapon(int id){ID = id;}//��l�ƻ��{�Z�� 

