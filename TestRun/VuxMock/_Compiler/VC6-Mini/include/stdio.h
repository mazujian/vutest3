
#ifndef __MCK__COMPILER_VC6_MINI_INCLUDE_STDIO_H__
#define __MCK__COMPILER_VC6_MINI_INCLUDE_STDIO_H__


//$$VUNIT(BEGIN,VMOCKDEFINE/fopen(const char*,const char*))
#ifdef VUser_vmck_fopen
#undef fopen
static FILE* __cdecl vmck_fopen(const char* arg_1,const char* arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"char*","arg_1",(const void*)&arg_1},{2,"char*","arg_2",(const void*)&arg_2}}; if(VuxMck("fopen",&vmckrt,vmckds,2,"",1147,0,4)) return *(FILE**)vmckrt;{
    return fopen(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/fopen(const char*,const char*))

//$$VUNIT(BEGIN,VMOCKADDGLOBAL)
//$$VUNIT(END,VMOCKADDGLOBAL)


#endif
