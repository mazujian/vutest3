
//VuxInter/Demo/autocase.c/ac72_reset_global_type_02_3921b90f.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/ac72_reset_global_type_02(int))
#ifdef _VUDEBUG
static int ac72_reset_global_type_02_vpls_(int a){ VuxDbgBrkP()
{
    MyData* pData = (MyData*)gData;
    if(pData->data.a == a)
    {
        return 1;
    }
    return 0;
}}
#else
static int ac72_reset_global_type_02_vpls_(int a){__VUFNINFO__("ac72_reset_global_type_02","int",0);VuxDbp(0,0,4);
{
VUXRBV(1);VUXRLNFVB(1,1,1);    MyData* pData = (MyData*)gData; VUXLV("MyData*",pData,1);
    if((VUXRCS0(1,2)&&(pData->data.a == a)&&VUXRC1(1)))
    {VUXRBR(2);{
VUXRB(2);VUXRLNF(2,3);        {int __vurtv__= 1;VUXFRTY();}
    }}
VUXRBR_ELSE(3);
VUXRB(3);VUXRLNF(3,4);    {int __vurtv__= 0;VUXFRTY();}
}}
#endif

static int ac72_reset_global_type_02_vpls(int a)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return ac72_reset_global_type_02(a);}
	else if(VuxIsRepeatRun()) {return ac72_reset_global_type_02_vpls_(a);}

#ifdef _VUDEBUG
    {int vuxRet =  VuxIsDebugPlug() ? ac72_reset_global_type_02_vpls_(a) : ac72_reset_global_type_02(a);
#else
    {int vuxRet = ac72_reset_global_type_02_vpls_(a);
#endif
    TEST_ASSERT_RETURN("int", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/ac72_reset_global_type_02(int))
