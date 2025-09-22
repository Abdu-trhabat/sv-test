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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch159Filler_PE_CI.c", 13, "reach_error"); }
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
signed short int var_1_1 = -4;
double var_1_2 = 4.8;
double var_1_3 = 0.375;
double var_1_4 = 1000000000.4;
signed short int var_1_5 = 128;
signed long int var_1_6 = 0;
unsigned char var_1_7 = 1;
unsigned char var_1_8 = 1;
signed long int var_1_9 = 1721455604;
signed long int var_1_10 = 4;
signed long int var_1_11 = 5;
signed long int var_1_12 = 16;
unsigned char var_1_13 = 1;
unsigned short int var_1_14 = 1;
signed long int var_1_15 = 256;
unsigned long int var_1_16 = 10;
signed long int var_1_17 = 0;
signed long int var_1_18 = -32;
unsigned short int var_1_19 = 58253;
double var_1_20 = 1000.25;
double var_1_21 = 4.5;
double var_1_22 = 0.25;
double var_1_23 = 63.875;
unsigned short int var_1_24 = 0;
unsigned long int var_1_25 = 8;
unsigned long int var_1_26 = 128;
unsigned long int var_1_27 = 5;
unsigned long int var_1_28 = 128;
double var_1_30 = 255.5;
signed long int var_1_35 = 5;
signed short int var_1_36 = 100;
unsigned short int var_1_38 = 64;
unsigned short int var_1_40 = 43208;
float var_1_43 = 64.5;
signed char var_1_45 = 1;
signed char var_1_46 = 5;
signed char var_1_47 = -10;
signed char var_1_48 = 4;
signed char var_1_49 = -10;
signed char var_1_50 = -32;
signed char var_1_51 = 64;
signed char var_1_52 = 100;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch159Filler_PE_CI
	/* 877L, 42L, 291L, 313L) */ if (/* 878L, 8L, 9L, 292L, 314L) */ ((var_1_2) != (/* 880L, 7L, 11L, 294L, 316L) */ (max (/* 880L, 7L, 11L, 294L, 316L) */ (64.8) , (/* 882L, 6L, 13L, 296L, 318L) */ ((var_1_3) * (var_1_4)))))))) {
		/* 885L, 36L, 299L, 321L) */ if (/* 886L, 25L, 26L, 300L, 322L) */ ((9.9999999999995E12) < (var_1_3))) {
			/* 889L, 35L, 303L, 325L) */ var_1_1 = (
				var_1_5
			);
		}
	} else {
		/* 893L, 41L, 307L, 329L) */ var_1_1 = (
			var_1_5
		);
	}


	// From: Req2Batch159Filler_PE_CI
	/* 900L, 80L, 380L, 405L) */ if (/* 901L, 52L, 53L, 381L, 406L) */ ((var_1_7) && (var_1_8))) {
		/* 904L, 66L, 384L, 409L) */ var_1_6 = (
			/* 907L, 65L, 387L, 412L) */ ((
				/* 908L, 63L, 388L, 413L) */ ((
					var_1_9
				) - (
					var_1_10
				))
			) - (
				var_1_11
			))
		);
	} else {
		/* 912L, 78L, 392L, 417L) */ if (var_1_8) {
			/* 914L, 73L, 394L, 419L) */ var_1_6 = (
				var_1_10
			);
		} else {
			/* 918L, 77L, 398L, 423L) */ var_1_6 = (
				8
			);
		}
	}


	// From: Req4Batch159Filler_PE_CI
	signed long int stepLocal_2 = -1000000000;
	/* 976L, 184L, 664L, 679L) */ if (/* 969L, 163L, 164L, 665L, 680L) */ ((/* 968L, 161L, 165L, 666L, 681L) */ ((var_1_10) << (/* 967L, 160L, 167L, 668L, 683L) */ (min (/* 967L, 160L, 167L, 668L, 683L) */ (1) , (var_1_17)))))) < (stepLocal_2))) {
		/* 975L, 183L, 672L, 687L) */ var_1_16 = (
			/* 974L, 182L, 675L, 690L) */ (max (
				/* 974L, 182L, 675L, 690L) */ (
					var_1_17
				) , (
					var_1_10
				)
			))
		);
	}


	// From: Req5Batch159Filler_PE_CI
	signed long int stepLocal_3 = /* 981L, 193L, 197L, 726L, 751L) */ ((/* 982L, 191L, 198L, 727L, 752L) */ (abs (var_1_19))) - (var_1_17));
	/* 1005L, 225L, 724L, 749L) */ if (/* 987L, 195L, 196L, 725L, 750L) */ ((stepLocal_3) > (var_1_16))) {
		/* 996L, 216L, 731L, 756L) */ var_1_18 = (
			/* 995L, 215L, 734L, 759L) */ ((
				var_1_19
			) - (
				/* 994L, 214L, 736L, 761L) */ ((
					var_1_14
				) + (
					/* 993L, 213L, 738L, 763L) */ (abs (
						var_1_10
					))
				))
			))
		);
	} else {
		/* 1004L, 224L, 740L, 765L) */ var_1_18 = (
			/* 1003L, 223L, 743L, 768L) */ (max (
				/* 1003L, 223L, 743L, 768L) */ (
					/* 1001L, 221L, 744L, 769L) */ ((
						var_1_10
					) + (
						var_1_5
					))
				) , (
					var_1_15
				)
			))
		);
	}


	// From: Req6Batch159Filler_PE_CI
	/* 1010L, 241L, 825L, 838L) */ var_1_20 = (
		/* 1013L, 240L, 828L, 841L) */ (max (
			/* 1013L, 240L, 828L, 841L) */ (
				/* 1014L, 235L, 829L, 842L) */ (min (
					/* 1014L, 235L, 829L, 842L) */ (
						var_1_21
					) , (
						var_1_22
					)
				))
			) , (
				/* 1017L, 239L, 832L, 845L) */ ((
					/* 1018L, 237L, 833L, 846L) */ (abs (
						15.5
					))
				) - (
					var_1_23
				))
			)
		))
	);


	// From: Req3Batch159Filler_PE_CI
	unsigned char stepLocal_1 = var_1_13;
	unsigned char stepLocal_0 = /* 924L, 112L, 120L, 553L, 584L) */ ((var_1_2) < (var_1_4));
	/* 956L, 151L, 540L, 571L) */ if (/* 934L, 94L, 95L, 541L, 572L) */ ((/* 933L, 92L, 96L, 542L, 573L) */ ((var_1_8) && (var_1_7))) || (stepLocal_1))) {
		/* 951L, 145L, 546L, 577L) */ if (/* 940L, 113L, 114L, 547L, 578L) */ ((/* 939L, 109L, 115L, 548L, 579L) */ ((/* 937L, 107L, 116L, 549L, 580L) */ ((var_1_10) / (var_1_14))) <= (var_1_18))) && (stepLocal_0))) {
			/* 950L, 143L, 556L, 587L) */ if (var_1_8) {
				/* 945L, 138L, 558L, 589L) */ var_1_12 = (
					var_1_15
				);
			} else {
				/* 949L, 142L, 562L, 593L) */ var_1_12 = (
					var_1_11
				);
			}
		}
	} else {
		/* 955L, 150L, 566L, 597L) */ var_1_12 = (
			var_1_9
		);
	}


	// From: CodeObject1
	/* 238L, 27L) */ if (/* 239L, 8L, 9L) */ ((/* 240L, 4L, 10L) */ ((var_1_25) | (var_1_26))) != (/* 243L, 7L, 13L) */ ((var_1_27) / (var_1_28))))) {
		/* 246L, 26L) */ var_1_24 = (
			var_1_17
		);
	}


	// From: CodeObject2
	/* 252L, 53L) */ if (/* 253L, 36L, 37L) */ ((/* 254L, 32L, 38L) */ (- (var_1_4))) < (/* 256L, 35L, 40L) */ (max (/* 256L, 35L, 40L) */ (var_1_4) , (var_1_21)))))) {
		/* 259L, 52L) */ var_1_30 = (
			var_1_22
		);
	}


	// From: CodeObject3
	/* 263L, 75L) */ if (/* 264L, 63L, 64L) */ ((var_1_17) > (var_1_28))) {
		/* 267L, 74L) */ var_1_35 = (
			/* 270L, 73L) */ (abs (
				var_1_19
			))
		);
	}


	// From: CodeObject4
	/* 273L, 82L) */ var_1_36 = (
		var_1_5
	);


	// From: CodeObject5
	/* 279L, 109L) */ if (var_1_7) {
		/* 281L, 95L) */ var_1_38 = (
			/* 284L, 94L) */ ((
				var_1_40
			) - (
				var_1_17
			))
		);
	} else {
		/* 287L, 107L) */ if (var_1_8) {
			/* 289L, 106L) */ var_1_38 = (
				/* 292L, 105L) */ (max (
					/* 292L, 105L) */ (
						/* 293L, 103L) */ ((
							var_1_40
						) - (
							var_1_17
						))
					) , (
						var_1_17
					)
				))
			);
		}
	}


	// From: CodeObject6
	/* 325L, 161L) */ if (/* 326L, 119L, 120L) */ ((var_1_28) == (var_1_40))) {
		/* 329L, 153L) */ if (/* 330L, 130L, 131L) */ ((/* 331L, 128L, 132L) */ ((var_1_16) * (var_1_17))) != (var_1_11))) {
			/* 335L, 146L) */ var_1_43 = (
				/* 338L, 145L) */ (max (
					/* 338L, 145L) */ (
						var_1_21
					) , (
						var_1_23
					)
				))
			);
		} else {
			/* 341L, 152L) */ var_1_43 = (
				/* 344L, 151L) */ (abs (
					/* 345L, 150L) */ (abs (
						var_1_23
					))
				))
			);
		}
	} else {
		/* 347L, 160L) */ var_1_43 = (
			/* 350L, 159L) */ (min (
				/* 350L, 159L) */ (
					var_1_21
				) , (
					var_1_23
				)
			))
		);
	}


	// From: CodeObject7
	/* 370L, 185L) */ if (/* 371L, 166L, 167L) */ (! (var_1_7))) {
		/* 373L, 178L) */ var_1_45 = (
			/* 376L, 177L) */ (max (
				/* 376L, 177L) */ (
					/* 377L, 175L) */ (max (
						/* 377L, 175L) */ (
							-64
						) , (
							var_1_46
						)
					))
				) , (
					var_1_47
				)
			))
		);
	} else {
		/* 381L, 184L) */ var_1_45 = (
			/* 384L, 183L) */ ((
				var_1_48
			) + (
				var_1_49
			))
		);
	}


	// From: CodeObject8
	/* 407L, 224L) */ if (/* 408L, 196L, 197L) */ ((var_1_2) <= (/* 410L, 195L, 199L) */ ((/* 411L, 191L, 200L) */ (abs (var_1_21))) * (/* 413L, 194L, 202L) */ ((var_1_22) * (var_1_21))))))) {
		/* 416L, 218L) */ var_1_50 = (
			/* 419L, 217L) */ ((
				var_1_51
			) - (
				var_1_52
			))
		);
	} else {
		/* 422L, 223L) */ var_1_50 = (
			/* 425L, 222L) */ (abs (
				var_1_48
			))
		);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= -32767);
	assume_abort_if_not(var_1_5 <= 32766);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= 1073741822);
	assume_abort_if_not(var_1_9 <= 2147483646);
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 1073741823);
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 2147483646);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 65535);
	assume_abort_if_not(var_1_14 != 0);
	var_1_15 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_15 >= -2147483647);
	assume_abort_if_not(var_1_15 <= 2147483646);
	var_1_17 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 1);
	var_1_19 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_19 >= 32767);
	assume_abort_if_not(var_1_19 <= 65535);
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= -922337.2036854766000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854766000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= -922337.2036854766000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854766000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854766000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 4294967295);
	var_1_26 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 4294967295);
	var_1_27 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 4294967295);
	var_1_28 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 4294967295);
	assume_abort_if_not(var_1_28 != 0);
	var_1_40 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_40 >= 32767);
	assume_abort_if_not(var_1_40 <= 65534);
	var_1_46 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_46 >= -127);
	assume_abort_if_not(var_1_46 <= 126);
	var_1_47 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_47 >= -127);
	assume_abort_if_not(var_1_47 <= 126);
	var_1_48 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_48 >= -63);
	assume_abort_if_not(var_1_48 <= 63);
	var_1_49 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_49 >= -63);
	assume_abort_if_not(var_1_49 <= 63);
	var_1_51 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_51 >= -1);
	assume_abort_if_not(var_1_51 <= 126);
	var_1_52 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_52 >= 0);
	assume_abort_if_not(var_1_52 <= 126);
}



void updateLastVariables(void) {
}

int property(void) {
	if (/* 429L, 8L, 16L, 336L, 358L, 1024L) */ ((var_1_2) != (/* 431L, 7L, 18L, 338L, 360L, 1026L) */ (max (/* 431L, 7L, 18L, 338L, 360L, 1026L) */ (64.8) , (/* 433L, 6L, 20L, 340L, 362L, 1028L) */ ((var_1_3) * (var_1_4)))))))) {
		if (/* 437L, 25L, 29L, 344L, 366L, 1032L) */ ((9.9999999999995E12) < (var_1_3))) {
		}
	} else {
	}
	if (/* 452L, 52L, 56L, 431L, 456L, 1047L) */ ((var_1_7) && (var_1_8))) {
	} else {
		if (var_1_8) {
		} else {
		}
	}
	if (/* 475L, 94L, 100L, 603L, 634L, 1070L) */ ((/* 476L, 92L, 101L, 604L, 635L, 1071L) */ ((var_1_8) && (var_1_7))) || (var_1_13))) {
		if (/* 481L, 113L, 123L, 609L, 640L, 1076L) */ ((/* 482L, 109L, 124L, 610L, 641L, 1077L) */ ((/* 483L, 107L, 125L, 611L, 642L, 1078L) */ ((var_1_10) / (var_1_14))) <= (var_1_18))) && (/* 487L, 112L, 129L, 615L, 646L, 1082L) */ ((var_1_2) < (var_1_4))))) {
			if (var_1_8) {
			} else {
			}
		}
	} else {
	}
	if (/* 506L, 163L, 171L, 695L, 710L, 1101L) */ ((/* 507L, 161L, 172L, 696L, 711L, 1102L) */ ((var_1_10) << (/* 509L, 160L, 174L, 698L, 713L, 1104L) */ (min (/* 509L, 160L, 174L, 698L, 713L, 1104L) */ (1) , (var_1_17)))))) < (-1000000000))) {
	}
	if (/* 521L, 195L, 202L, 775L, 800L, 1116L) */ ((/* 522L, 193L, 203L, 776L, 801L, 1117L) */ ((/* 523L, 191L, 204L, 777L, 802L, 1118L) */ (abs (var_1_19))) - (var_1_17))) > (var_1_16))) {
	} else {
	}
	return /* 562L) */ ((
	/* 561L) */ ((
		/* 560L) */ ((
			/* 559L) */ ((
				/* 558L) */ ((
					/* 428L, 43L, 335L, 357L, 1023L) */ ((
						/* 429L, 8L, 16L, 336L, 358L, 1024L) */ ((
							var_1_2
						) != (
							/* 431L, 7L, 18L, 338L, 360L, 1026L) */ (max (
								/* 431L, 7L, 18L, 338L, 360L, 1026L) */ (
									64.8
								) , (
									/* 433L, 6L, 20L, 340L, 362L, 1028L) */ ((
										var_1_3
									) * (
										var_1_4
									))
								)
							))
						))
					) ? (
						/* 436L, 37L, 343L, 365L, 1031L) */ ((
							/* 437L, 25L, 29L, 344L, 366L, 1032L) */ ((
								9.9999999999995E12
							) < (
								var_1_3
							))
						) ? (
							/* 440L, 35L, 347L, 369L, 1035L) */ ((
								var_1_1
							) == (
								/* 440L, 35L, 347L, 369L, 1035L) */ ((signed short int) (
									var_1_5
								))
							))
						) : (
							1
						))
					) : (
						/* 444L, 41L, 351L, 373L, 1039L) */ ((
							var_1_1
						) == (
							/* 444L, 41L, 351L, 373L, 1039L) */ ((signed short int) (
								var_1_5
							))
						))
					))
				) && (
					/* 451L, 81L, 430L, 455L, 1046L) */ ((
						/* 452L, 52L, 56L, 431L, 456L, 1047L) */ ((
							var_1_7
						) && (
							var_1_8
						))
					) ? (
						/* 455L, 66L, 434L, 459L, 1050L) */ ((
							var_1_6
						) == (
							/* 455L, 66L, 434L, 459L, 1050L) */ ((signed long int) (
								/* 458L, 65L, 437L, 462L, 1053L) */ ((
									/* 459L, 63L, 438L, 463L, 1054L) */ ((
										var_1_9
									) - (
										var_1_10
									))
								) - (
									var_1_11
								))
							))
						))
					) : (
						/* 463L, 79L, 442L, 467L, 1058L) */ ((
							var_1_8
						) ? (
							/* 465L, 73L, 444L, 469L, 1060L) */ ((
								var_1_6
							) == (
								/* 465L, 73L, 444L, 469L, 1060L) */ ((signed long int) (
									var_1_10
								))
							))
						) : (
							/* 469L, 77L, 448L, 473L, 1064L) */ ((
								var_1_6
							) == (
								/* 469L, 77L, 448L, 473L, 1064L) */ ((signed long int) (
									8
								))
							))
						))
					))
				))
			) && (
				/* 474L, 152L, 602L, 633L, 1069L) */ ((
					/* 475L, 94L, 100L, 603L, 634L, 1070L) */ ((
						/* 476L, 92L, 101L, 604L, 635L, 1071L) */ ((
							var_1_8
						) && (
							var_1_7
						))
					) || (
						var_1_13
					))
				) ? (
					/* 480L, 146L, 608L, 639L, 1075L) */ ((
						/* 481L, 113L, 123L, 609L, 640L, 1076L) */ ((
							/* 482L, 109L, 124L, 610L, 641L, 1077L) */ ((
								/* 483L, 107L, 125L, 611L, 642L, 1078L) */ ((
									var_1_10
								) / (
									var_1_14
								))
							) <= (
								var_1_18
							))
						) && (
							/* 487L, 112L, 129L, 615L, 646L, 1082L) */ ((
								var_1_2
							) < (
								var_1_4
							))
						))
					) ? (
						/* 490L, 144L, 618L, 649L, 1085L) */ ((
							var_1_8
						) ? (
							/* 492L, 138L, 620L, 651L, 1087L) */ ((
								var_1_12
							) == (
								/* 492L, 138L, 620L, 651L, 1087L) */ ((signed long int) (
									var_1_15
								))
							))
						) : (
							/* 496L, 142L, 624L, 655L, 1091L) */ ((
								var_1_12
							) == (
								/* 496L, 142L, 624L, 655L, 1091L) */ ((signed long int) (
									var_1_11
								))
							))
						))
					) : (
						1
					))
				) : (
					/* 500L, 150L, 628L, 659L, 1095L) */ ((
						var_1_12
					) == (
						/* 500L, 150L, 628L, 659L, 1095L) */ ((signed long int) (
							var_1_9
						))
					))
				))
			))
		) && (
			/* 505L, 185L, 694L, 709L, 1100L) */ ((
				/* 506L, 163L, 171L, 695L, 710L, 1101L) */ ((
					/* 507L, 161L, 172L, 696L, 711L, 1102L) */ ((
						var_1_10
					) << (
						/* 509L, 160L, 174L, 698L, 713L, 1104L) */ (min (
							/* 509L, 160L, 174L, 698L, 713L, 1104L) */ (
								1
							) , (
								var_1_17
							)
						))
					))
				) < (
					-1000000000
				))
			) ? (
				/* 513L, 183L, 702L, 717L, 1108L) */ ((
					var_1_16
				) == (
					/* 513L, 183L, 702L, 717L, 1108L) */ ((unsigned long int) (
						/* 516L, 182L, 705L, 720L, 1111L) */ (max (
							/* 516L, 182L, 705L, 720L, 1111L) */ (
								var_1_17
							) , (
								var_1_10
							)
						))
					))
				))
			) : (
				1
			))
		))
	) && (
		/* 520L, 226L, 774L, 799L, 1115L) */ ((
			/* 521L, 195L, 202L, 775L, 800L, 1116L) */ ((
				/* 522L, 193L, 203L, 776L, 801L, 1117L) */ ((
					/* 523L, 191L, 204L, 777L, 802L, 1118L) */ (abs (
						var_1_19
					))
				) - (
					var_1_17
				))
			) > (
				var_1_16
			))
		) ? (
			/* 527L, 216L, 781L, 806L, 1122L) */ ((
				var_1_18
			) == (
				/* 527L, 216L, 781L, 806L, 1122L) */ ((signed long int) (
					/* 530L, 215L, 784L, 809L, 1125L) */ ((
						var_1_19
					) - (
						/* 532L, 214L, 786L, 811L, 1127L) */ ((
							var_1_14
						) + (
							/* 534L, 213L, 788L, 813L, 1129L) */ (abs (
								var_1_10
							))
						))
					))
				))
			))
		) : (
			/* 536L, 224L, 790L, 815L, 1131L) */ ((
				var_1_18
			) == (
				/* 536L, 224L, 790L, 815L, 1131L) */ ((signed long int) (
					/* 539L, 223L, 793L, 818L, 1134L) */ (max (
						/* 539L, 223L, 793L, 818L, 1134L) */ (
							/* 540L, 221L, 794L, 819L, 1135L) */ ((
								var_1_10
							) + (
								var_1_5
							))
						) , (
							var_1_15
						)
					))
				))
			))
		))
	))
) && (
	/* 546L, 241L, 851L, 864L, 1141L) */ ((
		var_1_20
	) == (
		/* 546L, 241L, 851L, 864L, 1141L) */ ((double) (
			/* 549L, 240L, 854L, 867L, 1144L) */ (max (
				/* 549L, 240L, 854L, 867L, 1144L) */ (
					/* 550L, 235L, 855L, 868L, 1145L) */ (min (
						/* 550L, 235L, 855L, 868L, 1145L) */ (
							var_1_21
						) , (
							var_1_22
						)
					))
				) , (
					/* 553L, 239L, 858L, 871L, 1148L) */ ((
						/* 554L, 237L, 859L, 872L, 1149L) */ (abs (
							15.5
						))
					) - (
						var_1_23
					))
				)
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
