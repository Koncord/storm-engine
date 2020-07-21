//============================================================================================
//	Spirenkov Maxim aka Sp-Max Shaman, 2001
//--------------------------------------------------------------------------------------------
//	
//--------------------------------------------------------------------------------------------
//	WdmCameraStdCtrl
//--------------------------------------------------------------------------------------------
//	
//============================================================================================

#ifndef _WdmCameraStdCtrl_H_
#define _WdmCameraStdCtrl_H_

#include "WdmCamera.h"

class WdmCameraStdCtrl : public WdmCamera
{
//--------------------------------------------------------------------------------------------
//Конструирование, деструктурирование
//--------------------------------------------------------------------------------------------
public:
	WdmCameraStdCtrl();
	virtual ~WdmCameraStdCtrl();

//--------------------------------------------------------------------------------------------
//Функции возвращающие реакции клавиш
//--------------------------------------------------------------------------------------------
public:
	virtual void CtrlProcess(float dltTime);
	virtual float MoveLeftRight(float dltTime);
	virtual float MoveUpDown(float dltTime);
	virtual float RotLeftRight(float dltTime);
	virtual float ZoomInOut(float dltTime);
	virtual bool CurrentFreeMode();
	virtual bool GetHightHeight(float & height);

//--------------------------------------------------------------------------------------------
//Инкапсуляция
//--------------------------------------------------------------------------------------------
private:
	bool GetCurFreeMode();
private:
	bool isFree;
	float mdx, mdy, mzoom;
	bool lastFreeMode;
};

#endif
