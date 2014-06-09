#include "unity.h"
#include "Triangle.h"
#include "CException.h"




char *getTriangleName(int side1, int side2, int side3);



void setUp(void)

{

}



void tearDown(void)

{

}







void test_getTriangleName_given_2_2_3_should_return_isosceles(void)

{

 char *name;



 name = getTriangleName(2, 2 ,3);

 UnityAssertEqualString((const char*)("isosceles"), (const char*)(name), (((void *)0)), (_U_UINT)23);



}



void test_getTriangleName_given_3_2_2_should_return_isosceles(void)

{

 char *name;



 name = getTriangleName(3, 2 ,2);

 UnityAssertEqualString((const char*)("isosceles"), (const char*)(name), (((void *)0)), (_U_UINT)32);



}



void test_getTriangleName_given_2_3_2_should_return_isosceles(void)

{

 char *name;



 name = getTriangleName(2, 3 ,2);

 UnityAssertEqualString((const char*)("isosceles"), (const char*)(name), (((void *)0)), (_U_UINT)41);



}







void test_getTriangleName_given_1_2_3_should_return_scalene(void)

{

 char *name;



 name = getTriangleName(1, 2 ,3);

 UnityAssertEqualString((const char*)("scalene"), (const char*)(name), (((void *)0)), (_U_UINT)52);

}







void test_getTriangleName_given_3_3_3_should_return_equilateral(void)

{

 char *name;



 name = getTriangleName(3, 3 ,3);

 UnityAssertEqualString((const char*)("equilateral"), (const char*)(name), (((void *)0)), (_U_UINT)62);

}







void test_getTriangleName_given_0_2_3_should_return_invalid(void)

{

 char *name;



 name = getTriangleName(0, 2 ,3);

 UnityAssertEqualString((const char*)("invalid"), (const char*)(name), (((void *)0)), (_U_UINT)72);

}



void test_getTriangleName_given_2_0_3_should_return_invalid(void)

{

 char *name;



 name = getTriangleName(2, 0 ,3);

 UnityAssertEqualString((const char*)("invalid"), (const char*)(name), (((void *)0)), (_U_UINT)80);

}



void test_getTriangleName_given_2_3_0_should_return_invalid(void)

{

 char *name;



 name = getTriangleName(2, 0 ,3);

 UnityAssertEqualString((const char*)("invalid"), (const char*)(name), (((void *)0)), (_U_UINT)88);

}







void test_getTriangleName_given_negative2_6_3_should_return_invalid(void)

{

 char *name;



 name = getTriangleName(-2, 6 ,3);

 UnityAssertEqualString((const char*)("invalid"), (const char*)(name), (((void *)0)), (_U_UINT)98);

}



void test_getTriangleName_given_5_negative8_8_should_return_invalid(void)

{

 char *name;



 name = getTriangleName(5, -8 ,8);

 UnityAssertEqualString((const char*)("invalid"), (const char*)(name), (((void *)0)), (_U_UINT)106);

}





void test_getTriangleName_given_2_6_negative3_should_return_invalid(void)

{

 char *name;



 name = getTriangleName(2, 6 ,-3);

 UnityAssertEqualString((const char*)("invalid"), (const char*)(name), (((void *)0)), (_U_UINT)115);

}









void test_getTriangleName_given_1_1_3_should_return_invalid(void)

{

 char *name;



 name = getTriangleName(1, 1 ,3);

 UnityAssertEqualString((const char*)("invalid"), (const char*)(name), (((void *)0)), (_U_UINT)126);

}



void test_getTriangleName_given_1_4_1_should_return_invalid(void)

{

 char *name;



 name = getTriangleName(1, 4 ,1);

 UnityAssertEqualString((const char*)("invalid"), (const char*)(name), (((void *)0)), (_U_UINT)134);

}





void test_getTriangleName_given_5_1_1_should_return_invalid(void)

{

 char *name;



 name = getTriangleName(5, 1 ,1);

 UnityAssertEqualString((const char*)("invalid"), (const char*)(name), (((void *)0)), (_U_UINT)143);

}





void test_check_areLengthsAllStrictlyPostive_given_0_3_3_should_throw_an_exception()

{

 unsigned int err;

 { jmp_buf *PrevFrame, NewFrame; unsigned int MY_ID = (0); PrevFrame = CExceptionFrames[(0)].pFrame; CExceptionFrames[MY_ID].pFrame = (jmp_buf*)(&NewFrame); CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); if (_setjmp(NewFrame) == 0) { if (&PrevFrame)

 {

  areLengthsAllStrictlyPostive(0,3,3);

  UnityFail( ("Should generate an exception, but did not"), (_U_UINT)153);;

 }

 else { } CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); } else { err = CExceptionFrames[MY_ID].Exception; err=err; } CExceptionFrames[MY_ID].pFrame = PrevFrame; } if (CExceptionFrames[(0)].Exception != (0x5A5A5A5A))

 {

  UnityAssertEqualNumber((_U_SINT)((ERR_LENGTH_IS_NOT_STRICTLY_POSITIVE)), (_U_SINT)((err)), (((void *)0)), (_U_UINT)157, UNITY_DISPLAY_STYLE_INT);

  printf("Error the length of the triangle must be strictly positive\n");

 }

}



void test_check_areLengthsAllStrictlyPostive_given_3_minus_2_3_should_throw_an_exception()

{

 unsigned int err;

 { jmp_buf *PrevFrame, NewFrame; unsigned int MY_ID = (0); PrevFrame = CExceptionFrames[(0)].pFrame; CExceptionFrames[MY_ID].pFrame = (jmp_buf*)(&NewFrame); CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); if (_setjmp(NewFrame) == 0) { if (&PrevFrame)

 {

  areLengthsAllStrictlyPostive(3,-2,3);

  UnityFail( ("Should generate an exception, but did not"), (_U_UINT)168);;

 }

 else { } CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); } else { err = CExceptionFrames[MY_ID].Exception; err=err; } CExceptionFrames[MY_ID].pFrame = PrevFrame; } if (CExceptionFrames[(0)].Exception != (0x5A5A5A5A))

 {

  UnityAssertEqualNumber((_U_SINT)((ERR_LENGTH_IS_NOT_STRICTLY_POSITIVE)), (_U_SINT)((err)), (((void *)0)), (_U_UINT)172, UNITY_DISPLAY_STYLE_INT);

  printf("Error the length of the triangle must be strictly positive\n");

 }

}



void test_check_areLengthsAllStrictlyPostive_given_3_3_3_should_NOT_throw_an_exception()

{

 unsigned int err;

 { jmp_buf *PrevFrame, NewFrame; unsigned int MY_ID = (0); PrevFrame = CExceptionFrames[(0)].pFrame; CExceptionFrames[MY_ID].pFrame = (jmp_buf*)(&NewFrame); CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); if (_setjmp(NewFrame) == 0) { if (&PrevFrame)

 {

  areLengthsAllStrictlyPostive(3,3,3);



 }

 else { } CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); } else { err = CExceptionFrames[MY_ID].Exception; err=err; } CExceptionFrames[MY_ID].pFrame = PrevFrame; } if (CExceptionFrames[(0)].Exception != (0x5A5A5A5A))

 {

  UnityFail( ("Error should NOT generate an exception."), (_U_UINT)187);;

 }

}



void test_is_Triangle_given_1_2_10_should_throw_an_exception()

{

 unsigned int err;

 { jmp_buf *PrevFrame, NewFrame; unsigned int MY_ID = (0); PrevFrame = CExceptionFrames[(0)].pFrame; CExceptionFrames[MY_ID].pFrame = (jmp_buf*)(&NewFrame); CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); if (_setjmp(NewFrame) == 0) { if (&PrevFrame)

 {

  isTriangle(1,2,10);

  UnityFail( ("Should generate an exception, but did not"), (_U_UINT)197);;

 }

 else { } CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); } else { err = CExceptionFrames[MY_ID].Exception; err=err; } CExceptionFrames[MY_ID].pFrame = PrevFrame; } if (CExceptionFrames[(0)].Exception != (0x5A5A5A5A))

 {

  UnityAssertEqualNumber((_U_SINT)((ERR_NOT_TRIANGLE)), (_U_SINT)((err)), (((void *)0)), (_U_UINT)201, UNITY_DISPLAY_STYLE_INT);

  printf("Error NOT a triangle !\n");

 }

}



void test_is_Triangle_given_1_10_2_should_throw_an_exception()

{

 unsigned int err;

 { jmp_buf *PrevFrame, NewFrame; unsigned int MY_ID = (0); PrevFrame = CExceptionFrames[(0)].pFrame; CExceptionFrames[MY_ID].pFrame = (jmp_buf*)(&NewFrame); CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); if (_setjmp(NewFrame) == 0) { if (&PrevFrame)

 {

  isTriangle(1,10,2);

  UnityFail( ("Should generate an exception, but did not"), (_U_UINT)212);;

 }

 else { } CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); } else { err = CExceptionFrames[MY_ID].Exception; err=err; } CExceptionFrames[MY_ID].pFrame = PrevFrame; } if (CExceptionFrames[(0)].Exception != (0x5A5A5A5A))

 {

  UnityAssertEqualNumber((_U_SINT)((ERR_NOT_TRIANGLE)), (_U_SINT)((err)), (((void *)0)), (_U_UINT)216, UNITY_DISPLAY_STYLE_INT);

  printf("Error NOT a triangle !\n");

 }

}



void test_is_Triangle_given_10_1_2_should_throw_an_exception()

{

 unsigned int err;

 { jmp_buf *PrevFrame, NewFrame; unsigned int MY_ID = (0); PrevFrame = CExceptionFrames[(0)].pFrame; CExceptionFrames[MY_ID].pFrame = (jmp_buf*)(&NewFrame); CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); if (_setjmp(NewFrame) == 0) { if (&PrevFrame)

 {

  isTriangle(10,1,2);

  UnityFail( ("Should generate an exception, but did not"), (_U_UINT)227);;

 }

 else { } CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); } else { err = CExceptionFrames[MY_ID].Exception; err=err; } CExceptionFrames[MY_ID].pFrame = PrevFrame; } if (CExceptionFrames[(0)].Exception != (0x5A5A5A5A))

 {

  UnityAssertEqualNumber((_U_SINT)((ERR_NOT_TRIANGLE)), (_U_SINT)((err)), (((void *)0)), (_U_UINT)231, UNITY_DISPLAY_STYLE_INT);

  printf("Error NOT a triangle !\n");

 }

}



void test_is_Triangle_given_10_10_10_should_not_throw_an_exception()

{

 unsigned int err;

 { jmp_buf *PrevFrame, NewFrame; unsigned int MY_ID = (0); PrevFrame = CExceptionFrames[(0)].pFrame; CExceptionFrames[MY_ID].pFrame = (jmp_buf*)(&NewFrame); CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); if (_setjmp(NewFrame) == 0) { if (&PrevFrame)

 {

  isTriangle(10,10,10);

 }

 else { } CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); } else { err = CExceptionFrames[MY_ID].Exception; err=err; } CExceptionFrames[MY_ID].pFrame = PrevFrame; } if (CExceptionFrames[(0)].Exception != (0x5A5A5A5A))

 {

  UnityAssertEqualNumber((_U_SINT)((ERR_NOT_TRIANGLE)), (_U_SINT)((err)), (((void *)0)), (_U_UINT)245, UNITY_DISPLAY_STYLE_INT);

  printf("Error should NOT generate any exception !\n");

 }

}
