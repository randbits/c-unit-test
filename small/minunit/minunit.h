/*
 *	A MinUnit test case is just a function that returns 0 (null) if the tests pass. 
 *	If the test fails, the function should return a string describing the failing test. 
 *	1. mu_assert is simply a macro that returns a string if the expression passed to it is false. 
 *	2. The mu_runtest macro calls another test case and returns if that test case fails. 
 *	That's all there is to it!
 */
#ifndef _MINUNIT_H_
#define _MINUNIT_H_
//1. test expression
#define mu_assert(message, test) \
    do {			\
	if (! (test))		\
	    return message;	\
    } while (0)
//2. test function
#define mu_run_test(test)	\
    do {			\
	char* message = test();	\
	tests_run++;		\
	if (message)		\
	    return message;	\
    } while (0)

extern int tests_run;

#endif //_MINUNIT_H_
