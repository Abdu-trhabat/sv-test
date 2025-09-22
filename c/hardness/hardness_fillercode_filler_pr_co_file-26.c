// Prototype declarations of the functions used to communicate with the model checkers
extern unsigned long __VERIFIER_nondet_ulong(void);
extern long __VERIFIER_nondet_long(void);
extern unsigned char __VERIFIER_nondet_uchar(void);
extern char __VERIFIER_nondet_char(void);
extern unsigned short __VERIFIER_nondet_ushort(void);
extern short __VERIFIER_nondet_short(void);
extern float __VERIFIER_nondet_float(void);
extern double __VERIFIER_nondet_double(void);

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch26Filler_PR_CO.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned long int var_1_1 = 16;
signed long int var_1_2 = 4;
signed long int var_1_3 = 10;
signed long int var_1_4 = -64;
signed long int var_1_5 = -2;
unsigned long int var_1_6 = 256;
unsigned long int var_1_7 = 4;
unsigned long int var_1_8 = 128;
signed char var_1_9 = 10;
unsigned char var_1_10 = 0;
signed char var_1_11 = -1;
unsigned short int var_1_12 = 10000;
float var_1_13 = 5.4;
float var_1_14 = 1.4;
float var_1_15 = 128.9;
float var_1_16 = 199.75;
unsigned long int var_1_17 = 16;
unsigned short int var_1_18 = 32;
unsigned short int var_1_19 = 32;
double var_1_20 = 1.5;
double var_1_22 = 127.75;
signed char var_1_23 = 8;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 0;
signed char var_1_26 = -16;
signed char var_1_27 = 16;
signed long int var_1_28 = 10;
unsigned short int var_1_29 = 64;
signed long int var_1_31 = 64;
signed long int var_1_32 = -16;
unsigned char var_1_33 = 0;
unsigned short int var_1_34 = 8;
float var_1_35 = 2.5;
float var_1_36 = 50.5;
float var_1_37 = 128.75;
float var_1_38 = 24.9;
unsigned char var_1_39 = 32;
unsigned char var_1_40 = 100;
unsigned char var_1_41 = 10;
unsigned char var_1_42 = 128;
unsigned char var_1_43 = 64;
unsigned char var_1_44 = 50;
unsigned short int var_1_45 = 8;
unsigned short int var_1_46 = 10000;
unsigned char var_1_47 = 100;
signed short int var_1_48 = -2;
double var_1_49 = 100.96;
double var_1_50 = 0.75;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch26Filler_PR_CO
	signed long int stepLocal_0 = var_1_5;
	/* 977L, 31L, 304L, 321L) */ if (/* 968L, 8L, 9L, 305L, 322L) */ ((/* 967L, 6L, 10L, 306L, 323L) */ ((/* 965L, 4L, 11L, 307L, 324L) */ ((var_1_2) + (var_1_3))) / (var_1_4))) == (stepLocal_0))) {
		/* 976L, 30L, 312L, 329L) */ var_1_1 = (
			/* 975L, 29L, 315L, 332L) */ ((
				/* 973L, 27L, 316L, 333L) */ (min (
					/* 973L, 27L, 316L, 333L) */ (
						var_1_6
					) , (
						var_1_7
					)
				))
			) + (
				var_1_8
			))
		);
	}


	// From: CodeObject3
	/* 268L, 94L) */ if (/* 269L, 67L, 68L) */ ((var_1_1) <= (/* 271L, 66L, 70L) */ (min (/* 271L, 66L, 70L) */ (var_1_31) , (var_1_32)))))) {
		/* 274L, 83L) */ var_1_39 = (
			/* 277L, 82L) */ (min (
				/* 277L, 82L) */ (
					var_1_40
				) , (
					var_1_41
				)
			))
		);
	} else {
		/* 280L, 93L) */ var_1_39 = (
			/* 283L, 92L) */ ((
				/* 284L, 87L) */ (abs (
					var_1_42
				))
			) - (
				/* 286L, 91L) */ (abs (
					/* 287L, 90L) */ (min (
						/* 287L, 90L) */ (
							var_1_43
						) , (
							var_1_44
						)
					))
				))
			))
		);
	}


	// From: CodeObject4
	/* 290L, 149L) */ if (/* 291L, 105L, 106L) */ ((/* 292L, 100L, 107L) */ ((8) & (var_1_32))) > (/* 295L, 104L, 110L) */ ((var_1_34) | (/* 297L, 103L, 112L) */ (~ (-128))))))) {
		/* 299L, 147L) */ if (/* 300L, 124L, 125L) */ ((0) < (var_1_28))) {
			/* 303L, 134L) */ var_1_45 = (
				var_1_42
			);
		} else {
			/* 307L, 146L) */ var_1_45 = (
				var_1_41
			);
		}
	}


	// From: CodeObject7
	/* 332L, 220L) */ if (/* 333L, 190L, 191L) */ ((var_1_37) >= (var_1_38))) {
		/* 336L, 218L) */ if (/* 337L, 203L, 204L) */ ((var_1_38) >= (/* 339L, 202L, 206L) */ (abs (var_1_37))))) {
			/* 341L, 217L) */ var_1_48 = (
				/* 344L, 216L) */ ((
					var_1_42
				) + (
					8
				))
			);
		}
	}


	// From: CodeObject8
	/* 348L, 227L) */ var_1_49 = (
		var_1_36
	);


	// From: Req3Batch26Filler_PR_CO
	unsigned char stepLocal_2 = /* 1012L, 92L, 96L, 590L, 617L) */ ((/* 1013L, 88L, 97L, 591L, 618L) */ ((var_1_13) - (var_1_14))) != (/* 1016L, 91L, 100L, 594L, 621L) */ (min (/* 1016L, 91L, 100L, 594L, 621L) */ (var_1_15) , (var_1_16)))));
	unsigned long int stepLocal_1 = var_1_17;
	/* 1037L, 136L, 588L, 615L) */ if (/* 1021L, 94L, 95L, 589L, 616L) */ ((stepLocal_2) || (var_1_10))) {
		/* 1036L, 134L, 598L, 625L) */ if (/* 1023L, 115L, 116L, 599L, 626L) */ ((var_1_1) >= (stepLocal_1))) {
			/* 1031L, 129L, 602L, 629L) */ var_1_12 = (
				/* 1030L, 128L, 605L, 632L) */ ((
					/* 1028L, 126L, 606L, 633L) */ (min (
						/* 1028L, 126L, 606L, 633L) */ (
							var_1_18
						) , (
							var_1_19
						)
					))
				) + (
					32
				))
			);
		} else {
			/* 1035L, 133L, 610L, 637L) */ var_1_12 = (
				var_1_19
			);
		}
	}


	// From: CodeObject1
	/* 238L, 29L) */ if (/* 239L, 7L, 8L) */ ((var_1_28) < (/* 241L, 6L, 10L) */ ((var_1_31) - (/* 243L, 5L, 12L) */ (abs (var_1_32))))))) {
		/* 245L, 27L) */ if (var_1_33) {
			/* 247L, 26L) */ var_1_29 = (
				var_1_34
			);
		}
	}


	// From: CodeObject5
	/* 311L, 166L) */ if (/* 312L, 155L, 156L) */ ((var_1_40) < (var_1_28))) {
		/* 315L, 165L) */ var_1_46 = (
			var_1_41
		);
	}


	// From: Req4Batch26Filler_PR_CO
	/* 1043L, 168L, 697L, 709L) */ if (/* 1044L, 153L, 154L, 698L, 710L) */ ((/* 1045L, 151L, 155L, 699L, 711L) */ (min (/* 1045L, 151L, 155L, 699L, 711L) */ (var_1_1) , (var_1_19)))) < (var_1_1))) {
		/* 1049L, 167L, 703L, 715L) */ var_1_20 = (
			var_1_22
		);
	}


	// From: Req5Batch26Filler_PR_CO
	unsigned char stepLocal_3 = var_1_24;
	/* 1079L, 208L, 744L, 769L) */ if (var_1_10) {
		/* 1074L, 202L, 746L, 771L) */ if (/* 1059L, 181L, 182L, 747L, 772L) */ ((stepLocal_3) && (var_1_25))) {
			/* 1069L, 197L, 750L, 775L) */ var_1_23 = (
				/* 1068L, 196L, 753L, 778L) */ ((
					/* 1064L, 192L, 754L, 779L) */ (max (
						/* 1064L, 192L, 754L, 779L) */ (
							0
						) , (
							var_1_11
						)
					))
				) + (
					/* 1067L, 195L, 757L, 782L) */ (max (
						/* 1067L, 195L, 757L, 782L) */ (
							var_1_26
						) , (
							var_1_27
						)
					))
				))
			);
		} else {
			/* 1073L, 201L, 760L, 785L) */ var_1_23 = (
				var_1_11
			);
		}
	} else {
		/* 1078L, 207L, 764L, 789L) */ var_1_23 = (
			var_1_26
		);
	}


	// From: CodeObject2
	/* 251L, 59L) */ if (/* 252L, 35L, 36L) */ ((var_1_32) < (var_1_34))) {
		/* 255L, 45L) */ var_1_35 = (
			var_1_36
		);
	} else {
		/* 259L, 58L) */ var_1_35 = (
			/* 262L, 57L) */ (max (
				/* 262L, 57L) */ (
					var_1_36
				) , (
					/* 264L, 56L) */ (min (
						/* 264L, 56L) */ (
							var_1_37
						) , (
							/* 266L, 55L) */ (abs (
								var_1_38
							))
						)
					))
				)
			))
		);
	}


	// From: Req6Batch26Filler_PR_CO
	unsigned long int stepLocal_5 = /* 1087L, 216L, 222L, 846L, 875L) */ (min (/* 1087L, 216L, 222L, 846L, 875L) */ (var_1_1) , (var_1_6)));
	unsigned char stepLocal_4 = var_1_25;
	/* 1114L, 266L, 844L, 873L) */ if (/* 1094L, 220L, 221L, 845L, 874L) */ ((stepLocal_5) > (/* 1093L, 219L, 225L, 849L, 878L) */ ((var_1_7) | (var_1_19))))) {
		/* 1109L, 260L, 852L, 881L) */ if (/* 1098L, 239L, 240L, 853L, 882L) */ ((stepLocal_4) && (/* 1097L, 238L, 242L, 855L, 884L) */ ((var_1_11) < (var_1_1))))) {
			/* 1104L, 255L, 858L, 887L) */ var_1_28 = (
				/* 1103L, 254L, 861L, 890L) */ ((
					var_1_19
				) - (
					var_1_18
				))
			);
		} else {
			/* 1108L, 259L, 864L, 893L) */ var_1_28 = (
				var_1_11
			);
		}
	} else {
		/* 1113L, 265L, 868L, 897L) */ var_1_28 = (
			var_1_12
		);
	}


	// From: CodeObject6
	/* 319L, 184L) */ if (var_1_33) {
		/* 321L, 183L) */ var_1_47 = (
			/* 324L, 182L) */ (min (
				/* 324L, 182L) */ (
					/* 325L, 178L) */ ((
						var_1_42
					) - (
						/* 327L, 177L) */ (abs (
							var_1_43
						))
					))
				) , (
					/* 329L, 181L) */ ((
						200
					) - (
						var_1_44
					))
				)
			))
		);
	}


	// From: CodeObject9
	/* 353L, 235L) */ var_1_50 = (
		255.875
	);


	// From: Req2Batch26Filler_PR_CO
	/* 984L, 74L, 375L, 402L) */ if (/* 985L, 38L, 39L, 376L, 403L) */ (! (var_1_10))) {
		/* 987L, 68L, 378L, 405L) */ if (/* 988L, 47L, 48L, 379L, 406L) */ ((/* 989L, 45L, 49L, 380L, 407L) */ (max (/* 989L, 45L, 49L, 380L, 407L) */ (var_1_6) , (var_1_28)))) >= (var_1_1))) {
			/* 993L, 63L, 384L, 411L) */ var_1_9 = (
				/* 996L, 62L, 387L, 414L) */ ((
					-16
				) + (
					var_1_11
				))
			);
		} else {
			/* 999L, 67L, 390L, 417L) */ var_1_9 = (
				var_1_11
			);
		}
	} else {
		/* 1003L, 73L, 394L, 421L) */ var_1_9 = (
			var_1_11
		);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -2147483648);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483648);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483648);
	assume_abort_if_not(var_1_4 <= 2147483647);
	assume_abort_if_not(var_1_4 != 0);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -2147483648);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 2147483647);
	var_1_7 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 2147483647);
	var_1_8 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 2147483647);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -63);
	assume_abort_if_not(var_1_11 <= 63);
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= -922337.2036854776000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= -922337.2036854776000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854776000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 4294967295);
	var_1_18 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 32767);
	var_1_19 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 32767);
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= -922337.2036854766000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854766000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 1);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 1);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= -63);
	assume_abort_if_not(var_1_26 <= 63);
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= -63);
	assume_abort_if_not(var_1_27 <= 63);
	var_1_31 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_31 >= -1);
	assume_abort_if_not(var_1_31 <= 2147483647);
	var_1_32 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_32 >= -2147483647);
	assume_abort_if_not(var_1_32 <= 2147483647);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 1);
	var_1_34 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 65534);
	var_1_36 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_36 >= -922337.2036854766000e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854766000e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= -922337.2036854766000e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854766000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_38 >= -922337.2036854766000e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854766000e+12F && var_1_38 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 254);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 254);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 127);
	assume_abort_if_not(var_1_42 <= 254);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 127);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 127);
}



void updateLastVariables(void) {
}

int property(void) {
	if (/* 358L, 8L, 16L, 339L, 356L, 1120L) */ ((/* 359L, 6L, 17L, 340L, 357L, 1121L) */ ((/* 360L, 4L, 18L, 341L, 358L, 1122L) */ ((var_1_2) + (var_1_3))) / (var_1_4))) == (var_1_5))) {
	}
	if (/* 378L, 38L, 41L, 430L, 457L, 1140L) */ (! (var_1_10))) {
		if (/* 381L, 47L, 53L, 433L, 460L, 1143L) */ ((/* 382L, 45L, 54L, 434L, 461L, 1144L) */ (max (/* 382L, 45L, 54L, 434L, 461L, 1144L) */ (var_1_6) , (var_1_28)))) >= (var_1_1))) {
		} else {
		}
	} else {
	}
	if (/* 402L, 94L, 104L, 643L, 670L, 1164L) */ ((/* 403L, 92L, 105L, 644L, 671L, 1165L) */ ((/* 404L, 88L, 106L, 645L, 672L, 1166L) */ ((var_1_13) - (var_1_14))) != (/* 407L, 91L, 109L, 648L, 675L, 1169L) */ (min (/* 407L, 91L, 109L, 648L, 675L, 1169L) */ (var_1_15) , (var_1_16)))))) || (var_1_10))) {
		if (/* 412L, 115L, 119L, 653L, 680L, 1174L) */ ((var_1_1) >= (var_1_17))) {
		} else {
		}
	}
	if (/* 430L, 153L, 159L, 722L, 734L, 1192L) */ ((/* 431L, 151L, 160L, 723L, 735L, 1193L) */ (min (/* 431L, 151L, 160L, 723L, 735L, 1193L) */ (var_1_1) , (var_1_19)))) < (var_1_1))) {
	}
	if (var_1_10) {
		if (/* 443L, 181L, 185L, 797L, 822L, 1205L) */ ((var_1_24) && (var_1_25))) {
		} else {
		}
	} else {
	}
	if (/* 466L, 220L, 228L, 903L, 932L, 1228L) */ ((/* 467L, 216L, 229L, 904L, 933L, 1229L) */ (min (/* 467L, 216L, 229L, 904L, 933L, 1229L) */ (var_1_1) , (var_1_6)))) > (/* 470L, 219L, 232L, 907L, 936L, 1232L) */ ((var_1_7) | (var_1_19))))) {
		if (/* 474L, 239L, 245L, 911L, 940L, 1236L) */ ((var_1_25) && (/* 476L, 238L, 247L, 913L, 942L, 1238L) */ ((var_1_11) < (var_1_1))))) {
		} else {
		}
	} else {
	}
	return /* 498L) */ ((
	/* 497L) */ ((
		/* 496L) */ ((
			/* 495L) */ ((
				/* 494L) */ ((
					/* 357L, 32L, 338L, 355L, 1119L) */ ((
						/* 358L, 8L, 16L, 339L, 356L, 1120L) */ ((
							/* 359L, 6L, 17L, 340L, 357L, 1121L) */ ((
								/* 360L, 4L, 18L, 341L, 358L, 1122L) */ ((
									var_1_2
								) + (
									var_1_3
								))
							) / (
								var_1_4
							))
						) == (
							var_1_5
						))
					) ? (
						/* 365L, 30L, 346L, 363L, 1127L) */ ((
							var_1_1
						) == (
							/* 365L, 30L, 346L, 363L, 1127L) */ ((unsigned long int) (
								/* 368L, 29L, 349L, 366L, 1130L) */ ((
									/* 369L, 27L, 350L, 367L, 1131L) */ (min (
										/* 369L, 27L, 350L, 367L, 1131L) */ (
											var_1_6
										) , (
											var_1_7
										)
									))
								) + (
									var_1_8
								))
							))
						))
					) : (
						1
					))
				) && (
					/* 377L, 75L, 429L, 456L, 1139L) */ ((
						/* 378L, 38L, 41L, 430L, 457L, 1140L) */ (! (
							var_1_10
						))
					) ? (
						/* 380L, 69L, 432L, 459L, 1142L) */ ((
							/* 381L, 47L, 53L, 433L, 460L, 1143L) */ ((
								/* 382L, 45L, 54L, 434L, 461L, 1144L) */ (max (
									/* 382L, 45L, 54L, 434L, 461L, 1144L) */ (
										var_1_6
									) , (
										var_1_28
									)
								))
							) >= (
								var_1_1
							))
						) ? (
							/* 386L, 63L, 438L, 465L, 1148L) */ ((
								var_1_9
							) == (
								/* 386L, 63L, 438L, 465L, 1148L) */ ((signed char) (
									/* 389L, 62L, 441L, 468L, 1151L) */ ((
										-16
									) + (
										var_1_11
									))
								))
							))
						) : (
							/* 392L, 67L, 444L, 471L, 1154L) */ ((
								var_1_9
							) == (
								/* 392L, 67L, 444L, 471L, 1154L) */ ((signed char) (
									var_1_11
								))
							))
						))
					) : (
						/* 396L, 73L, 448L, 475L, 1158L) */ ((
							var_1_9
						) == (
							/* 396L, 73L, 448L, 475L, 1158L) */ ((signed char) (
								var_1_11
							))
						))
					))
				))
			) && (
				/* 401L, 137L, 642L, 669L, 1163L) */ ((
					/* 402L, 94L, 104L, 643L, 670L, 1164L) */ ((
						/* 403L, 92L, 105L, 644L, 671L, 1165L) */ ((
							/* 404L, 88L, 106L, 645L, 672L, 1166L) */ ((
								var_1_13
							) - (
								var_1_14
							))
						) != (
							/* 407L, 91L, 109L, 648L, 675L, 1169L) */ (min (
								/* 407L, 91L, 109L, 648L, 675L, 1169L) */ (
									var_1_15
								) , (
									var_1_16
								)
							))
						))
					) || (
						var_1_10
					))
				) ? (
					/* 411L, 135L, 652L, 679L, 1173L) */ ((
						/* 412L, 115L, 119L, 653L, 680L, 1174L) */ ((
							var_1_1
						) >= (
							var_1_17
						))
					) ? (
						/* 415L, 129L, 656L, 683L, 1177L) */ ((
							var_1_12
						) == (
							/* 415L, 129L, 656L, 683L, 1177L) */ ((unsigned short int) (
								/* 418L, 128L, 659L, 686L, 1180L) */ ((
									/* 419L, 126L, 660L, 687L, 1181L) */ (min (
										/* 419L, 126L, 660L, 687L, 1181L) */ (
											var_1_18
										) , (
											var_1_19
										)
									))
								) + (
									32
								))
							))
						))
					) : (
						/* 423L, 133L, 664L, 691L, 1185L) */ ((
							var_1_12
						) == (
							/* 423L, 133L, 664L, 691L, 1185L) */ ((unsigned short int) (
								var_1_19
							))
						))
					))
				) : (
					1
				))
			))
		) && (
			/* 429L, 169L, 721L, 733L, 1191L) */ ((
				/* 430L, 153L, 159L, 722L, 734L, 1192L) */ ((
					/* 431L, 151L, 160L, 723L, 735L, 1193L) */ (min (
						/* 431L, 151L, 160L, 723L, 735L, 1193L) */ (
							var_1_1
						) , (
							var_1_19
						)
					))
				) < (
					var_1_1
				))
			) ? (
				/* 435L, 167L, 727L, 739L, 1197L) */ ((
					var_1_20
				) == (
					/* 435L, 167L, 727L, 739L, 1197L) */ ((double) (
						var_1_22
					))
				))
			) : (
				1
			))
		))
	) && (
		/* 440L, 209L, 794L, 819L, 1202L) */ ((
			var_1_10
		) ? (
			/* 442L, 203L, 796L, 821L, 1204L) */ ((
				/* 443L, 181L, 185L, 797L, 822L, 1205L) */ ((
					var_1_24
				) && (
					var_1_25
				))
			) ? (
				/* 446L, 197L, 800L, 825L, 1208L) */ ((
					var_1_23
				) == (
					/* 446L, 197L, 800L, 825L, 1208L) */ ((signed char) (
						/* 449L, 196L, 803L, 828L, 1211L) */ ((
							/* 450L, 192L, 804L, 829L, 1212L) */ (max (
								/* 450L, 192L, 804L, 829L, 1212L) */ (
									0
								) , (
									var_1_11
								)
							))
						) + (
							/* 453L, 195L, 807L, 832L, 1215L) */ (max (
								/* 453L, 195L, 807L, 832L, 1215L) */ (
									var_1_26
								) , (
									var_1_27
								)
							))
						))
					))
				))
			) : (
				/* 456L, 201L, 810L, 835L, 1218L) */ ((
					var_1_23
				) == (
					/* 456L, 201L, 810L, 835L, 1218L) */ ((signed char) (
						var_1_11
					))
				))
			))
		) : (
			/* 460L, 207L, 814L, 839L, 1222L) */ ((
				var_1_23
			) == (
				/* 460L, 207L, 814L, 839L, 1222L) */ ((signed char) (
					var_1_26
				))
			))
		))
	))
) && (
	/* 465L, 267L, 902L, 931L, 1227L) */ ((
		/* 466L, 220L, 228L, 903L, 932L, 1228L) */ ((
			/* 467L, 216L, 229L, 904L, 933L, 1229L) */ (min (
				/* 467L, 216L, 229L, 904L, 933L, 1229L) */ (
					var_1_1
				) , (
					var_1_6
				)
			))
		) > (
			/* 470L, 219L, 232L, 907L, 936L, 1232L) */ ((
				var_1_7
			) | (
				var_1_19
			))
		))
	) ? (
		/* 473L, 261L, 910L, 939L, 1235L) */ ((
			/* 474L, 239L, 245L, 911L, 940L, 1236L) */ ((
				var_1_25
			) && (
				/* 476L, 238L, 247L, 913L, 942L, 1238L) */ ((
					var_1_11
				) < (
					var_1_1
				))
			))
		) ? (
			/* 479L, 255L, 916L, 945L, 1241L) */ ((
				var_1_28
			) == (
				/* 479L, 255L, 916L, 945L, 1241L) */ ((signed long int) (
					/* 482L, 254L, 919L, 948L, 1244L) */ ((
						var_1_19
					) - (
						var_1_18
					))
				))
			))
		) : (
			/* 485L, 259L, 922L, 951L, 1247L) */ ((
				var_1_28
			) == (
				/* 485L, 259L, 922L, 951L, 1247L) */ ((signed long int) (
					var_1_11
				))
			))
		))
	) : (
		/* 489L, 265L, 926L, 955L, 1251L) */ ((
			var_1_28
		) == (
			/* 489L, 265L, 926L, 955L, 1251L) */ ((signed long int) (
				var_1_12
			))
		))
	))
))
;
}
int main(void) {
	isInitial = 1;
	initially();

	while (1) {
		updateLastVariables();

		updateVariables();
		step();
		__VERIFIER_assert(property());
		isInitial = 0;
	}

	return 0;
}
