#include "weapon.h"
#include "char.h"

//get_Attack(){ return Attack;}
void Weapon::GetmPosX(){ return mPosX;}
void Weapon::GetmPosY(){ return mPosY;}
void Weapon::SetPosX(int NewmPosX){ mPosX = NewmPosX;}
void Weapon::SetPosY(int NewmPosY){ mPosY = NewmPosY; }

Weapon::Weapon(){                          //初始化的座標要跟人物在同個位置 -------------------------main
	mPosX = mposX;
	mPosY = mposY;
}


void MeleeWeapon::render(){
    //Show the dot
	gDotTexture.render( GetmPosX(), GetmPosY() ); //原版gDotTexture.render( mPosX, mPosY ); 
}


void RangedWeapon::render(){
	gDotTexture.render( GetmPosX(), GetmPosY() );
}

//--------------------------------------------------------------------------SDL

void Weapon::ChangePositionWithCharacter(Dot& character){ //每當人物移動到一個新位置，就呼叫這個函數更改武器座標使其與人物的新座標相同 ----------main
	SetPosX(character.GetmPosX());
	SetPosY(character.GetmPosY());
}

MeleeWeapon::MeleeWeapon(int id, int damage){ //近戰武器攻擊力的初始化是由 main手動輸入 -----------------------------------main
	ID = id;
	Damage = damage;
}
void MeleeWeapon::GetDamage(){return Damage;}





RangedWeapon::RangedWeapon(int id){ID = id;}//初始化遠程武器 

