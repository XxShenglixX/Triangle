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

//Testing for isosceles triangle

void test_getTriangleName_given_2_2_3_should_return_isosceles(void)
{
	char *name;
	
	name = getTriangleName(2, 2 ,3);
	TEST_ASSERT_EQUAL_STRING("isosceles", name);
	
}

void test_getTriangleName_given_3_2_2_should_return_isosceles(void)
{
	char *name;
	
	name = getTriangleName(3, 2 ,2);
	TEST_ASSERT_EQUAL_STRING("isosceles", name);
	
}

void test_getTriangleName_given_2_3_2_should_return_isosceles(void)
{
	char *name;
	
	name = getTriangleName(2, 3 ,2);
	TEST_ASSERT_EQUAL_STRING("isosceles", name);
	
}

//Testing for scalene triangle

void test_getTriangleName_given_1_2_3_should_return_scalene(void)
{
	char *name;
	
	name = getTriangleName(1, 2 ,3);
	TEST_ASSERT_EQUAL_STRING("scalene", name);
}

//Testing for equilateral triangle

void test_getTriangleName_given_3_3_3_should_return_equilateral(void)
{
	char *name;
	
	name = getTriangleName(3, 3 ,3);
	TEST_ASSERT_EQUAL_STRING("equilateral", name);
}

//Testing for validity of triangle with any side of the length equal to 0

void test_getTriangleName_given_0_2_3_should_return_invalid(void)
{
	char *name;
	
	name = getTriangleName(0, 2 ,3);
	TEST_ASSERT_EQUAL_STRING("invalid", name);
}

void test_getTriangleName_given_2_0_3_should_return_invalid(void)
{
	char *name;
	
	name = getTriangleName(2, 0 ,3);
	TEST_ASSERT_EQUAL_STRING("invalid", name);
}

void test_getTriangleName_given_2_3_0_should_return_invalid(void)
{
	char *name;
	
	name = getTriangleName(2, 0 ,3);
	TEST_ASSERT_EQUAL_STRING("invalid", name);
}

//Testing for validity of triangle with any side of the length is negative

void test_getTriangleName_given_negative2_6_3_should_return_invalid(void)
{
	char *name;
	
	name = getTriangleName(-2, 6 ,3);
	TEST_ASSERT_EQUAL_STRING("invalid", name);
}

void test_getTriangleName_given_5_negative8_8_should_return_invalid(void)
{
	char *name;
	
	name = getTriangleName(5, -8 ,8);
	TEST_ASSERT_EQUAL_STRING("invalid", name);
}


void test_getTriangleName_given_2_6_negative3_should_return_invalid(void)
{
	char *name;
	
	name = getTriangleName(2, 6 ,-3);
	TEST_ASSERT_EQUAL_STRING("invalid", name);
}

//Testing for validity of triangle which the addition of the 2 sides of the length of triangle should
//be larger than the 3rd side

void test_getTriangleName_given_1_1_3_should_return_invalid(void)
{
	char *name;
	
	name = getTriangleName(1, 1 ,3);
	TEST_ASSERT_EQUAL_STRING("invalid", name);
}

void test_getTriangleName_given_1_4_1_should_return_invalid(void)
{
	char *name;
	
	name = getTriangleName(1, 4 ,1);
	TEST_ASSERT_EQUAL_STRING("invalid", name);
}


void test_getTriangleName_given_5_1_1_should_return_invalid(void)
{
	char *name;
	
	name = getTriangleName(5, 1 ,1);
	TEST_ASSERT_EQUAL_STRING("invalid", name);
}

/* Exception Handling */
void test_y_should_throw_an_exception()
{
	CEXCEPTION_T err;
	Try
	{
		a();
		TEST_FAIL_MESSAGE("Should generate an exception, but did not");
	}
	Catch(err)
	{
		TEST_ASSERT_EQUAL(ERR_NOT_TRIANGLE,err);
		printf("Caught an exception\n");
	}
}


void test_check_areLengthsAllStrictlyPostive_given_0_3_3_should_throw_an_exception()
{
	CEXCEPTION_T err;
	Try
	{
		areLengthsAllStrictlyPostive(0,3,3);
		TEST_FAIL_MESSAGE("Should generate an exception, but did not");
	}
	Catch(err)
	{
		TEST_ASSERT_EQUAL(ERR_LENGTH_IS_NOT_STRICTLY_POSITIVE,err);
		printf("Error the length of the triangle must be strictly positive\n");
	}
}

void test_check_areLengthsAllStrictlyPostive_given_3_minus_2_3_should_throw_an_exception()
{
	CEXCEPTION_T err;
	Try
	{
		areLengthsAllStrictlyPostive(3,-2,3);
		TEST_FAIL_MESSAGE("Should generate an exception, but did not");
	}
	Catch(err)
	{
		TEST_ASSERT_EQUAL(ERR_LENGTH_IS_NOT_STRICTLY_POSITIVE,err);
		printf("Error the length of the triangle must be strictly positive\n");
	}
}

void test_check_areLengthsAllStrictlyPostive_given_3_3_3_should_NOT_throw_an_exception()
{
	CEXCEPTION_T err;
	Try
	{
		areLengthsAllStrictlyPostive(3,3,3);
		
	}
	Catch(err)
	{
		TEST_FAIL_MESSAGE("Error should NOT generate an exception.");
	}
}

void test_is_Triangle_given_1_2_10_should_throw_an_exception()
{
	CEXCEPTION_T err;
	Try
	{
		isTriangle(1,2,10);
		TEST_FAIL_MESSAGE("Should generate an exception, but did not");
	}
	Catch(err)
	{
		TEST_ASSERT_EQUAL(ERR_NOT_TRIANGLE,err);
		printf("Error NOT a triangle !\n");
	}
}

void test_is_Triangle_given_1_10_2_should_throw_an_exception()
{
	CEXCEPTION_T err;
	Try
	{
		isTriangle(1,10,2);
		TEST_FAIL_MESSAGE("Should generate an exception, but did not");
	}
	Catch(err)
	{
		TEST_ASSERT_EQUAL(ERR_NOT_TRIANGLE,err);
		printf("Error NOT a triangle !\n");
	}
}

void test_is_Triangle_given_10_1_2_should_throw_an_exception()
{
	CEXCEPTION_T err;
	Try
	{
		isTriangle(10,1,2);
		TEST_FAIL_MESSAGE("Should generate an exception, but did not");
	}
	Catch(err)
	{
		TEST_ASSERT_EQUAL(ERR_NOT_TRIANGLE,err);
		printf("Error NOT a triangle !\n");
	}
}

void test_is_Triangle_given_10_10_10_should_not_throw_an_exception()
{
	CEXCEPTION_T err;
	Try
	{
		isTriangle(10,10,10);
	}
	Catch(err)
	{
		TEST_ASSERT_EQUAL(ERR_NOT_TRIANGLE,err);
		printf("Error should NOT generate any exception !\n");
	}
}

