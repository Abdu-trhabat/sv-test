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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch195Filler_PE_CN.c", 13, "reach_error"); }
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
signed char var_1_1 = -1;
float var_1_3 = 25.6;
unsigned char var_1_4 = 0;
float var_1_6 = 7.8;
float var_1_7 = 4.2;
double var_1_8 = 3.95;
double var_1_9 = 50.4;
float var_1_10 = 32.5;
float var_1_11 = 3.8;
float var_1_12 = 32.4;
unsigned short int var_1_13 = 2;
signed short int var_1_14 = 100;
unsigned short int var_1_15 = 100;
signed char var_1_16 = -50;
signed char var_1_17 = 50;
signed char var_1_18 = -8;
signed char var_1_19 = -64;
float var_1_22 = 5.1;
unsigned short int var_1_23 = 1;
unsigned long int var_1_24 = 16;
signed short int var_1_25 = -10;
signed short int var_1_26 = 32;
signed short int var_1_27 = 5;
signed long int var_1_28 = -8;
signed long int var_1_29 = 5;
signed short int var_1_30 = -500;
signed short int var_1_31 = 8;
signed short int var_1_32 = -50;
signed short int var_1_33 = -64;
signed short int var_1_34 = -2;
signed short int var_1_35 = 25;
unsigned char var_1_36 = 128;
double var_1_37 = 2.8;
double var_1_38 = 5.75;
unsigned char var_1_39 = 128;
unsigned char var_1_40 = 1;
unsigned char var_1_41 = 8;
unsigned char var_1_42 = 25;
double var_1_43 = 32.625;
unsigned char var_1_44 = 0;
unsigned char var_1_45 = 0;
unsigned char var_1_46 = 128;
signed char var_1_47 = 4;
signed char var_1_48 = 5;
signed long int var_1_49 = -128;

// Calibration values

// Last'ed variables
signed char last_1_var_1_16 = -50;
unsigned long int last_1_var_1_24 = 16;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch195Filler_PE_CN
	/* 14L, 168L, 585L, 602L, 887L, 998L) */ if (/* 9L, 149L, 150L, 586L, 603L, 882L, 999L) */ ((/* 6L, 147L, 151L, 587L, 604L, 879L, 1000L) */ ((last_1_var_1_16) ^ (/* 5L, 146L, 153L, 589L, 606L, 878L, 1003L) */ ((last_1_var_1_24) / (var_1_14))))) <= (last_1_var_1_24))) {
		/* 13L, 167L, 593L, 610L, 886L, 1009L) */ var_1_13 = (
			var_1_15
		);
	}


	// From: Req9Batch195Filler_PE_CN
	/* 1069L, 284L, 850L, 856L) */ var_1_24 = (
		var_1_13
	);


	// From: Req1Batch195Filler_PE_CN
	unsigned long int stepLocal_0 = /* 914L, 5L, 9L, 292L, 303L) */ ((var_1_24) * (1));
	/* 924L, 21L, 289L, 300L) */ if (/* 919L, 6L, 7L, 290L, 301L) */ ((128) >= (stepLocal_0))) {
		/* 923L, 20L, 295L, 306L) */ var_1_1 = (
			4
		);
	}


	// From: Req2Batch195Filler_PE_CN
	unsigned long int stepLocal_1 = /* 929L, 32L, 36L, 337L, 372L) */ ((var_1_24) | (var_1_13));
	/* 963L, 93L, 333L, 368L) */ if (var_1_4) {
		/* 948L, 57L, 335L, 370L) */ if (/* 935L, 34L, 35L, 336L, 371L) */ ((stepLocal_1) <= (var_1_24))) {
			/* 943L, 52L, 341L, 376L) */ var_1_3 = (
				/* 942L, 51L, 344L, 379L) */ ((
					/* 940L, 49L, 345L, 380L) */ ((
						10000.6f
					) - (
						var_1_6
					))
				) + (
					var_1_7
				))
			);
		} else {
			/* 947L, 56L, 349L, 384L) */ var_1_3 = (
				var_1_6
			);
		}
	} else {
		/* 962L, 91L, 353L, 388L) */ if (/* 957L, 68L, 69L, 354L, 389L) */ ((/* 955L, 66L, 70L, 355L, 390L) */ ((/* 951L, 62L, 71L, 356L, 391L) */ ((var_1_6) - (var_1_8))) / (/* 954L, 65L, 74L, 359L, 394L) */ (max (/* 954L, 65L, 74L, 359L, 394L) */ (var_1_9) , (3.5)))))) == (var_1_7))) {
			/* 961L, 90L, 363L, 398L) */ var_1_3 = (
				var_1_7
			);
		}
	}


	// From: Req3Batch195Filler_PE_CN
	/* 967L, 137L, 473L, 500L) */ if (/* 968L, 103L, 104L, 474L, 501L) */ ((/* 969L, 101L, 105L, 475L, 502L) */ ((var_1_3) / (var_1_9))) >= (var_1_6))) {
		/* 973L, 131L, 479L, 506L) */ if (var_1_4) {
			/* 975L, 122L, 481L, 508L) */ var_1_10 = (
				/* 978L, 121L, 484L, 511L) */ ((
					var_1_6
				) - (
					var_1_11
				))
			);
		} else {
			/* 981L, 130L, 487L, 514L) */ var_1_10 = (
				/* 984L, 129L, 490L, 517L) */ ((
					/* 985L, 127L, 491L, 518L) */ ((
						var_1_6
					) + (
						var_1_12
					))
				) - (
					var_1_11
				))
			);
		}
	} else {
		/* 989L, 136L, 495L, 522L) */ var_1_10 = (
			var_1_11
		);
	}


	// From: Req5Batch195Filler_PE_CN
	/* 1015L, 197L, 650L, 662L) */ if (/* 1016L, 184L, 185L, 651L, 663L) */ ((var_1_6) < (0.375f))) {
		/* 1019L, 196L, 654L, 666L) */ var_1_16 = (
			/* 1022L, 195L, 657L, 669L) */ (max (
				/* 1022L, 195L, 657L, 669L) */ (
					var_1_17
				) , (
					var_1_18
				)
			))
		);
	}


	// From: Req7Batch195Filler_PE_CN
	/* 1053L, 261L, 783L, 794L) */ if (var_1_4) {
		/* 1055L, 260L, 785L, 796L) */ var_1_22 = (
			/* 1058L, 259L, 788L, 799L) */ (min (
				/* 1058L, 259L, 788L, 799L) */ (
					var_1_7
				) , (
					var_1_6
				)
			))
		);
	}


	// From: Req8Batch195Filler_PE_CN
	/* 1063L, 274L, 826L, 832L) */ var_1_23 = (
		var_1_15
	);


	// From: Req6Batch195Filler_PE_CN
	unsigned char stepLocal_2 = var_1_4;
	/* 1047L, 246L, 697L, 718L) */ if (/* 1036L, 214L, 215L, 698L, 719L) */ ((/* 1035L, 212L, 216L, 699L, 720L) */ ((/* 1031L, 208L, 217L, 700L, 721L) */ (min (/* 1031L, 208L, 217L, 700L, 721L) */ (var_1_23) , (var_1_14)))) >= (/* 1034L, 211L, 220L, 703L, 724L) */ ((var_1_24) * (var_1_18))))) && (stepLocal_2))) {
		/* 1046L, 244L, 707L, 728L) */ if (var_1_4) {
			/* 1041L, 239L, 709L, 730L) */ var_1_19 = (
				var_1_18
			);
		} else {
			/* 1045L, 243L, 713L, 734L) */ var_1_19 = (
				var_1_17
			);
		}
	}


	// From: CodeObject1
	/* 136L) */ if (/* 49L, 48L) */ ((/* 50L, 44L) */ ((var_1_26) - (var_1_27))) > (/* 53L, 47L) */ (min (/* 53L, 47L) */ (var_1_28) , (var_1_29)))))) {
		/* 128L) */ if (/* 70L, 69L) */ ((/* 71L, 67L) */ ((0) ^ (/* 73L, 66L) */ ((var_1_28) ^ (var_1_27))))) <= (var_1_26))) {
			/* 126L) */ if (/* 87L, 86L) */ ((var_1_29) == (var_1_26))) {
				/* 116L) */ if (/* 96L, 95L) */ ((var_1_28) > (-10))) {
					/* 107L) */ var_1_25 = (
						/* 106L) */ (min (
							/* 106L) */ (
								var_1_30
							) , (
								var_1_31
							)
						))
					);
				} else {
					/* 115L) */ var_1_25 = (
						/* 114L) */ ((
							var_1_32
						) + (
							/* 113L) */ ((
								var_1_33
							) + (
								var_1_34
							))
						))
					);
				}
			} else {
				/* 125L) */ var_1_25 = (
					/* 124L) */ ((
						var_1_35
					) - (
						/* 123L) */ (abs (
							/* 122L) */ (abs (
								var_1_32
							))
						))
					))
				);
			}
		}
	} else {
		/* 135L) */ var_1_25 = (
			/* 134L) */ (abs (
				/* 133L) */ (abs (
					var_1_35
				))
			))
		);
	}


	// From: CodeObject2
	/* 167L) */ if (/* 146L, 145L) */ ((/* 147L, 143L) */ (abs (var_1_37))) <= (var_1_38))) {
		/* 159L) */ var_1_36 = (
			/* 158L) */ (max (
				/* 158L) */ (
					var_1_39
				) , (
					var_1_40
				)
			))
		);
	} else {
		/* 166L) */ var_1_36 = (
			/* 165L) */ ((
				var_1_41
			) + (
				/* 164L) */ (abs (
					var_1_42
				))
			))
		);
	}


	// From: CodeObject3
	/* 174L) */ var_1_43 = (
		0.65
	);


	// From: CodeObject4
	/* 182L) */ var_1_44 = (
		var_1_45
	);


	// From: CodeObject5
	/* 190L) */ var_1_46 = (
		var_1_40
	);


	// From: CodeObject6
	/* 271L) */ if (/* 201L, 200L) */ ((var_1_42) <= (/* 203L, 199L) */ (abs (/* 204L, 198L) */ (abs (var_1_25))))))) {
		/* 265L) */ if (/* 215L, 214L) */ ((/* 216L, 212L) */ (abs (var_1_43))) >= (var_1_38))) {
			/* 226L) */ var_1_47 = (
				var_1_48
			);
		} else {
			/* 263L) */ if (/* 234L, 233L) */ ((/* 235L, 229L) */ ((var_1_26) * (var_1_27))) >= (/* 238L, 232L) */ ((var_1_33) / (var_1_49))))) {
				/* 261L) */ if (/* 251L, 250L) */ ((var_1_44) && (var_1_45))) {
					/* 260L) */ var_1_47 = (
						var_1_48
					);
				}
			}
		}
	} else {
		/* 270L) */ var_1_47 = (
			var_1_48
		);
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= -461168.6018427383000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
	assume_abort_if_not(var_1_9 != 0.0F);
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_14 >= -32768);
	assume_abort_if_not(var_1_14 <= 32767);
	assume_abort_if_not(var_1_14 != 0);
	var_1_15 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 65534);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= -127);
	assume_abort_if_not(var_1_17 <= 126);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= -127);
	assume_abort_if_not(var_1_18 <= 126);
	var_1_26 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_26 >= -1);
	assume_abort_if_not(var_1_26 <= 32767);
	var_1_27 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 32767);
	var_1_28 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_28 >= -2147483648);
	assume_abort_if_not(var_1_28 <= 2147483647);
	var_1_29 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_29 >= -2147483648);
	assume_abort_if_not(var_1_29 <= 2147483647);
	var_1_30 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_30 >= -32767);
	assume_abort_if_not(var_1_30 <= 32766);
	var_1_31 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_31 >= -32767);
	assume_abort_if_not(var_1_31 <= 32766);
	var_1_32 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_32 >= -16383);
	assume_abort_if_not(var_1_32 <= 16383);
	var_1_33 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_33 >= -8191);
	assume_abort_if_not(var_1_33 <= 8192);
	var_1_34 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_34 >= -8191);
	assume_abort_if_not(var_1_34 <= 8191);
	var_1_35 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_35 >= -1);
	assume_abort_if_not(var_1_35 <= 32766);
	var_1_37 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_37 >= -922337.2036854776000e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854776000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_38 >= -922337.2036854776000e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854776000e+12F && var_1_38 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 254);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 254);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 127);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 127);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 0);
	var_1_48 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_48 >= -127);
	assume_abort_if_not(var_1_48 <= 126);
	var_1_49 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_49 >= -2147483648);
	assume_abort_if_not(var_1_49 <= 2147483647);
	assume_abort_if_not(var_1_49 != 0);
}



void updateLastVariables(void) {
	last_1_var_1_16 = var_1_16;
	last_1_var_1_24 = var_1_24;
}

int property(void) {
	if (/* 274L, 6L, 12L, 312L, 323L, 1075L) */ ((128) >= (/* 276L, 5L, 14L, 314L, 325L, 1077L) */ ((var_1_24) * (1))))) {
	}
	if (var_1_4) {
		if (/* 287L, 34L, 40L, 406L, 441L, 1088L) */ ((/* 288L, 32L, 41L, 407L, 442L, 1089L) */ ((var_1_24) | (var_1_13))) <= (var_1_24))) {
		} else {
		}
	} else {
		if (/* 305L, 68L, 78L, 424L, 459L, 1106L) */ ((/* 306L, 66L, 79L, 425L, 460L, 1107L) */ ((/* 307L, 62L, 80L, 426L, 461L, 1108L) */ ((var_1_6) - (var_1_8))) / (/* 310L, 65L, 83L, 429L, 464L, 1111L) */ (max (/* 310L, 65L, 83L, 429L, 464L, 1111L) */ (var_1_9) , (3.5)))))) == (var_1_7))) {
		}
	}
	if (/* 320L, 103L, 109L, 528L, 555L, 1121L) */ ((/* 321L, 101L, 110L, 529L, 556L, 1122L) */ ((var_1_3) / (var_1_9))) >= (var_1_6))) {
		if (var_1_4) {
		} else {
		}
	} else {
	}
	if (/* 351L, 149L, 157L, 620L, 637L, 902L, 1152L, 29L) */ ((/* 352L, 147L, 158L, 621L, 638L, 899L, 1153L, 26L) */ ((last_1_var_1_16) ^ (/* 355L, 146L, 160L, 623L, 640L, 898L, 1156L, 25L) */ ((last_1_var_1_24) / (var_1_14))))) <= (last_1_var_1_24))) {
	}
	if (/* 368L, 184L, 188L, 675L, 687L, 1169L) */ ((var_1_6) < (0.375f))) {
	}
	if (/* 379L, 214L, 224L, 740L, 761L, 1180L) */ ((/* 380L, 212L, 225L, 741L, 762L, 1181L) */ ((/* 381L, 208L, 226L, 742L, 763L, 1182L) */ (min (/* 381L, 208L, 226L, 742L, 763L, 1182L) */ (var_1_23) , (var_1_14)))) >= (/* 384L, 211L, 229L, 745L, 766L, 1185L) */ ((var_1_24) * (var_1_18))))) && (var_1_4))) {
		if (var_1_4) {
		} else {
		}
	}
	if (var_1_4) {
	}
	return /* 429L) */ ((
	/* 428L) */ ((
		/* 427L) */ ((
			/* 426L) */ ((
				/* 425L) */ ((
					/* 424L) */ ((
						/* 423L) */ ((
							/* 422L) */ ((
								/* 273L, 22L, 311L, 322L, 1074L) */ ((
									/* 274L, 6L, 12L, 312L, 323L, 1075L) */ ((
										128
									) >= (
										/* 276L, 5L, 14L, 314L, 325L, 1077L) */ ((
											var_1_24
										) * (
											1
										))
									))
								) ? (
									/* 279L, 20L, 317L, 328L, 1080L) */ ((
										var_1_1
									) == (
										/* 279L, 20L, 317L, 328L, 1080L) */ ((signed char) (
											4
										))
									))
								) : (
									1
								))
							) && (
								/* 284L, 94L, 403L, 438L, 1085L) */ ((
									var_1_4
								) ? (
									/* 286L, 58L, 405L, 440L, 1087L) */ ((
										/* 287L, 34L, 40L, 406L, 441L, 1088L) */ ((
											/* 288L, 32L, 41L, 407L, 442L, 1089L) */ ((
												var_1_24
											) | (
												var_1_13
											))
										) <= (
											var_1_24
										))
									) ? (
										/* 292L, 52L, 411L, 446L, 1093L) */ ((
											var_1_3
										) == (
											/* 292L, 52L, 411L, 446L, 1093L) */ ((float) (
												/* 295L, 51L, 414L, 449L, 1096L) */ ((
													/* 296L, 49L, 415L, 450L, 1097L) */ ((
														10000.6f
													) - (
														var_1_6
													))
												) + (
													var_1_7
												))
											))
										))
									) : (
										/* 300L, 56L, 419L, 454L, 1101L) */ ((
											var_1_3
										) == (
											/* 300L, 56L, 419L, 454L, 1101L) */ ((float) (
												var_1_6
											))
										))
									))
								) : (
									/* 304L, 92L, 423L, 458L, 1105L) */ ((
										/* 305L, 68L, 78L, 424L, 459L, 1106L) */ ((
											/* 306L, 66L, 79L, 425L, 460L, 1107L) */ ((
												/* 307L, 62L, 80L, 426L, 461L, 1108L) */ ((
													var_1_6
												) - (
													var_1_8
												))
											) / (
												/* 310L, 65L, 83L, 429L, 464L, 1111L) */ (max (
													/* 310L, 65L, 83L, 429L, 464L, 1111L) */ (
														var_1_9
													) , (
														3.5
													)
												))
											))
										) == (
											var_1_7
										))
									) ? (
										/* 314L, 90L, 433L, 468L, 1115L) */ ((
											var_1_3
										) == (
											/* 314L, 90L, 433L, 468L, 1115L) */ ((float) (
												var_1_7
											))
										))
									) : (
										1
									))
								))
							))
						) && (
							/* 319L, 138L, 527L, 554L, 1120L) */ ((
								/* 320L, 103L, 109L, 528L, 555L, 1121L) */ ((
									/* 321L, 101L, 110L, 529L, 556L, 1122L) */ ((
										var_1_3
									) / (
										var_1_9
									))
								) >= (
									var_1_6
								))
							) ? (
								/* 325L, 132L, 533L, 560L, 1126L) */ ((
									var_1_4
								) ? (
									/* 327L, 122L, 535L, 562L, 1128L) */ ((
										var_1_10
									) == (
										/* 327L, 122L, 535L, 562L, 1128L) */ ((float) (
											/* 330L, 121L, 538L, 565L, 1131L) */ ((
												var_1_6
											) - (
												var_1_11
											))
										))
									))
								) : (
									/* 333L, 130L, 541L, 568L, 1134L) */ ((
										var_1_10
									) == (
										/* 333L, 130L, 541L, 568L, 1134L) */ ((float) (
											/* 336L, 129L, 544L, 571L, 1137L) */ ((
												/* 337L, 127L, 545L, 572L, 1138L) */ ((
													var_1_6
												) + (
													var_1_12
												))
											) - (
												var_1_11
											))
										))
									))
								))
							) : (
								/* 341L, 136L, 549L, 576L, 1142L) */ ((
									var_1_10
								) == (
									/* 341L, 136L, 549L, 576L, 1142L) */ ((float) (
										var_1_11
									))
								))
							))
						))
					) && (
						/* 350L, 169L, 619L, 636L, 907L, 1151L, 34L) */ ((
							/* 351L, 149L, 157L, 620L, 637L, 902L, 1152L, 29L) */ ((
								/* 352L, 147L, 158L, 621L, 638L, 899L, 1153L, 26L) */ ((
									last_1_var_1_16
								) ^ (
									/* 355L, 146L, 160L, 623L, 640L, 898L, 1156L, 25L) */ ((
										last_1_var_1_24
									) / (
										var_1_14
									))
								))
							) <= (
								last_1_var_1_24
							))
						) ? (
							/* 361L, 167L, 627L, 644L, 906L, 1162L, 33L) */ ((
								var_1_13
							) == (
								/* 361L, 167L, 627L, 644L, 906L, 1162L, 33L) */ ((unsigned short int) (
									var_1_15
								))
							))
						) : (
							1
						))
					))
				) && (
					/* 367L, 198L, 674L, 686L, 1168L) */ ((
						/* 368L, 184L, 188L, 675L, 687L, 1169L) */ ((
							var_1_6
						) < (
							0.375f
						))
					) ? (
						/* 371L, 196L, 678L, 690L, 1172L) */ ((
							var_1_16
						) == (
							/* 371L, 196L, 678L, 690L, 1172L) */ ((signed char) (
								/* 374L, 195L, 681L, 693L, 1175L) */ (max (
									/* 374L, 195L, 681L, 693L, 1175L) */ (
										var_1_17
									) , (
										var_1_18
									)
								))
							))
						))
					) : (
						1
					))
				))
			) && (
				/* 378L, 247L, 739L, 760L, 1179L) */ ((
					/* 379L, 214L, 224L, 740L, 761L, 1180L) */ ((
						/* 380L, 212L, 225L, 741L, 762L, 1181L) */ ((
							/* 381L, 208L, 226L, 742L, 763L, 1182L) */ (min (
								/* 381L, 208L, 226L, 742L, 763L, 1182L) */ (
									var_1_23
								) , (
									var_1_14
								)
							))
						) >= (
							/* 384L, 211L, 229L, 745L, 766L, 1185L) */ ((
								var_1_24
							) * (
								var_1_18
							))
						))
					) && (
						var_1_4
					))
				) ? (
					/* 388L, 245L, 749L, 770L, 1189L) */ ((
						var_1_4
					) ? (
						/* 390L, 239L, 751L, 772L, 1191L) */ ((
							var_1_19
						) == (
							/* 390L, 239L, 751L, 772L, 1191L) */ ((signed char) (
								var_1_18
							))
						))
					) : (
						/* 394L, 243L, 755L, 776L, 1195L) */ ((
							var_1_19
						) == (
							/* 394L, 243L, 755L, 776L, 1195L) */ ((signed char) (
								var_1_17
							))
						))
					))
				) : (
					1
				))
			))
		) && (
			/* 401L, 262L, 805L, 816L, 1202L) */ ((
				var_1_4
			) ? (
				/* 403L, 260L, 807L, 818L, 1204L) */ ((
					var_1_22
				) == (
					/* 403L, 260L, 807L, 818L, 1204L) */ ((float) (
						/* 406L, 259L, 810L, 821L, 1207L) */ (min (
							/* 406L, 259L, 810L, 821L, 1207L) */ (
								var_1_7
							) , (
								var_1_6
							)
						))
					))
				))
			) : (
				1
			))
		))
	) && (
		/* 411L, 274L, 838L, 844L, 1212L) */ ((
			var_1_23
		) == (
			/* 411L, 274L, 838L, 844L, 1212L) */ ((unsigned short int) (
				var_1_15
			))
		))
	))
) && (
	/* 417L, 284L, 862L, 868L, 1218L) */ ((
		var_1_24
	) == (
		/* 417L, 284L, 862L, 868L, 1218L) */ ((unsigned long int) (
			var_1_13
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
