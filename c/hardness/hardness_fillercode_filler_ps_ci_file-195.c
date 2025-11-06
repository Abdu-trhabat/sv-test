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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch195Filler_PS_CI.c", 13, "reach_error"); }
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
unsigned char var_1_39 = 128;
unsigned char var_1_40 = 1;
unsigned char var_1_41 = 8;
unsigned char var_1_42 = 25;
double var_1_43 = 32.625;
unsigned char var_1_44 = 0;
unsigned char var_1_45 = 0;
unsigned char var_1_46 = 128;
signed char var_1_47 = 4;
signed long int var_1_49 = -128;

// Calibration values

// Last'ed variables
signed char last_1_var_1_16 = -50;
unsigned long int last_1_var_1_24 = 16;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	/* 327L, 136L) */ if (/* 328L, 48L, 49L) */ ((/* 329L, 44L, 50L) */ ((var_1_26) - (var_1_27))) > (/* 332L, 47L, 53L) */ (min (/* 332L, 47L, 53L) */ (var_1_28) , (var_1_29)))))) {
		/* 335L, 128L) */ if (/* 336L, 69L, 70L) */ ((/* 337L, 67L, 71L) */ ((0) ^ (/* 339L, 66L, 73L) */ ((var_1_28) ^ (var_1_27))))) <= (var_1_26))) {
			/* 343L, 126L) */ if (/* 344L, 86L, 87L) */ ((var_1_29) == (var_1_26))) {
				/* 347L, 116L) */ if (/* 348L, 95L, 96L) */ ((var_1_28) > (-10))) {
					/* 351L, 107L) */ var_1_25 = (
						/* 354L, 106L) */ (min (
							/* 354L, 106L) */ (
								var_1_30
							) , (
								var_1_31
							)
						))
					);
				} else {
					/* 357L, 115L) */ var_1_25 = (
						/* 360L, 114L) */ ((
							var_1_32
						) + (
							/* 362L, 113L) */ ((
								var_1_33
							) + (
								var_1_34
							))
						))
					);
				}
			} else {
				/* 365L, 125L) */ var_1_25 = (
					/* 368L, 124L) */ ((
						var_1_35
					) - (
						/* 370L, 123L) */ (abs (
							/* 371L, 122L) */ (abs (
								var_1_32
							))
						))
					))
				);
			}
		}
	} else {
		/* 373L, 135L) */ var_1_25 = (
			/* 376L, 134L) */ (abs (
				/* 377L, 133L) */ (abs (
					var_1_35
				))
			))
		);
	}


	// From: CodeObject2
	/* 379L, 167L) */ if (/* 380L, 145L, 146L) */ ((/* 381L, 143L, 147L) */ (abs (var_1_8))) <= (var_1_8))) {
		/* 384L, 159L) */ var_1_36 = (
			/* 387L, 158L) */ (max (
				/* 387L, 158L) */ (
					var_1_39
				) , (
					var_1_40
				)
			))
		);
	} else {
		/* 390L, 166L) */ var_1_36 = (
			/* 393L, 165L) */ ((
				var_1_41
			) + (
				/* 395L, 164L) */ (abs (
					var_1_42
				))
			))
		);
	}


	// From: CodeObject3
	/* 398L, 174L) */ var_1_43 = (
		0.65
	);


	// From: CodeObject4
	/* 403L, 182L) */ var_1_44 = (
		var_1_45
	);


	// From: CodeObject5
	/* 408L, 190L) */ var_1_46 = (
		var_1_40
	);


	// From: CodeObject6
	/* 412L, 271L) */ if (/* 413L, 200L, 201L) */ ((var_1_42) <= (/* 415L, 199L, 203L) */ (abs (/* 416L, 198L, 204L) */ (abs (var_1_24))))))) {
		/* 418L, 265L) */ if (/* 419L, 214L, 215L) */ ((/* 420L, 212L, 216L) */ (abs (var_1_9))) >= (var_1_8))) {
			/* 423L, 226L) */ var_1_47 = (
				var_1_18
			);
		} else {
			/* 427L, 263L) */ if (/* 428L, 233L, 234L) */ ((/* 429L, 229L, 235L) */ ((var_1_26) * (var_1_27))) >= (/* 432L, 232L, 238L) */ ((var_1_33) / (var_1_49))))) {
				/* 435L, 261L) */ if (/* 436L, 250L, 251L) */ ((var_1_4) && (var_1_45))) {
					/* 439L, 260L) */ var_1_47 = (
						var_1_18
					);
				}
			}
		}
	} else {
		/* 443L, 270L) */ var_1_47 = (
			var_1_18
		);
	}


	// From: Req4Batch195Filler_PS_CI
	/* 14L, 168L, 585L, 602L, 887L, 998L) */ if (/* 9L, 149L, 150L, 586L, 603L, 882L, 999L) */ ((/* 6L, 147L, 151L, 587L, 604L, 879L, 1000L) */ ((last_1_var_1_16) ^ (/* 5L, 146L, 153L, 589L, 606L, 878L, 1003L) */ ((last_1_var_1_24) / (var_1_14))))) <= (last_1_var_1_24))) {
		/* 13L, 167L, 593L, 610L, 886L, 1009L) */ var_1_13 = (
			var_1_15
		);
	}


	// From: Req9Batch195Filler_PS_CI
	/* 1069L, 284L, 850L, 856L) */ var_1_24 = (
		var_1_13
	);


	// From: Req1Batch195Filler_PS_CI
	unsigned long int stepLocal_0 = /* 914L, 5L, 9L, 292L, 303L) */ ((var_1_24) * (1));
	/* 924L, 21L, 289L, 300L) */ if (/* 919L, 6L, 7L, 290L, 301L) */ ((128) >= (stepLocal_0))) {
		/* 923L, 20L, 295L, 306L) */ var_1_1 = (
			4
		);
	}


	// From: Req2Batch195Filler_PS_CI
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


	// From: Req3Batch195Filler_PS_CI
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


	// From: Req5Batch195Filler_PS_CI
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


	// From: Req7Batch195Filler_PS_CI
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


	// From: Req8Batch195Filler_PS_CI
	/* 1063L, 274L, 826L, 832L) */ var_1_23 = (
		var_1_15
	);


	// From: Req6Batch195Filler_PS_CI
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
	if (/* 448L, 6L, 12L, 312L, 323L, 1075L) */ ((128) >= (/* 450L, 5L, 14L, 314L, 325L, 1077L) */ ((var_1_24) * (1))))) {
	}
	if (var_1_4) {
		if (/* 461L, 34L, 40L, 406L, 441L, 1088L) */ ((/* 462L, 32L, 41L, 407L, 442L, 1089L) */ ((var_1_24) | (var_1_13))) <= (var_1_24))) {
		} else {
		}
	} else {
		if (/* 479L, 68L, 78L, 424L, 459L, 1106L) */ ((/* 480L, 66L, 79L, 425L, 460L, 1107L) */ ((/* 481L, 62L, 80L, 426L, 461L, 1108L) */ ((var_1_6) - (var_1_8))) / (/* 484L, 65L, 83L, 429L, 464L, 1111L) */ (max (/* 484L, 65L, 83L, 429L, 464L, 1111L) */ (var_1_9) , (3.5)))))) == (var_1_7))) {
		}
	}
	if (/* 494L, 103L, 109L, 528L, 555L, 1121L) */ ((/* 495L, 101L, 110L, 529L, 556L, 1122L) */ ((var_1_3) / (var_1_9))) >= (var_1_6))) {
		if (var_1_4) {
		} else {
		}
	} else {
	}
	if (/* 525L, 149L, 157L, 620L, 637L, 902L, 1152L, 29L) */ ((/* 526L, 147L, 158L, 621L, 638L, 899L, 1153L, 26L) */ ((last_1_var_1_16) ^ (/* 529L, 146L, 160L, 623L, 640L, 898L, 1156L, 25L) */ ((last_1_var_1_24) / (var_1_14))))) <= (last_1_var_1_24))) {
	}
	if (/* 542L, 184L, 188L, 675L, 687L, 1169L) */ ((var_1_6) < (0.375f))) {
	}
	if (/* 553L, 214L, 224L, 740L, 761L, 1180L) */ ((/* 554L, 212L, 225L, 741L, 762L, 1181L) */ ((/* 555L, 208L, 226L, 742L, 763L, 1182L) */ (min (/* 555L, 208L, 226L, 742L, 763L, 1182L) */ (var_1_23) , (var_1_14)))) >= (/* 558L, 211L, 229L, 745L, 766L, 1185L) */ ((var_1_24) * (var_1_18))))) && (var_1_4))) {
		if (var_1_4) {
		} else {
		}
	}
	if (var_1_4) {
	}
	return /* 603L) */ ((
	/* 602L) */ ((
		/* 601L) */ ((
			/* 600L) */ ((
				/* 599L) */ ((
					/* 598L) */ ((
						/* 597L) */ ((
							/* 596L) */ ((
								/* 447L, 22L, 311L, 322L, 1074L) */ ((
									/* 448L, 6L, 12L, 312L, 323L, 1075L) */ ((
										128
									) >= (
										/* 450L, 5L, 14L, 314L, 325L, 1077L) */ ((
											var_1_24
										) * (
											1
										))
									))
								) ? (
									/* 453L, 20L, 317L, 328L, 1080L) */ ((
										var_1_1
									) == (
										/* 453L, 20L, 317L, 328L, 1080L) */ ((signed char) (
											4
										))
									))
								) : (
									1
								))
							) && (
								/* 458L, 94L, 403L, 438L, 1085L) */ ((
									var_1_4
								) ? (
									/* 460L, 58L, 405L, 440L, 1087L) */ ((
										/* 461L, 34L, 40L, 406L, 441L, 1088L) */ ((
											/* 462L, 32L, 41L, 407L, 442L, 1089L) */ ((
												var_1_24
											) | (
												var_1_13
											))
										) <= (
											var_1_24
										))
									) ? (
										/* 466L, 52L, 411L, 446L, 1093L) */ ((
											var_1_3
										) == (
											/* 466L, 52L, 411L, 446L, 1093L) */ ((float) (
												/* 469L, 51L, 414L, 449L, 1096L) */ ((
													/* 470L, 49L, 415L, 450L, 1097L) */ ((
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
										/* 474L, 56L, 419L, 454L, 1101L) */ ((
											var_1_3
										) == (
											/* 474L, 56L, 419L, 454L, 1101L) */ ((float) (
												var_1_6
											))
										))
									))
								) : (
									/* 478L, 92L, 423L, 458L, 1105L) */ ((
										/* 479L, 68L, 78L, 424L, 459L, 1106L) */ ((
											/* 480L, 66L, 79L, 425L, 460L, 1107L) */ ((
												/* 481L, 62L, 80L, 426L, 461L, 1108L) */ ((
													var_1_6
												) - (
													var_1_8
												))
											) / (
												/* 484L, 65L, 83L, 429L, 464L, 1111L) */ (max (
													/* 484L, 65L, 83L, 429L, 464L, 1111L) */ (
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
										/* 488L, 90L, 433L, 468L, 1115L) */ ((
											var_1_3
										) == (
											/* 488L, 90L, 433L, 468L, 1115L) */ ((float) (
												var_1_7
											))
										))
									) : (
										1
									))
								))
							))
						) && (
							/* 493L, 138L, 527L, 554L, 1120L) */ ((
								/* 494L, 103L, 109L, 528L, 555L, 1121L) */ ((
									/* 495L, 101L, 110L, 529L, 556L, 1122L) */ ((
										var_1_3
									) / (
										var_1_9
									))
								) >= (
									var_1_6
								))
							) ? (
								/* 499L, 132L, 533L, 560L, 1126L) */ ((
									var_1_4
								) ? (
									/* 501L, 122L, 535L, 562L, 1128L) */ ((
										var_1_10
									) == (
										/* 501L, 122L, 535L, 562L, 1128L) */ ((float) (
											/* 504L, 121L, 538L, 565L, 1131L) */ ((
												var_1_6
											) - (
												var_1_11
											))
										))
									))
								) : (
									/* 507L, 130L, 541L, 568L, 1134L) */ ((
										var_1_10
									) == (
										/* 507L, 130L, 541L, 568L, 1134L) */ ((float) (
											/* 510L, 129L, 544L, 571L, 1137L) */ ((
												/* 511L, 127L, 545L, 572L, 1138L) */ ((
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
								/* 515L, 136L, 549L, 576L, 1142L) */ ((
									var_1_10
								) == (
									/* 515L, 136L, 549L, 576L, 1142L) */ ((float) (
										var_1_11
									))
								))
							))
						))
					) && (
						/* 524L, 169L, 619L, 636L, 907L, 1151L, 34L) */ ((
							/* 525L, 149L, 157L, 620L, 637L, 902L, 1152L, 29L) */ ((
								/* 526L, 147L, 158L, 621L, 638L, 899L, 1153L, 26L) */ ((
									last_1_var_1_16
								) ^ (
									/* 529L, 146L, 160L, 623L, 640L, 898L, 1156L, 25L) */ ((
										last_1_var_1_24
									) / (
										var_1_14
									))
								))
							) <= (
								last_1_var_1_24
							))
						) ? (
							/* 535L, 167L, 627L, 644L, 906L, 1162L, 33L) */ ((
								var_1_13
							) == (
								/* 535L, 167L, 627L, 644L, 906L, 1162L, 33L) */ ((unsigned short int) (
									var_1_15
								))
							))
						) : (
							1
						))
					))
				) && (
					/* 541L, 198L, 674L, 686L, 1168L) */ ((
						/* 542L, 184L, 188L, 675L, 687L, 1169L) */ ((
							var_1_6
						) < (
							0.375f
						))
					) ? (
						/* 545L, 196L, 678L, 690L, 1172L) */ ((
							var_1_16
						) == (
							/* 545L, 196L, 678L, 690L, 1172L) */ ((signed char) (
								/* 548L, 195L, 681L, 693L, 1175L) */ (max (
									/* 548L, 195L, 681L, 693L, 1175L) */ (
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
				/* 552L, 247L, 739L, 760L, 1179L) */ ((
					/* 553L, 214L, 224L, 740L, 761L, 1180L) */ ((
						/* 554L, 212L, 225L, 741L, 762L, 1181L) */ ((
							/* 555L, 208L, 226L, 742L, 763L, 1182L) */ (min (
								/* 555L, 208L, 226L, 742L, 763L, 1182L) */ (
									var_1_23
								) , (
									var_1_14
								)
							))
						) >= (
							/* 558L, 211L, 229L, 745L, 766L, 1185L) */ ((
								var_1_24
							) * (
								var_1_18
							))
						))
					) && (
						var_1_4
					))
				) ? (
					/* 562L, 245L, 749L, 770L, 1189L) */ ((
						var_1_4
					) ? (
						/* 564L, 239L, 751L, 772L, 1191L) */ ((
							var_1_19
						) == (
							/* 564L, 239L, 751L, 772L, 1191L) */ ((signed char) (
								var_1_18
							))
						))
					) : (
						/* 568L, 243L, 755L, 776L, 1195L) */ ((
							var_1_19
						) == (
							/* 568L, 243L, 755L, 776L, 1195L) */ ((signed char) (
								var_1_17
							))
						))
					))
				) : (
					1
				))
			))
		) && (
			/* 575L, 262L, 805L, 816L, 1202L) */ ((
				var_1_4
			) ? (
				/* 577L, 260L, 807L, 818L, 1204L) */ ((
					var_1_22
				) == (
					/* 577L, 260L, 807L, 818L, 1204L) */ ((float) (
						/* 580L, 259L, 810L, 821L, 1207L) */ (min (
							/* 580L, 259L, 810L, 821L, 1207L) */ (
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
		/* 585L, 274L, 838L, 844L, 1212L) */ ((
			var_1_23
		) == (
			/* 585L, 274L, 838L, 844L, 1212L) */ ((unsigned short int) (
				var_1_15
			))
		))
	))
) && (
	/* 591L, 284L, 862L, 868L, 1218L) */ ((
		var_1_24
	) == (
		/* 591L, 284L, 862L, 868L, 1218L) */ ((unsigned long int) (
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
