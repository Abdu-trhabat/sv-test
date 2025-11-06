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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch105Filler_PE_CI.c", 13, "reach_error"); }
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
float var_1_1 = 128.3;
unsigned char var_1_2 = 1;
float var_1_4 = 0.25;
float var_1_5 = 15.55;
signed short int var_1_6 = 50;
signed short int var_1_7 = -128;
unsigned char var_1_8 = 0;
signed short int var_1_9 = 500;
signed short int var_1_10 = 25;
signed short int var_1_11 = 10000;
signed short int var_1_12 = 25;
unsigned char var_1_13 = 10;
unsigned char var_1_14 = 64;
unsigned char var_1_15 = 8;
unsigned char var_1_16 = 4;
signed short int var_1_17 = -5;
double var_1_18 = 3.5;
double var_1_19 = 25.5;
double var_1_20 = 2.5;
double var_1_21 = 31.15;
double var_1_22 = 5.5;
double var_1_23 = 2.5;
unsigned long int var_1_24 = 128;
float var_1_26 = 0.5;
unsigned long int var_1_27 = 1;
unsigned long int var_1_30 = 64;
unsigned long int var_1_31 = 128;
unsigned long int var_1_32 = 100;
unsigned long int var_1_33 = 1;
signed long int var_1_34 = -5;
unsigned long int var_1_35 = 3143845968;
unsigned long int var_1_36 = 1944552567;
unsigned long int var_1_37 = 2;
unsigned char var_1_38 = 1;
unsigned char var_1_42 = 0;
float var_1_43 = 10000000000000.5;
signed char var_1_45 = -128;
signed char var_1_46 = 10;
unsigned short int var_1_47 = 4;
double var_1_48 = 0.125;
unsigned char var_1_49 = 1;
unsigned short int var_1_50 = 256;
signed short int var_1_51 = -100;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch105Filler_PE_CI
	/* 941L, 146L, 578L, 599L) */ if (/* 942L, 127L, 128L, 579L, 600L) */ ((/* 943L, 125L, 129L, 580L, 601L) */ ((var_1_18) - (/* 945L, 124L, 131L, 582L, 603L) */ (max (/* 945L, 124L, 131L, 582L, 603L) */ (var_1_19) , (var_1_20)))))) > (0.0))) {
		/* 949L, 145L, 586L, 607L) */ var_1_17 = (
			var_1_9
		);
	}


	// From: Req5Batch105Filler_PE_CI
	/* 955L, 185L, 655L, 669L) */ if (/* 956L, 170L, 171L, 656L, 670L) */ ((var_1_2) || (var_1_8))) {
		/* 959L, 184L, 659L, 673L) */ var_1_21 = (
			/* 962L, 183L, 662L, 676L) */ ((
				/* 963L, 181L, 663L, 677L) */ ((
					var_1_22
				) + (
					var_1_23
				))
			) + (
				3.75
			))
		);
	}


	// From: Req1Batch105Filler_PE_CI
	/* 859L, 22L, 271L, 287L) */ if (/* 860L, 5L, 6L, 272L, 288L) */ ((var_1_21) != (255.6))) {
		/* 863L, 15L, 275L, 291L) */ var_1_1 = (
			var_1_4
		);
	} else {
		/* 867L, 21L, 279L, 295L) */ var_1_1 = (
			/* 870L, 20L, 282L, 298L) */ (max (
				/* 870L, 20L, 282L, 298L) */ (
					var_1_4
				) , (
					var_1_5
				)
			))
		);
	}


	// From: Req2Batch105Filler_PE_CI
	/* 877L, 73L, 337L, 373L) */ if (var_1_2) {
		/* 879L, 36L, 339L, 375L) */ var_1_6 = (
			var_1_7
		);
	} else {
		/* 883L, 71L, 343L, 379L) */ if (/* 884L, 39L, 40L, 344L, 380L) */ ((var_1_21) >= (var_1_1))) {
			/* 887L, 65L, 347L, 383L) */ if (var_1_8) {
				/* 889L, 60L, 349L, 385L) */ var_1_6 = (
					/* 892L, 59L, 352L, 388L) */ ((
						/* 893L, 53L, 353L, 389L) */ ((
							var_1_9
						) - (
							var_1_10
						))
					) + (
						/* 896L, 58L, 356L, 392L) */ ((
							/* 897L, 56L, 357L, 393L) */ ((
								var_1_11
							) - (
								100
							))
						) - (
							var_1_12
						))
					))
				);
			} else {
				/* 901L, 64L, 361L, 397L) */ var_1_6 = (
					64
				);
			}
		} else {
			/* 905L, 70L, 365L, 401L) */ var_1_6 = (
				var_1_11
			);
		}
	}


	// From: Req6Batch105Filler_PE_CI
	/* 968L, 237L, 710L, 733L) */ if (/* 969L, 201L, 202L, 711L, 734L) */ ((/* 970L, 195L, 203L, 712L, 735L) */ ((var_1_19) - (var_1_20))) > (/* 973L, 200L, 206L, 715L, 738L) */ (min (/* 973L, 200L, 206L, 715L, 738L) */ (/* 974L, 198L, 207L, 716L, 739L) */ (min (/* 974L, 198L, 207L, 716L, 739L) */ (var_1_1) , (var_1_21)))) , (var_1_21)))))) {
		/* 978L, 235L, 720L, 743L) */ if (/* 979L, 221L, 222L, 721L, 744L) */ (! (var_1_2))) {
			/* 981L, 230L, 723L, 746L) */ var_1_24 = (
				/* 984L, 229L, 726L, 749L) */ (abs (
					var_1_10
				))
			);
		} else {
			/* 986L, 234L, 728L, 751L) */ var_1_24 = (
				var_1_9
			);
		}
	}


	// From: Req7Batch105Filler_PE_CI
	/* 992L, 264L, 803L, 817L) */ if (/* 993L, 247L, 248L, 804L, 818L) */ ((var_1_7) >= (/* 995L, 246L, 250L, 806L, 820L) */ (max (/* 995L, 246L, 250L, 806L, 820L) */ (var_1_24) , (var_1_11)))))) {
		/* 998L, 263L, 809L, 823L) */ var_1_26 = (
			/* 1001L, 262L, 812L, 826L) */ ((
				var_1_22
			) + (
				var_1_23
			))
		);
	}


	// From: Req3Batch105Filler_PE_CI
	/* 910L, 115L, 478L, 501L) */ if (/* 911L, 87L, 88L, 479L, 502L) */ ((var_1_26) == (var_1_4))) {
		/* 914L, 101L, 482L, 505L) */ var_1_13 = (
			/* 917L, 100L, 485L, 508L) */ (max (
				/* 917L, 100L, 485L, 508L) */ (
					var_1_14
				) , (
					/* 919L, 99L, 487L, 510L) */ (max (
						/* 919L, 99L, 487L, 510L) */ (
							var_1_15
						) , (
							var_1_16
						)
					))
				)
			))
		);
	} else {
		/* 922L, 113L, 490L, 513L) */ if (var_1_8) {
			/* 924L, 108L, 492L, 515L) */ var_1_13 = (
				0
			);
		} else {
			/* 928L, 112L, 496L, 519L) */ var_1_13 = (
				var_1_15
			);
		}
	}


	// From: CodeObject1
	/* 283L, 72L) */ if (/* 284L, 4L, 5L) */ ((var_1_8) || (var_1_2))) {
		/* 287L, 70L) */ if (/* 288L, 19L, 20L) */ ((/* 289L, 13L, 21L) */ ((var_1_30) & (var_1_31))) > (/* 292L, 18L, 24L) */ ((var_1_32) ^ (/* 294L, 17L, 26L) */ ((var_1_33) | (16u))))))) {
			/* 297L, 68L) */ if (var_1_2) {
				/* 299L, 66L) */ if (/* 300L, 44L, 45L) */ ((/* 301L, 42L, 46L) */ (abs (var_1_34))) <= (var_1_33))) {
					/* 304L, 61L) */ var_1_27 = (
						/* 307L, 60L) */ ((
							/* 308L, 56L) */ (abs (
								var_1_35
							))
						) - (
							/* 310L, 59L) */ ((
								var_1_36
							) - (
								var_1_37
							))
						))
					);
				} else {
					/* 313L, 65L) */ var_1_27 = (
						var_1_37
					);
				}
			}
		}
	}


	// From: CodeObject2
	/* 317L, 104L) */ if (/* 318L, 83L, 84L) */ ((/* 319L, 79L, 85L) */ (abs (/* 320L, 78L, 86L) */ (min (/* 320L, 78L, 86L) */ (var_1_23) , (var_1_21)))))) >= (/* 323L, 82L, 89L) */ ((var_1_20) / (9.8))))) {
		/* 326L, 103L) */ var_1_38 = (
			var_1_42
		);
	}


	// From: CodeObject3
	/* 330L, 161L) */ if (/* 331L, 112L, 113L) */ ((var_1_24) <= (/* 333L, 111L, 115L) */ ((var_1_36) % (var_1_35))))) {
		/* 336L, 155L) */ if (/* 337L, 129L, 130L) */ ((1) <= (/* 339L, 128L, 132L) */ ((/* 340L, 126L, 133L) */ ((var_1_37) - (128))) % (var_1_36))))) {
			/* 344L, 150L) */ var_1_43 = (
				/* 347L, 149L) */ (abs (
					/* 348L, 148L) */ ((
						9999999.25f
					) + (
						var_1_23
					))
				))
			);
		} else {
			/* 351L, 154L) */ var_1_43 = (
				var_1_23
			);
		}
	} else {
		/* 355L, 160L) */ var_1_43 = (
			var_1_23
		);
	}


	// From: CodeObject4
	/* 361L, 178L) */ if (/* 362L, 167L, 168L) */ ((var_1_21) < (var_1_22))) {
		/* 365L, 177L) */ var_1_45 = (
			var_1_46
		);
	}


	// From: CodeObject5
	/* 407L, 228L) */ if (/* 408L, 196L, 197L) */ ((/* 409L, 193L, 198L) */ ((var_1_22) / (var_1_48))) < (/* 412L, 195L, 201L) */ (abs (var_1_22))))) {
		/* 414L, 222L) */ if (/* 415L, 211L, 212L) */ ((var_1_38) && (var_1_49))) {
			/* 418L, 221L) */ var_1_47 = (
				10
			);
		}
	} else {
		/* 422L, 227L) */ var_1_47 = (
			var_1_50
		);
	}


	// From: CodeObject6
	/* 426L, 247L) */ if (/* 427L, 234L, 235L) */ ((var_1_18) < (var_1_4))) {
		/* 430L, 246L) */ var_1_51 = (
			/* 433L, 245L) */ (abs (
				/* 434L, 244L) */ (abs (
					var_1_9
				))
			))
		);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= -922337.2036854766000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= -922337.2036854766000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_7 >= -32767);
	assume_abort_if_not(var_1_7 <= 32766);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_9 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 16383);
	var_1_10 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 16383);
	var_1_11 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_11 >= 8191);
	assume_abort_if_not(var_1_11 <= 16383);
	var_1_12 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 16383);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 254);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 254);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 254);
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854776000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854776000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854776000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= -230584.3009213691400e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 2305843.009213691400e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_23 >= -230584.3009213691400e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 2305843.009213691400e+12F && var_1_23 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 4294967295);
	var_1_31 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 4294967295);
	var_1_32 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 4294967295);
	var_1_33 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 4294967295);
	var_1_34 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_34 >= -2147483647);
	assume_abort_if_not(var_1_34 <= 2147483647);
	var_1_35 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_35 >= 2147483647);
	assume_abort_if_not(var_1_35 <= 4294967294);
	var_1_36 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_36 >= 1073741823);
	assume_abort_if_not(var_1_36 <= 2147483647);
	var_1_37 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 1073741823);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 0);
	var_1_46 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_46 >= -127);
	assume_abort_if_not(var_1_46 <= 126);
	var_1_48 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_48 >= -922337.2036854776000e+13F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 9223372.036854776000e+12F && var_1_48 >= 1.0e-20F ));
	assume_abort_if_not(var_1_48 != 0.0F);
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 1);
	var_1_50 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_50 >= 0);
	assume_abort_if_not(var_1_50 <= 65534);
}



void updateLastVariables(void) {
}

int property(void) {
	if (/* 438L, 5L, 9L, 304L, 320L, 1007L) */ ((var_1_21) != (255.6))) {
	} else {
	}
	if (var_1_2) {
	} else {
		if (/* 462L, 39L, 43L, 416L, 452L, 1031L) */ ((var_1_21) >= (var_1_1))) {
			if (var_1_8) {
			} else {
			}
		} else {
		}
	}
	if (/* 489L, 87L, 91L, 525L, 548L, 1058L) */ ((var_1_26) == (var_1_4))) {
	} else {
		if (var_1_8) {
		} else {
		}
	}
	if (/* 520L, 127L, 135L, 621L, 642L, 1089L) */ ((/* 521L, 125L, 136L, 622L, 643L, 1090L) */ ((var_1_18) - (/* 523L, 124L, 138L, 624L, 645L, 1092L) */ (max (/* 523L, 124L, 138L, 624L, 645L, 1092L) */ (var_1_19) , (var_1_20)))))) > (0.0))) {
	}
	if (/* 534L, 170L, 174L, 684L, 698L, 1103L) */ ((var_1_2) || (var_1_8))) {
	}
	if (/* 547L, 201L, 211L, 757L, 780L, 1116L) */ ((/* 548L, 195L, 212L, 758L, 781L, 1117L) */ ((var_1_19) - (var_1_20))) > (/* 551L, 200L, 215L, 761L, 784L, 1120L) */ (min (/* 551L, 200L, 215L, 761L, 784L, 1120L) */ (/* 552L, 198L, 216L, 762L, 785L, 1121L) */ (min (/* 552L, 198L, 216L, 762L, 785L, 1121L) */ (var_1_1) , (var_1_21)))) , (var_1_21)))))) {
		if (/* 557L, 221L, 224L, 767L, 790L, 1126L) */ (! (var_1_2))) {
		} else {
		}
	}
	if (/* 571L, 247L, 253L, 832L, 846L, 1140L) */ ((var_1_7) >= (/* 573L, 246L, 255L, 834L, 848L, 1142L) */ (max (/* 573L, 246L, 255L, 834L, 848L, 1142L) */ (var_1_24) , (var_1_11)))))) {
	}
	return /* 588L) */ ((
	/* 587L) */ ((
		/* 586L) */ ((
			/* 585L) */ ((
				/* 584L) */ ((
					/* 583L) */ ((
						/* 437L, 23L, 303L, 319L, 1006L) */ ((
							/* 438L, 5L, 9L, 304L, 320L, 1007L) */ ((
								var_1_21
							) != (
								255.6
							))
						) ? (
							/* 441L, 15L, 307L, 323L, 1010L) */ ((
								var_1_1
							) == (
								/* 441L, 15L, 307L, 323L, 1010L) */ ((float) (
									var_1_4
								))
							))
						) : (
							/* 445L, 21L, 311L, 327L, 1014L) */ ((
								var_1_1
							) == (
								/* 445L, 21L, 311L, 327L, 1014L) */ ((float) (
									/* 448L, 20L, 314L, 330L, 1017L) */ (max (
										/* 448L, 20L, 314L, 330L, 1017L) */ (
											var_1_4
										) , (
											var_1_5
										)
									))
								))
							))
						))
					) && (
						/* 455L, 74L, 409L, 445L, 1024L) */ ((
							var_1_2
						) ? (
							/* 457L, 36L, 411L, 447L, 1026L) */ ((
								var_1_6
							) == (
								/* 457L, 36L, 411L, 447L, 1026L) */ ((signed short int) (
									var_1_7
								))
							))
						) : (
							/* 461L, 72L, 415L, 451L, 1030L) */ ((
								/* 462L, 39L, 43L, 416L, 452L, 1031L) */ ((
									var_1_21
								) >= (
									var_1_1
								))
							) ? (
								/* 465L, 66L, 419L, 455L, 1034L) */ ((
									var_1_8
								) ? (
									/* 467L, 60L, 421L, 457L, 1036L) */ ((
										var_1_6
									) == (
										/* 467L, 60L, 421L, 457L, 1036L) */ ((signed short int) (
											/* 470L, 59L, 424L, 460L, 1039L) */ ((
												/* 471L, 53L, 425L, 461L, 1040L) */ ((
													var_1_9
												) - (
													var_1_10
												))
											) + (
												/* 474L, 58L, 428L, 464L, 1043L) */ ((
													/* 475L, 56L, 429L, 465L, 1044L) */ ((
														var_1_11
													) - (
														100
													))
												) - (
													var_1_12
												))
											))
										))
									))
								) : (
									/* 479L, 64L, 433L, 469L, 1048L) */ ((
										var_1_6
									) == (
										/* 479L, 64L, 433L, 469L, 1048L) */ ((signed short int) (
											64
										))
									))
								))
							) : (
								/* 483L, 70L, 437L, 473L, 1052L) */ ((
									var_1_6
								) == (
									/* 483L, 70L, 437L, 473L, 1052L) */ ((signed short int) (
										var_1_11
									))
								))
							))
						))
					))
				) && (
					/* 488L, 116L, 524L, 547L, 1057L) */ ((
						/* 489L, 87L, 91L, 525L, 548L, 1058L) */ ((
							var_1_26
						) == (
							var_1_4
						))
					) ? (
						/* 492L, 101L, 528L, 551L, 1061L) */ ((
							var_1_13
						) == (
							/* 492L, 101L, 528L, 551L, 1061L) */ ((unsigned char) (
								/* 495L, 100L, 531L, 554L, 1064L) */ (max (
									/* 495L, 100L, 531L, 554L, 1064L) */ (
										var_1_14
									) , (
										/* 497L, 99L, 533L, 556L, 1066L) */ (max (
											/* 497L, 99L, 533L, 556L, 1066L) */ (
												var_1_15
											) , (
												var_1_16
											)
										))
									)
								))
							))
						))
					) : (
						/* 500L, 114L, 536L, 559L, 1069L) */ ((
							var_1_8
						) ? (
							/* 502L, 108L, 538L, 561L, 1071L) */ ((
								var_1_13
							) == (
								/* 502L, 108L, 538L, 561L, 1071L) */ ((unsigned char) (
									0
								))
							))
						) : (
							/* 506L, 112L, 542L, 565L, 1075L) */ ((
								var_1_13
							) == (
								/* 506L, 112L, 542L, 565L, 1075L) */ ((unsigned char) (
									var_1_15
								))
							))
						))
					))
				))
			) && (
				/* 519L, 147L, 620L, 641L, 1088L) */ ((
					/* 520L, 127L, 135L, 621L, 642L, 1089L) */ ((
						/* 521L, 125L, 136L, 622L, 643L, 1090L) */ ((
							var_1_18
						) - (
							/* 523L, 124L, 138L, 624L, 645L, 1092L) */ (max (
								/* 523L, 124L, 138L, 624L, 645L, 1092L) */ (
									var_1_19
								) , (
									var_1_20
								)
							))
						))
					) > (
						0.0
					))
				) ? (
					/* 527L, 145L, 628L, 649L, 1096L) */ ((
						var_1_17
					) == (
						/* 527L, 145L, 628L, 649L, 1096L) */ ((signed short int) (
							var_1_9
						))
					))
				) : (
					1
				))
			))
		) && (
			/* 533L, 186L, 683L, 697L, 1102L) */ ((
				/* 534L, 170L, 174L, 684L, 698L, 1103L) */ ((
					var_1_2
				) || (
					var_1_8
				))
			) ? (
				/* 537L, 184L, 687L, 701L, 1106L) */ ((
					var_1_21
				) == (
					/* 537L, 184L, 687L, 701L, 1106L) */ ((double) (
						/* 540L, 183L, 690L, 704L, 1109L) */ ((
							/* 541L, 181L, 691L, 705L, 1110L) */ ((
								var_1_22
							) + (
								var_1_23
							))
						) + (
							3.75
						))
					))
				))
			) : (
				1
			))
		))
	) && (
		/* 546L, 238L, 756L, 779L, 1115L) */ ((
			/* 547L, 201L, 211L, 757L, 780L, 1116L) */ ((
				/* 548L, 195L, 212L, 758L, 781L, 1117L) */ ((
					var_1_19
				) - (
					var_1_20
				))
			) > (
				/* 551L, 200L, 215L, 761L, 784L, 1120L) */ (min (
					/* 551L, 200L, 215L, 761L, 784L, 1120L) */ (
						/* 552L, 198L, 216L, 762L, 785L, 1121L) */ (min (
							/* 552L, 198L, 216L, 762L, 785L, 1121L) */ (
								var_1_1
							) , (
								var_1_21
							)
						))
					) , (
						var_1_21
					)
				))
			))
		) ? (
			/* 556L, 236L, 766L, 789L, 1125L) */ ((
				/* 557L, 221L, 224L, 767L, 790L, 1126L) */ (! (
					var_1_2
				))
			) ? (
				/* 559L, 230L, 769L, 792L, 1128L) */ ((
					var_1_24
				) == (
					/* 559L, 230L, 769L, 792L, 1128L) */ ((unsigned long int) (
						/* 562L, 229L, 772L, 795L, 1131L) */ (abs (
							var_1_10
						))
					))
				))
			) : (
				/* 564L, 234L, 774L, 797L, 1133L) */ ((
					var_1_24
				) == (
					/* 564L, 234L, 774L, 797L, 1133L) */ ((unsigned long int) (
						var_1_9
					))
				))
			))
		) : (
			1
		))
	))
) && (
	/* 570L, 265L, 831L, 845L, 1139L) */ ((
		/* 571L, 247L, 253L, 832L, 846L, 1140L) */ ((
			var_1_7
		) >= (
			/* 573L, 246L, 255L, 834L, 848L, 1142L) */ (max (
				/* 573L, 246L, 255L, 834L, 848L, 1142L) */ (
					var_1_24
				) , (
					var_1_11
				)
			))
		))
	) ? (
		/* 576L, 263L, 837L, 851L, 1145L) */ ((
			var_1_26
		) == (
			/* 576L, 263L, 837L, 851L, 1145L) */ ((float) (
				/* 579L, 262L, 840L, 854L, 1148L) */ ((
					var_1_22
				) + (
					var_1_23
				))
			))
		))
	) : (
		1
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
