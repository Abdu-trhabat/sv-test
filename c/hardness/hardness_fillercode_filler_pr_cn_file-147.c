// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2025 Jana Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch147Filler_PR_CN.c", 13, "reach_error"); }
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
unsigned long int var_1_1 = 1;
unsigned char var_1_4 = 5;
double var_1_5 = 1.625;
double var_1_6 = 7.5;
double var_1_7 = 9.9;
unsigned long int var_1_8 = 100000000;
unsigned char var_1_9 = 1;
unsigned long int var_1_11 = 3110153948;
signed char var_1_12 = 16;
signed char var_1_13 = -1;
signed char var_1_14 = 100;
signed char var_1_15 = -25;
signed long int var_1_16 = 64;
signed long int var_1_17 = -10;
signed long int var_1_18 = 4;
unsigned char var_1_19 = 1;
signed long int var_1_20 = 1880114960;
signed short int var_1_21 = -50;
unsigned short int var_1_22 = 10;
signed short int var_1_23 = 64;
signed short int var_1_24 = 25;
unsigned short int var_1_25 = 256;
unsigned char var_1_26 = 0;
double var_1_27 = 5.2;
double var_1_28 = 16.4;
unsigned short int var_1_29 = 25;
unsigned short int var_1_30 = 10;
unsigned short int var_1_31 = 10;
unsigned long int var_1_32 = 16;
signed char var_1_33 = 4;
double var_1_34 = 255.2;
signed char var_1_35 = 2;
signed char var_1_36 = 1;
signed char var_1_37 = 16;
signed char var_1_38 = 64;
signed char var_1_39 = 32;
unsigned long int var_1_40 = 2;
signed long int var_1_41 = 16;
signed char var_1_43 = 4;
signed char var_1_44 = 64;
signed char var_1_45 = 32;
unsigned char var_1_46 = 0;
unsigned long int var_1_48 = 3791808184;
unsigned char var_1_49 = 0;
float var_1_50 = 31.55;
float var_1_51 = 32.7;
float var_1_52 = 128.5;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_8 = 100000000;
signed long int last_1_var_1_16 = 64;
signed long int last_1_var_1_17 = -10;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch147Filler_PR_CN
	/* 106L, 44L, 259L, 287L, 872L, 985L) */ if (/* 80L, 4L, 5L, 260L, 288L, 846L, 986L) */ ((last_1_var_1_16) > (last_1_var_1_8))) {
		/* 100L, 38L, 263L, 291L, 866L, 991L) */ if (/* 86L, 15L, 16L, 264L, 292L, 852L, 992L) */ ((last_1_var_1_8) == (/* 85L, 14L, 18L, 266L, 294L, 851L, 995L) */ ((128) - (var_1_4))))) {
			/* 90L, 29L, 269L, 297L, 856L, 998L) */ var_1_1 = (
				var_1_4
			);
		} else {
			/* 99L, 37L, 273L, 301L, 865L, 1002L) */ var_1_1 = (
				/* 98L, 36L, 276L, 304L, 864L, 1005L) */ (max (
					/* 98L, 36L, 276L, 304L, 864L, 1005L) */ (
						/* 95L, 33L, 277L, 305L, 861L, 1006L) */ (abs (
							last_1_var_1_8
						))
					) , (
						/* 97L, 35L, 279L, 307L, 863L, 1009L) */ (abs (
							32u
						))
					)
				))
			);
		}
	} else {
		/* 105L, 43L, 281L, 309L, 871L, 1011L) */ var_1_1 = (
			last_1_var_1_16
		);
	}


	// From: CodeObject5
	/* 270L) */ if (/* 245L, 244L) */ ((var_1_28) < (/* 247L, 243L) */ ((var_1_27) / (var_1_34))))) {
		/* 268L) */ if (var_1_26) {
			/* 267L) */ var_1_33 = (
				/* 266L) */ (max (
					/* 266L) */ (
						/* 264L) */ ((
							var_1_35
						) + (
							/* 263L) */ (min (
								/* 263L) */ (
									-2
								) , (
									var_1_36
								)
							))
						))
					) , (
						var_1_37
					)
				))
			);
		}
	}


	// From: CodeObject6
	/* 329L) */ if (/* 279L, 278L) */ ((/* 280L, 276L) */ ((var_1_27) * (var_1_28))) <= (var_1_34))) {
		/* 323L) */ if (/* 296L, 295L) */ ((/* 297L, 291L) */ ((var_1_39) >> (var_1_40))) >= (/* 300L, 294L) */ ((100000000) % (var_1_41))))) {
			/* 322L) */ var_1_38 = (
				/* 321L) */ ((
					/* 317L) */ ((
						var_1_40
					) + (
						var_1_43
					))
				) - (
					/* 320L) */ (max (
						/* 320L) */ (
							var_1_44
						) , (
							var_1_45
						)
					))
				))
			);
		}
	} else {
		/* 328L) */ var_1_38 = (
			var_1_43
		);
	}


	// From: Req3Batch147Filler_PR_CN
	/* 35L, 122L, 415L, 451L, 943L, 1033L) */ if (/* 5L, 77L, 78L, 416L, 452L, 913L, 1034L) */ ((/* 3L, 75L, 79L, 417L, 453L, 911L, 1035L) */ ((last_1_var_1_8) < (16u))) || (var_1_9))) {
		/* 29L, 116L, 422L, 458L, 937L, 1040L) */ if (var_1_9) {
			/* 23L, 110L, 424L, 460L, 931L, 1042L) */ if (/* 10L, 93L, 94L, 425L, 461L, 918L, 1043L) */ ((last_1_var_1_17) >= (var_1_4))) {
				/* 17L, 105L, 428L, 464L, 925L, 1047L) */ var_1_8 = (
					/* 16L, 104L, 431L, 467L, 924L, 1050L) */ ((
						var_1_11
					) - (
						last_1_var_1_8
					))
				);
			} else {
				/* 22L, 109L, 435L, 471L, 930L, 1054L) */ var_1_8 = (
					last_1_var_1_8
				);
			}
		} else {
			/* 28L, 115L, 440L, 476L, 936L, 1059L) */ var_1_8 = (
				last_1_var_1_17
			);
		}
	} else {
		/* 34L, 121L, 444L, 480L, 942L, 1064L) */ var_1_8 = (
			last_1_var_1_8
		);
	}


	// From: CodeObject2
	/* 220L) */ if (/* 185L, 184L) */ ((var_1_26) && (/* 187L, 183L) */ ((7.25) <= (/* 189L, 182L) */ ((var_1_27) - (var_1_28))))))) {
		/* 218L) */ if (/* 204L, 203L) */ ((var_1_22) < (/* 206L, 202L) */ (max (/* 206L, 202L) */ (var_1_21) , (var_1_29)))))) {
			/* 217L) */ var_1_25 = (
				var_1_30
			);
		}
	}


	// From: CodeObject8
	/* 399L) */ if (/* 387L, 386L) */ ((var_1_38) >= (var_1_39))) {
		/* 398L) */ var_1_50 = (
			/* 397L) */ ((
				var_1_51
			) + (
				var_1_52
			))
		);
	}


	// From: Req2Batch147Filler_PR_CN
	unsigned char stepLocal_0 = var_1_4;
	/* 1028L, 67L, 370L, 381L) */ if (/* 1021L, 54L, 55L, 371L, 382L) */ ((var_1_8) == (stepLocal_0))) {
		/* 1027L, 66L, 374L, 385L) */ var_1_5 = (
			/* 1026L, 65L, 377L, 388L) */ ((
				var_1_6
			) + (
				var_1_7
			))
		);
	}


	// From: CodeObject4
	/* 235L) */ var_1_32 = (
		var_1_30
	);


	// From: CodeObject7
	/* 380L) */ if (/* 342L, 341L) */ ((/* 343L, 339L) */ (abs (var_1_28))) > (var_1_27))) {
		/* 378L) */ if (/* 358L, 357L) */ ((/* 359L, 352L) */ ((var_1_29) / (var_1_40))) > (/* 362L, 356L) */ (~ (/* 363L, 355L) */ ((var_1_48) - (1u))))))) {
			/* 377L) */ var_1_46 = (
				var_1_49
			);
		}
	}


	// From: Req4Batch147Filler_PR_CN
	/* 1072L, 147L, 560L, 575L) */ if (/* 1073L, 132L, 133L, 561L, 576L) */ ((-1000000) != (var_1_8))) {
		/* 1076L, 146L, 564L, 579L) */ var_1_12 = (
			/* 1079L, 145L, 567L, 582L) */ (min (
				/* 1079L, 145L, 567L, 582L) */ (
					/* 1080L, 143L, 568L, 583L) */ (max (
						/* 1080L, 143L, 568L, 583L) */ (
							var_1_13
						) , (
							var_1_14
						)
					))
				) , (
					var_1_15
				)
			))
		);
	}


	// From: Req7Batch147Filler_PR_CN
	/* 1122L, 248L, 741L, 767L) */ if (var_1_9) {
		/* 1124L, 238L, 743L, 769L) */ if (var_1_19) {
			/* 1126L, 237L, 745L, 771L) */ var_1_18 = (
				/* 1129L, 236L, 748L, 774L) */ (min (
					/* 1129L, 236L, 748L, 774L) */ (
						/* 1130L, 232L, 749L, 775L) */ (max (
							/* 1130L, 232L, 749L, 775L) */ (
								var_1_4
							) , (
								var_1_14
							)
						))
					) , (
						/* 1133L, 235L, 752L, 778L) */ ((
							2
						) + (
							var_1_13
						))
					)
				))
			);
		}
	} else {
		/* 1136L, 247L, 755L, 781L) */ var_1_18 = (
			/* 1139L, 246L, 758L, 784L) */ ((
				var_1_4
			) - (
				/* 1141L, 245L, 760L, 786L) */ ((
					var_1_20
				) - (
					var_1_1
				))
			))
		);
	}


	// From: CodeObject1
	/* 174L) */ if (/* 147L, 146L) */ ((var_1_22) >= (8))) {
		/* 158L) */ var_1_21 = (
			/* 157L) */ (max (
				/* 157L) */ (
					var_1_23
				) , (
					var_1_24
				)
			))
		);
	} else {
		/* 172L) */ if (/* 162L, 161L) */ ((var_1_24) > (var_1_22))) {
			/* 171L) */ var_1_21 = (
				var_1_23
			);
		}
	}


	// From: Req5Batch147Filler_PR_CN
	/* 1088L, 183L, 621L, 637L) */ if (/* 1089L, 164L, 165L, 622L, 638L) */ ((var_1_4) <= (/* 1091L, 163L, 167L, 624L, 640L) */ ((var_1_8) + (/* 1093L, 162L, 169L, 626L, 642L) */ ((var_1_8) + (5))))))) {
		/* 1096L, 182L, 629L, 645L) */ var_1_16 = (
			var_1_1
		);
	}


	// From: CodeObject3
	/* 227L) */ var_1_31 = (
		var_1_30
	);


	// From: Req6Batch147Filler_PR_CN
	signed char stepLocal_1 = var_1_15;
	/* 1115L, 216L, 682L, 696L) */ if (/* 1108L, 199L, 200L, 683L, 697L) */ ((/* 1107L, 197L, 201L, 684L, 698L) */ (min (/* 1107L, 197L, 201L, 684L, 698L) */ (last_1_var_1_17) , (var_1_13)))) <= (stepLocal_1))) {
		/* 1114L, 215L, 689L, 703L) */ var_1_17 = (
			/* 1113L, 214L, 692L, 706L) */ ((
				var_1_16
			) - (
				var_1_1
			))
		);
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 127);
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= -461168.6018427383000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= -461168.6018427383000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_11 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_11 >= 2147483647);
	assume_abort_if_not(var_1_11 <= 4294967294);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= -127);
	assume_abort_if_not(var_1_13 <= 126);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= -127);
	assume_abort_if_not(var_1_14 <= 126);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= -127);
	assume_abort_if_not(var_1_15 <= 126);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 1);
	var_1_20 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_20 >= 1073741823);
	assume_abort_if_not(var_1_20 <= 2147483646);
	var_1_22 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 65535);
	var_1_23 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_23 >= -32767);
	assume_abort_if_not(var_1_23 <= 32766);
	var_1_24 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_24 >= -32767);
	assume_abort_if_not(var_1_24 <= 32766);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 1);
	var_1_27 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854776000e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854776000e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 65535);
	var_1_30 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 65534);
	var_1_34 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_34 >= -922337.2036854776000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854776000e+12F && var_1_34 >= 1.0e-20F ));
	assume_abort_if_not(var_1_34 != 0.0F);
	var_1_35 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_35 >= -63);
	assume_abort_if_not(var_1_35 <= 63);
	var_1_36 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_36 >= -63);
	assume_abort_if_not(var_1_36 <= 63);
	var_1_37 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_37 >= -127);
	assume_abort_if_not(var_1_37 <= 126);
	var_1_39 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 127);
	var_1_40 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_40 >= 1);
	assume_abort_if_not(var_1_40 <= 6);
	var_1_41 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_41 >= -2147483648);
	assume_abort_if_not(var_1_41 <= 2147483647);
	assume_abort_if_not(var_1_41 != 0);
	var_1_43 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 63);
	var_1_44 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 126);
	var_1_45 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 126);
	var_1_48 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_48 >= 2147483647);
	assume_abort_if_not(var_1_48 <= 4294967295);
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 0);
	var_1_51 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_51 >= -461168.6018427383000e+13F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 4611686.018427383000e+12F && var_1_51 >= 1.0e-20F ));
	var_1_52 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_52 >= -461168.6018427383000e+13F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 4611686.018427383000e+12F && var_1_52 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_8 = var_1_8;
	last_1_var_1_16 = var_1_16;
	last_1_var_1_17 = var_1_17;
}

int property(void) {
	if (/* 403L, 4L, 8L, 316L, 344L, 879L, 1147L, 113L) */ ((last_1_var_1_16) > (last_1_var_1_8))) {
		if (/* 409L, 15L, 21L, 320L, 348L, 885L, 1153L, 119L) */ ((last_1_var_1_8) == (/* 412L, 14L, 23L, 322L, 350L, 884L, 1156L, 118L) */ ((128) - (var_1_4))))) {
		} else {
		}
	} else {
	}
	if (/* 435L, 54L, 58L, 393L, 404L, 1179L) */ ((var_1_8) == (var_1_4))) {
	}
	if (/* 447L, 77L, 83L, 488L, 524L, 951L, 1191L, 43L) */ ((/* 448L, 75L, 84L, 489L, 525L, 949L, 1192L, 41L) */ ((last_1_var_1_8) < (16u))) || (var_1_9))) {
		if (var_1_9) {
			if (/* 456L, 93L, 97L, 497L, 533L, 956L, 1200L, 48L) */ ((last_1_var_1_17) >= (var_1_4))) {
			} else {
			}
		} else {
		}
	} else {
	}
	if (/* 486L, 132L, 136L, 591L, 606L, 1230L) */ ((-1000000) != (var_1_8))) {
	}
	if (/* 502L, 164L, 172L, 654L, 670L, 1246L) */ ((var_1_4) <= (/* 504L, 163L, 174L, 656L, 672L, 1248L) */ ((var_1_8) + (/* 506L, 162L, 176L, 658L, 674L, 1250L) */ ((var_1_8) + (5))))))) {
	}
	if (/* 515L, 199L, 205L, 711L, 725L, 1259L) */ ((/* 516L, 197L, 206L, 712L, 726L, 1260L) */ (min (/* 516L, 197L, 206L, 712L, 726L, 1260L) */ (last_1_var_1_17) , (var_1_13)))) <= (var_1_15))) {
	}
	if (var_1_9) {
		if (var_1_19) {
		}
	} else {
	}
	return /* 559L) */ ((
	/* 558L) */ ((
		/* 557L) */ ((
			/* 556L) */ ((
				/* 555L) */ ((
					/* 554L) */ ((
						/* 402L, 45L, 315L, 343L, 905L, 1146L, 139L) */ ((
							/* 403L, 4L, 8L, 316L, 344L, 879L, 1147L, 113L) */ ((
								last_1_var_1_16
							) > (
								last_1_var_1_8
							))
						) ? (
							/* 408L, 39L, 319L, 347L, 899L, 1152L, 133L) */ ((
								/* 409L, 15L, 21L, 320L, 348L, 885L, 1153L, 119L) */ ((
									last_1_var_1_8
								) == (
									/* 412L, 14L, 23L, 322L, 350L, 884L, 1156L, 118L) */ ((
										128
									) - (
										var_1_4
									))
								))
							) ? (
								/* 415L, 29L, 325L, 353L, 889L, 1159L, 123L) */ ((
									var_1_1
								) == (
									/* 415L, 29L, 325L, 353L, 889L, 1159L, 123L) */ ((unsigned long int) (
										var_1_4
									))
								))
							) : (
								/* 419L, 37L, 329L, 357L, 898L, 1163L, 132L) */ ((
									var_1_1
								) == (
									/* 419L, 37L, 329L, 357L, 898L, 1163L, 132L) */ ((unsigned long int) (
										/* 422L, 36L, 332L, 360L, 897L, 1166L, 131L) */ (max (
											/* 422L, 36L, 332L, 360L, 897L, 1166L, 131L) */ (
												/* 423L, 33L, 333L, 361L, 894L, 1167L, 128L) */ (abs (
													last_1_var_1_8
												))
											) , (
												/* 426L, 35L, 335L, 363L, 896L, 1170L, 130L) */ (abs (
													32u
												))
											)
										))
									))
								))
							))
						) : (
							/* 428L, 43L, 337L, 365L, 904L, 1172L, 138L) */ ((
								var_1_1
							) == (
								/* 428L, 43L, 337L, 365L, 904L, 1172L, 138L) */ ((unsigned long int) (
									last_1_var_1_16
								))
							))
						))
					) && (
						/* 434L, 68L, 392L, 403L, 1178L) */ ((
							/* 435L, 54L, 58L, 393L, 404L, 1179L) */ ((
								var_1_8
							) == (
								var_1_4
							))
						) ? (
							/* 438L, 66L, 396L, 407L, 1182L) */ ((
								var_1_5
							) == (
								/* 438L, 66L, 396L, 407L, 1182L) */ ((double) (
									/* 441L, 65L, 399L, 410L, 1185L) */ ((
										var_1_6
									) + (
										var_1_7
									))
								))
							))
						) : (
							1
						))
					))
				) && (
					/* 446L, 123L, 487L, 523L, 981L, 1190L, 73L) */ ((
						/* 447L, 77L, 83L, 488L, 524L, 951L, 1191L, 43L) */ ((
							/* 448L, 75L, 84L, 489L, 525L, 949L, 1192L, 41L) */ ((
								last_1_var_1_8
							) < (
								16u
							))
						) || (
							var_1_9
						))
					) ? (
						/* 453L, 117L, 494L, 530L, 975L, 1197L, 67L) */ ((
							var_1_9
						) ? (
							/* 455L, 111L, 496L, 532L, 969L, 1199L, 61L) */ ((
								/* 456L, 93L, 97L, 497L, 533L, 956L, 1200L, 48L) */ ((
									last_1_var_1_17
								) >= (
									var_1_4
								))
							) ? (
								/* 460L, 105L, 500L, 536L, 963L, 1204L, 55L) */ ((
									var_1_8
								) == (
									/* 460L, 105L, 500L, 536L, 963L, 1204L, 55L) */ ((unsigned long int) (
										/* 463L, 104L, 503L, 539L, 962L, 1207L, 54L) */ ((
											var_1_11
										) - (
											last_1_var_1_8
										))
									))
								))
							) : (
								/* 467L, 109L, 507L, 543L, 968L, 1211L, 60L) */ ((
									var_1_8
								) == (
									/* 467L, 109L, 507L, 543L, 968L, 1211L, 60L) */ ((unsigned long int) (
										last_1_var_1_8
									))
								))
							))
						) : (
							/* 472L, 115L, 512L, 548L, 974L, 1216L, 66L) */ ((
								var_1_8
							) == (
								/* 472L, 115L, 512L, 548L, 974L, 1216L, 66L) */ ((unsigned long int) (
									last_1_var_1_17
								))
							))
						))
					) : (
						/* 477L, 121L, 516L, 552L, 980L, 1221L, 72L) */ ((
							var_1_8
						) == (
							/* 477L, 121L, 516L, 552L, 980L, 1221L, 72L) */ ((unsigned long int) (
								last_1_var_1_8
							))
						))
					))
				))
			) && (
				/* 485L, 148L, 590L, 605L, 1229L) */ ((
					/* 486L, 132L, 136L, 591L, 606L, 1230L) */ ((
						-1000000
					) != (
						var_1_8
					))
				) ? (
					/* 489L, 146L, 594L, 609L, 1233L) */ ((
						var_1_12
					) == (
						/* 489L, 146L, 594L, 609L, 1233L) */ ((signed char) (
							/* 492L, 145L, 597L, 612L, 1236L) */ (min (
								/* 492L, 145L, 597L, 612L, 1236L) */ (
									/* 493L, 143L, 598L, 613L, 1237L) */ (max (
										/* 493L, 143L, 598L, 613L, 1237L) */ (
											var_1_13
										) , (
											var_1_14
										)
									))
								) , (
									var_1_15
								)
							))
						))
					))
				) : (
					1
				))
			))
		) && (
			/* 501L, 184L, 653L, 669L, 1245L) */ ((
				/* 502L, 164L, 172L, 654L, 670L, 1246L) */ ((
					var_1_4
				) <= (
					/* 504L, 163L, 174L, 656L, 672L, 1248L) */ ((
						var_1_8
					) + (
						/* 506L, 162L, 176L, 658L, 674L, 1250L) */ ((
							var_1_8
						) + (
							5
						))
					))
				))
			) ? (
				/* 509L, 182L, 661L, 677L, 1253L) */ ((
					var_1_16
				) == (
					/* 509L, 182L, 661L, 677L, 1253L) */ ((signed long int) (
						var_1_1
					))
				))
			) : (
				1
			))
		))
	) && (
		/* 514L, 217L, 710L, 724L, 1258L) */ ((
			/* 515L, 199L, 205L, 711L, 725L, 1259L) */ ((
				/* 516L, 197L, 206L, 712L, 726L, 1260L) */ (min (
					/* 516L, 197L, 206L, 712L, 726L, 1260L) */ (
						last_1_var_1_17
					) , (
						var_1_13
					)
				))
			) <= (
				var_1_15
			))
		) ? (
			/* 521L, 215L, 717L, 731L, 1265L) */ ((
				var_1_17
			) == (
				/* 521L, 215L, 717L, 731L, 1265L) */ ((signed long int) (
					/* 524L, 214L, 720L, 734L, 1268L) */ ((
						var_1_16
					) - (
						var_1_1
					))
				))
			))
		) : (
			1
		))
	))
) && (
	/* 531L, 249L, 793L, 819L, 1275L) */ ((
		var_1_9
	) ? (
		/* 533L, 239L, 795L, 821L, 1277L) */ ((
			var_1_19
		) ? (
			/* 535L, 237L, 797L, 823L, 1279L) */ ((
				var_1_18
			) == (
				/* 535L, 237L, 797L, 823L, 1279L) */ ((signed long int) (
					/* 538L, 236L, 800L, 826L, 1282L) */ (min (
						/* 538L, 236L, 800L, 826L, 1282L) */ (
							/* 539L, 232L, 801L, 827L, 1283L) */ (max (
								/* 539L, 232L, 801L, 827L, 1283L) */ (
									var_1_4
								) , (
									var_1_14
								)
							))
						) , (
							/* 542L, 235L, 804L, 830L, 1286L) */ ((
								2
							) + (
								var_1_13
							))
						)
					))
				))
			))
		) : (
			1
		))
	) : (
		/* 545L, 247L, 807L, 833L, 1289L) */ ((
			var_1_18
		) == (
			/* 545L, 247L, 807L, 833L, 1289L) */ ((signed long int) (
				/* 548L, 246L, 810L, 836L, 1292L) */ ((
					var_1_4
				) - (
					/* 550L, 245L, 812L, 838L, 1294L) */ ((
						var_1_20
					) - (
						var_1_1
					))
				))
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
