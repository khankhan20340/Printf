/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muebrahi <muebrahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:49:06 by muebrahi          #+#    #+#             */
/*   Updated: 2023/11/06 19:09:00 by muebrahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
//	#include "ft_printf.h"
//	#include <stdio.h>
//
//	#define FG_LYELLOW "\033[93m"
//	#define RESET_ALL "\033[0m"
//	#define ENDL "\n"
//
//	int main()
//	{
//
//		ft_printf("This is a test.\n");
//		printf("This is a test.\n");
//
//		int a = 5;
//		ft_printf("The value of a is %d.\n", a);
//		printf("The value of a is %d.\n", a);
//
//
//		printf("Tests completed.\n");
//		return 0;
//	}
*/

/*

#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

#define FG_LYELLOW "\033[93m"
#define RESET_ALL "\033[0m"
#define ENDL "\n"

#define TEST_LIMIT 1

#define TEST(test_number, x) {\
	printf("Test %d: ", test_number); \
	x ? printf("Passed") : printf("Failed"); \
	printf("\n"); \
}

void sigsegv(int signum) {
	(void)signum; // To suppress the unused parameter warning
	printf("Segmentation fault occurred.\n");
	exit(1);
}

//	###################        The Sample test      #################
//	void test_more_flags() {
//		printf("More tests to check flags - h: %d, %d", 42, 42);
//		printf("More tests to check flags - l: %ld, %d", 42L, 42);
//		printf("More tests to check flags - L: %lf", 42.0);
//	}

//	###################        The test slightly complicated      #################

//	void test_less_simple() {
//		printf("Less simple test - Multiple ints: %d %d %d", 42, 55, 67);
//	}

//	###################        The  test  slightly complicated    #################

//		void test_slightly_complicated() {
//			printf("Slightly complicated test - Integer (signed): %i", -42);
//			printf("Slightly complicated test - Octal: %o", 42);
//			printf("Slightly complicated test - Unsigned: %u", 42);
//			printf("Slightly complicated test - Hexadecimal: %x", 42);
//			 printf("Slightly complicated test - Uppercase Hexadecimal: %X", 42);
//			 printf("Slightly complicated test - Character: %c", 'A');
//		}

//	###################        The  test  complicated    #################

//		void test_complicated() {
//			printf("Complicated test - Mixed: %c %d %d %c %s", 'A', 42, -42, 'B', "Book is good");
//		}
//
//	###################        The  test  more complicated    #################

//			void test_more_complicated() {
//				printf("More complicated test - Flags: %+20d", 42);
//				printf("More complicated test - Flags: %-20d", 42);
//				printf("More complicated test - Flags: %+d", 42);
//				printf("More complicated test - Flags: % d", 42);
//			}

//	###################        The  test  more flags()    #################

//			void test_more_flags() {
//				printf("More tests to check flags - h: %d, %d", 42, 42);
//				printf("More tests to check flags - l: %ld, %lld", 42L, 42LL);
//				printf("More tests to check flags - L: %Lf", 42.4512L);
//			}

void run_all_tests() {
	printf("%s", FG_LYELLOW);
	printf("category: mix");
	printf("%s", RESET_ALL);
	printf("\n");

	// test_simple();
	//test_less_simple();
	//test_slightly_complicated();
	test_complicated();
	//test_more_complicated();
	//test_more_flags();

	printf("%s", ENDL);
}

int main() {
	signal(SIGSEGV, sigsegv);
	run_all_tests();
	return 0;
}

*/

#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

#define FG_LYELLOW "\033[93m"
#define RESET_ALL "\033[0m"
#define ENDL "\n"

#define TEST_LIMIT 1

#define TEST(test_number, x) {\
    printf("Test %d: ", test_number); \
    x ? printf("Passed") : printf("Failed"); \
    printf("\n"); \
}

void sigsegv(int signum) {
    (void)signum; // Suppress unused parameter warning
    printf("Segmentation fault occurred.\n");
    exit(1);
}

//		void simple_conversion_test() {
//				printf("Simple conversion test - No flags: %d", 42);
//				printf("Simple conversion test - No flags: %s", "");
//				printf("Simple conversion test - No flags: %p", (void *)0);
//				printf("Simple conversion test - No flags: %c", 'A');
//				printf("Simple conversion test - No flags: %x", 42);
//				printf("Simple conversion test - No flags: %u", 42);
//		}
//		
//		void special_cases_test() {
//				printf("Special case test - Zero: %d", 0);
//				printf("Special case test - Empty string: %s", "");
//				 printf("Special case test - Null pointer: %p", (void *)0);
//		}
//		
//		void crazy_tests() {
//			printf("Crazy test - Flags in sentence: The number is %+d, and it's in hex: %x", 42, 42);
//		}
//		
//		void verify_return_values() {
//			printf("Verify return value test - Identical conversions: %d %d %d", 42, 42, 42);
//		}

void run_all_tests() {
    printf("%s", FG_LYELLOW);
    printf("category: mix");
    printf("%s", RESET_ALL);
    printf("\n");

    simple_conversion_test();
    special_cases_test();
    crazy_tests();
    verify_return_values();

    printf("%s", ENDL);
}

int main() {
    signal(SIGSEGV, sigsegv);
    run_all_tests();
    return 0;
}
