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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch23Filler_PE_CO.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 0;
unsigned char var_1_2 = 1;
unsigned char var_1_3 = 0;
float var_1_4 = 1.4;
double var_1_5 = 3.6;
double var_1_6 = 10.6;
float var_1_7 = 9.25;
float var_1_8 = 1.2;
float var_1_9 = 0.0;
float var_1_10 = 3.1;
float var_1_11 = 500.5;
signed long int var_1_12 = 0;
unsigned char var_1_13 = 10;
unsigned char var_1_14 = 8;
signed long int var_1_16 = -25;
unsigned char var_1_17 = 64;
unsigned long int var_1_18 = 25;
signed char var_1_19 = -100;
signed short int var_1_20 = -4;
unsigned short int var_1_21 = 200;
unsigned short int var_1_22 = 54878;
signed long int var_1_23 = 128;
double var_1_24 = 9999.8;
float var_1_25 = 7.4;
signed char var_1_26 = 100;
double var_1_27 = 128.6;
unsigned long int var_1_28 = 500;
unsigned long int var_1_29 = 4;
unsigned long int var_1_30 = 8;
double var_1_31 = 1.4;
signed char var_1_32 = 1;
signed char var_1_33 = -1;
signed char var_1_35 = -64;
unsigned char var_1_36 = 32;
float var_1_37 = 0.42500000000000004;
float var_1_38 = 10000000.6;
unsigned char var_1_39 = 64;
unsigned char var_1_40 = 16;
unsigned char var_1_41 = 5;
unsigned short int var_1_42 = 8;
signed char var_1_43 = -16;
double var_1_44 = 127.625;
unsigned char var_1_46 = 128;
unsigned short int var_1_47 = 64;
unsigned short int var_1_48 = 57913;
signed char var_1_49 = 0;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch23Filler_PE_CO
	/* 902L, 9L, 276L, 283L) */ if (var_1_2) {
		/* 904L, 8L, 278L, 285L) */ var_1_1 = (
			var_1_3
		);
	}


	// From: Req2Batch23Filler_PE_CO
	unsigned char stepLocal_0 = /* 910L, 17L, 21L, 352L, 375L) */ ((var_1_5) <= (var_1_6));
	/* 932L, 46L, 350L, 373L) */ if (/* 915L, 19L, 20L, 351L, 374L) */ ((stepLocal_0) || (var_1_1))) {
		/* 923L, 37L, 356L, 379L) */ var_1_4 = (
			/* 922L, 36L, 359L, 382L) */ (max (
				/* 922L, 36L, 359L, 382L) */ (
					31.5f
				) , (
					/* 921L, 35L, 361L, 384L) */ (min (
						/* 921L, 35L, 361L, 384L) */ (
							var_1_7
						) , (
							var_1_8
						)
					))
				)
			))
		);
	} else {
		/* 931L, 45L, 364L, 387L) */ var_1_4 = (
			/* 930L, 44L, 367L, 390L) */ ((
				/* 928L, 42L, 368L, 391L) */ ((
					var_1_9
				) - (
					var_1_10
				))
			) - (
				var_1_11
			))
		);
	}


	// From: Req6Batch23Filler_PE_CO
	signed long int stepLocal_4 = 5;
	/* 1043L, 242L, 738L, 761L) */ if (/* 1024L, 207L, 208L, 739L, 762L) */ ((stepLocal_4) <= (var_1_17))) {
		/* 1030L, 219L, 742L, 765L) */ var_1_21 = (
			/* 1029L, 218L, 745L, 768L) */ ((
				var_1_22
			) - (
				var_1_17
			))
		);
	} else {
		/* 1042L, 240L, 748L, 771L) */ if (var_1_1) {
			/* 1041L, 238L, 750L, 773L) */ if (var_1_1) {
				/* 1036L, 229L, 752L, 775L) */ var_1_21 = (
					var_1_17
				);
			} else {
				/* 1040L, 237L, 756L, 779L) */ var_1_21 = (
					var_1_14
				);
			}
		}
	}


	// From: Req7Batch23Filler_PE_CO
	/* 1048L, 251L, 831L, 837L) */ var_1_23 = (
		var_1_13
	);


	// From: Req8Batch23Filler_PE_CO
	/* 1054L, 261L, 855L, 861L) */ var_1_24 = (
		var_1_7
	);


	// From: Req9Batch23Filler_PE_CO
	/* 1060L, 271L, 879L, 885L) */ var_1_25 = (
		var_1_7
	);


	// From: Req3Batch23Filler_PE_CO
	signed long int stepLocal_3 = var_1_23;
	unsigned char stepLocal_2 = var_1_13;
	signed long int stepLocal_1 = var_1_23;
	/* 981L, 127L, 442L, 483L) */ if (/* 950L, 58L, 59L, 443L, 484L) */ ((/* 949L, 56L, 60L, 444L, 485L) */ ((/* 947L, 54L, 61L, 445L, 486L) */ ((200) - (var_1_13))) - (var_1_14))) != (stepLocal_1))) {
		/* 958L, 80L, 450L, 491L) */ var_1_12 = (
			/* 957L, 79L, 453L, 494L) */ ((
				var_1_13
			) + (
				/* 956L, 78L, 455L, 496L) */ (min (
					/* 956L, 78L, 455L, 496L) */ (
						var_1_14
					) , (
						var_1_16
					)
				))
			))
		);
	} else {
		/* 980L, 125L, 458L, 499L) */ if (/* 964L, 87L, 88L, 459L, 500L) */ ((/* 963L, 85L, 89L, 460L, 501L) */ ((var_1_23) / (/* 962L, 84L, 91L, 462L, 503L) */ ((128) - (var_1_17))))) < (stepLocal_2))) {
			/* 975L, 119L, 466L, 507L) */ if (/* 966L, 104L, 105L, 467L, 508L) */ ((var_1_13) >= (stepLocal_3))) {
				/* 970L, 114L, 470L, 511L) */ var_1_12 = (
					var_1_14
				);
			} else {
				/* 974L, 118L, 474L, 515L) */ var_1_12 = (
					var_1_17
				);
			}
		} else {
			/* 979L, 124L, 478L, 519L) */ var_1_12 = (
				var_1_17
			);
		}
	}


	// From: Req4Batch23Filler_PE_CO
	/* 988L, 155L, 607L, 620L) */ if (/* 989L, 138L, 139L, 608L, 621L) */ ((/* 990L, 136L, 140L, 609L, 622L) */ (- (/* 991L, 135L, 141L, 610L, 623L) */ ((var_1_13) / (var_1_17))))) > (var_1_23))) {
		/* 995L, 154L, 614L, 627L) */ var_1_18 = (
			var_1_13
		);
	}


	// From: Req5Batch23Filler_PE_CO
	/* 1001L, 197L, 659L, 679L) */ if (/* 1002L, 172L, 173L, 660L, 680L) */ ((/* 1003L, 170L, 174L, 661L, 681L) */ ((var_1_16) / (/* 1005L, 169L, 176L, 663L, 683L) */ (min (/* 1005L, 169L, 176L, 663L, 683L) */ (var_1_17) , (var_1_20)))))) > (var_1_18))) {
		/* 1009L, 192L, 667L, 687L) */ var_1_19 = (
			/* 1012L, 191L, 670L, 690L) */ (max (
				/* 1012L, 191L, 670L, 690L) */ (
					var_1_17
				) , (
					var_1_13
				)
			))
		);
	} else {
		/* 1015L, 196L, 673L, 693L) */ var_1_19 = (
			var_1_17
		);
	}


	// From: CodeObject1
	/* 320L, 72L) */ if (/* 321L, 4L, 5L) */ ((var_1_27) < (256.5))) {
		/* 324L, 70L) */ if (/* 325L, 19L, 20L) */ ((/* 326L, 15L, 21L) */ ((/* 327L, 13L, 22L) */ (max (/* 327L, 13L, 22L) */ (var_1_28) , (var_1_29)))) > (var_1_30))) && (/* 331L, 18L, 26L) */ ((var_1_27) < (var_1_31))))) {
			/* 334L, 43L) */ var_1_26 = (
				/* 337L, 42L) */ (max (
					/* 337L, 42L) */ (
						var_1_32
					) , (
						var_1_33
					)
				))
			);
		} else {
			/* 340L, 68L) */ if (/* 341L, 48L, 49L) */ ((/* 342L, 46L, 50L) */ ((var_1_30) < (var_1_29))) && (var_1_1))) {
				/* 346L, 62L) */ var_1_26 = (
					var_1_32
				);
			} else {
				/* 350L, 67L) */ var_1_26 = (
					/* 353L, 66L) */ (abs (
						var_1_35
					))
				);
			}
		}
	}


	// From: CodeObject2
	/* 355L, 103L) */ if (/* 356L, 80L, 81L) */ ((/* 357L, 78L, 82L) */ ((var_1_37) - (var_1_38))) > (var_1_24))) {
		/* 361L, 98L) */ var_1_36 = (
			/* 364L, 97L) */ ((
				/* 365L, 95L) */ ((
					var_1_39
				) - (
					var_1_40
				))
			) + (
				var_1_41
			))
		);
	} else {
		/* 369L, 102L) */ var_1_36 = (
			var_1_40
		);
	}


	// From: CodeObject3
	/* 373L, 114L) */ if (var_1_1) {
		/* 375L, 113L) */ var_1_42 = (
			256
		);
	}


	// From: CodeObject4
	/* 379L, 182L) */ if (/* 380L, 126L, 127L) */ ((/* 381L, 122L, 128L) */ ((/* 382L, 120L, 129L) */ (max (/* 382L, 120L, 129L) */ (var_1_24) , (var_1_37)))) / (var_1_44))) > (/* 386L, 125L, 133L) */ (min (/* 386L, 125L, 133L) */ (var_1_24) , (var_1_38)))))) {
		/* 389L, 180L) */ if (/* 390L, 149L, 150L) */ ((/* 391L, 147L, 151L) */ ((-5) < (var_1_33))) && (var_1_1))) {
			/* 395L, 178L) */ if (/* 396L, 162L, 163L) */ ((var_1_41) >= (var_1_39))) {
				/* 399L, 173L) */ var_1_43 = (
					/* 402L, 172L) */ (abs (
						var_1_35
					))
				);
			} else {
				/* 404L, 177L) */ var_1_43 = (
					var_1_32
				);
			}
		}
	}


	// From: CodeObject5
	/* 409L, 189L) */ var_1_46 = (
		var_1_40
	);


	// From: CodeObject6
	/* 413L, 240L) */ if (/* 414L, 198L, 199L) */ ((var_1_23) < (/* 416L, 197L, 201L) */ (max (/* 416L, 197L, 201L) */ (var_1_40) , (var_1_18)))))) {
		/* 419L, 230L) */ if (/* 420L, 213L, 214L) */ ((var_1_1) || (/* 422L, 212L, 216L) */ ((128.5) <= (var_1_24))))) {
			/* 425L, 229L) */ var_1_47 = (
				/* 428L, 228L) */ ((
					var_1_48
				) - (
					var_1_39
				))
			);
		}
	} else {
		/* 431L, 239L) */ var_1_47 = (
			/* 434L, 238L) */ (max (
				/* 434L, 238L) */ (
					/* 435L, 236L) */ (max (
						/* 435L, 236L) */ (
							var_1_21
						) , (
							var_1_39
						)
					))
				) , (
					var_1_23
				)
			))
		);
	}


	// From: CodeObject7
	/* 440L, 247L) */ var_1_49 = (
		var_1_32
	);
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 0);
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -922337.2036854776000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= -922337.2036854776000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= -922337.2036854766000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854766000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= -922337.2036854766000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854766000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= 4611686.018427383000e+12F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427383000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 64);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 127);
	var_1_16 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_16 >= -1073741823);
	assume_abort_if_not(var_1_16 <= 1073741823);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 1);
	assume_abort_if_not(var_1_17 <= 126);
	assume_abort_if_not(var_1_17 != 127);
	var_1_20 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_20 >= -32768);
	assume_abort_if_not(var_1_20 <= 32767);
	assume_abort_if_not(var_1_20 != 0);
	var_1_22 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_22 >= 32767);
	assume_abort_if_not(var_1_22 <= 65534);
	var_1_27 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_27 >= -922337.2036854776000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854776000e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 4294967295);
	var_1_29 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 4294967295);
	var_1_30 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 4294967295);
	var_1_31 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_31 >= -922337.2036854776000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854776000e+12F && var_1_31 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_32 >= -127);
	assume_abort_if_not(var_1_32 <= 126);
	var_1_33 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_33 >= -127);
	assume_abort_if_not(var_1_33 <= 126);
	var_1_35 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_35 >= -126);
	assume_abort_if_not(var_1_35 <= 126);
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854776000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854776000e+12F && var_1_38 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 63);
	assume_abort_if_not(var_1_39 <= 127);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 63);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 127);
	var_1_44 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_44 >= -922337.2036854776000e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854776000e+12F && var_1_44 >= 1.0e-20F ));
	assume_abort_if_not(var_1_44 != 0.0F);
	var_1_48 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_48 >= 32767);
	assume_abort_if_not(var_1_48 <= 65534);
}



void updateLastVariables(void) {
}

int property(void) {
	if (var_1_2) {
	}
	if (/* 452L, 19L, 25L, 397L, 420L, 1073L) */ ((/* 453L, 17L, 26L, 398L, 421L, 1074L) */ ((var_1_5) <= (var_1_6))) || (var_1_1))) {
	} else {
	}
	if (/* 475L, 58L, 66L, 525L, 566L, 1096L) */ ((/* 476L, 56L, 67L, 526L, 567L, 1097L) */ ((/* 477L, 54L, 68L, 527L, 568L, 1098L) */ ((200) - (var_1_13))) - (var_1_14))) != (var_1_23))) {
	} else {
		if (/* 491L, 87L, 95L, 541L, 582L, 1112L) */ ((/* 492L, 85L, 96L, 542L, 583L, 1113L) */ ((var_1_23) / (/* 494L, 84L, 98L, 544L, 585L, 1115L) */ ((128) - (var_1_17))))) < (var_1_13))) {
			if (/* 499L, 104L, 108L, 549L, 590L, 1120L) */ ((var_1_13) >= (var_1_23))) {
			} else {
			}
		} else {
		}
	}
	if (/* 517L, 138L, 145L, 634L, 647L, 1138L) */ ((/* 518L, 136L, 146L, 635L, 648L, 1139L) */ (- (/* 519L, 135L, 147L, 636L, 649L, 1140L) */ ((var_1_13) / (var_1_17))))) > (var_1_23))) {
	}
	if (/* 530L, 172L, 180L, 700L, 720L, 1151L) */ ((/* 531L, 170L, 181L, 701L, 721L, 1152L) */ ((var_1_16) / (/* 533L, 169L, 183L, 703L, 723L, 1154L) */ (min (/* 533L, 169L, 183L, 703L, 723L, 1154L) */ (var_1_17) , (var_1_20)))))) > (var_1_18))) {
	} else {
	}
	if (/* 549L, 207L, 211L, 785L, 808L, 1170L) */ ((5) <= (var_1_17))) {
	} else {
		if (var_1_1) {
			if (var_1_1) {
			} else {
			}
		}
	}
	return /* 596L) */ ((
	/* 595L) */ ((
		/* 594L) */ ((
			/* 593L) */ ((
				/* 592L) */ ((
					/* 591L) */ ((
						/* 590L) */ ((
							/* 589L) */ ((
								/* 444L, 10L, 290L, 297L, 1065L) */ ((
									var_1_2
								) ? (
									/* 446L, 8L, 292L, 299L, 1067L) */ ((
										var_1_1
									) == (
										/* 446L, 8L, 292L, 299L, 1067L) */ ((unsigned char) (
											var_1_3
										))
									))
								) : (
									1
								))
							) && (
								/* 451L, 47L, 396L, 419L, 1072L) */ ((
									/* 452L, 19L, 25L, 397L, 420L, 1073L) */ ((
										/* 453L, 17L, 26L, 398L, 421L, 1074L) */ ((
											var_1_5
										) <= (
											var_1_6
										))
									) || (
										var_1_1
									))
								) ? (
									/* 457L, 37L, 402L, 425L, 1078L) */ ((
										var_1_4
									) == (
										/* 457L, 37L, 402L, 425L, 1078L) */ ((float) (
											/* 460L, 36L, 405L, 428L, 1081L) */ (max (
												/* 460L, 36L, 405L, 428L, 1081L) */ (
													31.5f
												) , (
													/* 462L, 35L, 407L, 430L, 1083L) */ (min (
														/* 462L, 35L, 407L, 430L, 1083L) */ (
															var_1_7
														) , (
															var_1_8
														)
													))
												)
											))
										))
									))
								) : (
									/* 465L, 45L, 410L, 433L, 1086L) */ ((
										var_1_4
									) == (
										/* 465L, 45L, 410L, 433L, 1086L) */ ((float) (
											/* 468L, 44L, 413L, 436L, 1089L) */ ((
												/* 469L, 42L, 414L, 437L, 1090L) */ ((
													var_1_9
												) - (
													var_1_10
												))
											) - (
												var_1_11
											))
										))
									))
								))
							))
						) && (
							/* 474L, 128L, 524L, 565L, 1095L) */ ((
								/* 475L, 58L, 66L, 525L, 566L, 1096L) */ ((
									/* 476L, 56L, 67L, 526L, 567L, 1097L) */ ((
										/* 477L, 54L, 68L, 527L, 568L, 1098L) */ ((
											200
										) - (
											var_1_13
										))
									) - (
										var_1_14
									))
								) != (
									var_1_23
								))
							) ? (
								/* 482L, 80L, 532L, 573L, 1103L) */ ((
									var_1_12
								) == (
									/* 482L, 80L, 532L, 573L, 1103L) */ ((signed long int) (
										/* 485L, 79L, 535L, 576L, 1106L) */ ((
											var_1_13
										) + (
											/* 487L, 78L, 537L, 578L, 1108L) */ (min (
												/* 487L, 78L, 537L, 578L, 1108L) */ (
													var_1_14
												) , (
													var_1_16
												)
											))
										))
									))
								))
							) : (
								/* 490L, 126L, 540L, 581L, 1111L) */ ((
									/* 491L, 87L, 95L, 541L, 582L, 1112L) */ ((
										/* 492L, 85L, 96L, 542L, 583L, 1113L) */ ((
											var_1_23
										) / (
											/* 494L, 84L, 98L, 544L, 585L, 1115L) */ ((
												128
											) - (
												var_1_17
											))
										))
									) < (
										var_1_13
									))
								) ? (
									/* 498L, 120L, 548L, 589L, 1119L) */ ((
										/* 499L, 104L, 108L, 549L, 590L, 1120L) */ ((
											var_1_13
										) >= (
											var_1_23
										))
									) ? (
										/* 502L, 114L, 552L, 593L, 1123L) */ ((
											var_1_12
										) == (
											/* 502L, 114L, 552L, 593L, 1123L) */ ((signed long int) (
												var_1_14
											))
										))
									) : (
										/* 506L, 118L, 556L, 597L, 1127L) */ ((
											var_1_12
										) == (
											/* 506L, 118L, 556L, 597L, 1127L) */ ((signed long int) (
												var_1_17
											))
										))
									))
								) : (
									/* 510L, 124L, 560L, 601L, 1131L) */ ((
										var_1_12
									) == (
										/* 510L, 124L, 560L, 601L, 1131L) */ ((signed long int) (
											var_1_17
										))
									))
								))
							))
						))
					) && (
						/* 516L, 156L, 633L, 646L, 1137L) */ ((
							/* 517L, 138L, 145L, 634L, 647L, 1138L) */ ((
								/* 518L, 136L, 146L, 635L, 648L, 1139L) */ (- (
									/* 519L, 135L, 147L, 636L, 649L, 1140L) */ ((
										var_1_13
									) / (
										var_1_17
									))
								))
							) > (
								var_1_23
							))
						) ? (
							/* 523L, 154L, 640L, 653L, 1144L) */ ((
								var_1_18
							) == (
								/* 523L, 154L, 640L, 653L, 1144L) */ ((unsigned long int) (
									var_1_13
								))
							))
						) : (
							1
						))
					))
				) && (
					/* 529L, 198L, 699L, 719L, 1150L) */ ((
						/* 530L, 172L, 180L, 700L, 720L, 1151L) */ ((
							/* 531L, 170L, 181L, 701L, 721L, 1152L) */ ((
								var_1_16
							) / (
								/* 533L, 169L, 183L, 703L, 723L, 1154L) */ (min (
									/* 533L, 169L, 183L, 703L, 723L, 1154L) */ (
										var_1_17
									) , (
										var_1_20
									)
								))
							))
						) > (
							var_1_18
						))
					) ? (
						/* 537L, 192L, 707L, 727L, 1158L) */ ((
							var_1_19
						) == (
							/* 537L, 192L, 707L, 727L, 1158L) */ ((signed char) (
								/* 540L, 191L, 710L, 730L, 1161L) */ (max (
									/* 540L, 191L, 710L, 730L, 1161L) */ (
										var_1_17
									) , (
										var_1_13
									)
								))
							))
						))
					) : (
						/* 543L, 196L, 713L, 733L, 1164L) */ ((
							var_1_19
						) == (
							/* 543L, 196L, 713L, 733L, 1164L) */ ((signed char) (
								var_1_17
							))
						))
					))
				))
			) && (
				/* 548L, 243L, 784L, 807L, 1169L) */ ((
					/* 549L, 207L, 211L, 785L, 808L, 1170L) */ ((
						5
					) <= (
						var_1_17
					))
				) ? (
					/* 552L, 219L, 788L, 811L, 1173L) */ ((
						var_1_21
					) == (
						/* 552L, 219L, 788L, 811L, 1173L) */ ((unsigned short int) (
							/* 555L, 218L, 791L, 814L, 1176L) */ ((
								var_1_22
							) - (
								var_1_17
							))
						))
					))
				) : (
					/* 558L, 241L, 794L, 817L, 1179L) */ ((
						var_1_1
					) ? (
						/* 560L, 239L, 796L, 819L, 1181L) */ ((
							var_1_1
						) ? (
							/* 562L, 229L, 798L, 821L, 1183L) */ ((
								var_1_21
							) == (
								/* 562L, 229L, 798L, 821L, 1183L) */ ((unsigned short int) (
									var_1_17
								))
							))
						) : (
							/* 566L, 237L, 802L, 825L, 1187L) */ ((
								var_1_21
							) == (
								/* 566L, 237L, 802L, 825L, 1187L) */ ((unsigned short int) (
									var_1_14
								))
							))
						))
					) : (
						1
					))
				))
			))
		) && (
			/* 572L, 251L, 843L, 849L, 1193L) */ ((
				var_1_23
			) == (
				/* 572L, 251L, 843L, 849L, 1193L) */ ((signed long int) (
					var_1_13
				))
			))
		))
	) && (
		/* 578L, 261L, 867L, 873L, 1199L) */ ((
			var_1_24
		) == (
			/* 578L, 261L, 867L, 873L, 1199L) */ ((double) (
				var_1_7
			))
		))
	))
) && (
	/* 584L, 271L, 891L, 897L, 1205L) */ ((
		var_1_25
	) == (
		/* 584L, 271L, 891L, 897L, 1205L) */ ((float) (
			var_1_7
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
