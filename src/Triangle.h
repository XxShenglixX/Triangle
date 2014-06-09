#ifndef Triangle_H
#define Triangle_H

typedef enum{ERR_NO_ERROR,
			 ERR_LENGTH_IS_NOT_STRICTLY_POSITIVE,
			 ERR_NOT_TRIANGLE
			} ErrorCode ;
			
int areLengthsAllStrictlyPostive(int length1,int length2,int length3);
int isTriangle(int length1,int length2,int length3);
#endif // Triangle_H
