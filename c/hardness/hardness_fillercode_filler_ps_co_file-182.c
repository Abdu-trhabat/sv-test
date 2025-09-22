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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch182Filler_PS_CO.c", 13, "reach_error"); }
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
float var_1_1 = -0.5;
unsigned short int var_1_3 = 8;
float var_1_5 = 16.625;
float var_1_6 = 24.25;
float var_1_7 = 199.5;
unsigned char var_1_9 = 1;
float var_1_10 = 8.1;
float var_1_11 = 25.375;
float var_1_12 = 0.55;
float var_1_13 = 24.75;
unsigned short int var_1_14 = 57387;
unsigned short int var_1_15 = 64;
signed short int var_1_16 = 256;
float var_1_17 = 1.2;
signed short int var_1_18 = 30236;
signed short int var_1_19 = 0;
unsigned long int var_1_20 = 1;
unsigned short int var_1_21 = 2;
unsigned short int var_1_22 = 54553;
unsigned short int var_1_23 = 8;
signed short int var_1_24 = 32;
signed short int var_1_25 = 32;
signed short int var_1_26 = -256;
unsigned long int var_1_27 = 4;
float var_1_28 = 25.6;
unsigned long int var_1_29 = 100;
float var_1_30 = 64.375;
unsigned long int var_1_31 = 0;
unsigned long int var_1_32 = 64;
signed char var_1_33 = -4;
signed char var_1_34 = 0;
signed char var_1_35 = 0;
signed char var_1_36 = 64;
signed char var_1_37 = 1;
signed char var_1_38 = -32;
unsigned char var_1_39 = 128;
signed long int var_1_40 = 32;
unsigned short int var_1_41 = 256;
unsigned short int var_1_42 = 4;
float var_1_43 = 32.5;
unsigned char var_1_44 = 1;
unsigned char var_1_45 = 0;
unsigned char var_1_46 = 0;
unsigned char var_1_47 = 0;
unsigned char var_1_48 = 1;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	/* 238L, 5L) */ var_1_27 = (
		2u
	);


	// From: CodeObject2
	/* 242L, 26L) */ if (/* 243L, 13L, 14L) */ ((var_1_20) == (/* 245L, 12L, 16L) */ (abs (var_1_20))))) {
		/* 247L, 25L) */ var_1_28 = (
			var_1_30
		);
	}


	// From: CodeObject3
	/* 268L, 68L) */ if (/* 269L, 32L, 33L) */ ((var_1_29) > (var_1_27))) {
		/* 272L, 66L) */ if (/* 273L, 42L, 43L) */ ((var_1_13) < (/* 275L, 41L, 45L) */ (abs (var_1_30))))) {
			/* 277L, 64L) */ if (/* 278L, 53L, 54L) */ ((var_1_27) != (var_1_29))) {
				/* 281L, 63L) */ var_1_31 = (
					var_1_32
				);
			}
		}
	}


	// From: CodeObject4
	/* 285L, 100L) */ if (/* 286L, 74L, 75L) */ ((var_1_32) >= (var_1_20))) {
		/* 289L, 92L) */ var_1_33 = (
			/* 292L, 91L) */ (min (
				/* 292L, 91L) */ (
					/* 293L, 89L) */ ((
						/* 294L, 85L) */ (max (
							/* 294L, 85L) */ (
								var_1_34
							) , (
								var_1_35
							)
						))
					) - (
						/* 297L, 88L) */ ((
							var_1_36
						) - (
							var_1_37
						))
					))
				) , (
					var_1_38
				)
			))
		);
	} else {
		/* 301L, 99L) */ var_1_33 = (
			/* 304L, 98L) */ ((
				var_1_34
			) - (
				/* 306L, 97L) */ (abs (
					var_1_35
				))
			))
		);
	}


	// From: CodeObject5
	/* 308L, 136L) */ if (/* 309L, 115L, 116L) */ ((/* 310L, 111L, 117L) */ ((var_1_37) - (var_1_36))) <= (/* 313L, 114L, 120L) */ ((var_1_35) / (var_1_40))))) {
		/* 316L, 135L) */ var_1_39 = (
			/* 319L, 134L) */ (min (
				/* 319L, 134L) */ (
					var_1_36
				) , (
					32
				)
			))
		);
	}


	// From: CodeObject6
	/* 323L, 178L) */ if (/* 324L, 146L, 147L) */ ((/* 325L, 144L, 148L) */ ((var_1_37) & (/* 327L, 143L, 150L) */ ((var_1_20) ^ (var_1_32))))) < (var_1_20))) {
		/* 331L, 171L) */ var_1_41 = (
			/* 334L, 170L) */ (min (
				/* 334L, 170L) */ (
					/* 335L, 166L) */ (abs (
						/* 336L, 165L) */ (max (
							/* 336L, 165L) */ (
								var_1_37
							) , (
								var_1_36
							)
						))
					))
				) , (
					/* 339L, 169L) */ ((
						var_1_20
					) + (
						var_1_42
					))
				)
			))
		);
	} else {
		/* 342L, 177L) */ var_1_41 = (
			/* 345L, 176L) */ (min (
				/* 345L, 176L) */ (
					var_1_36
				) , (
					var_1_42
				)
			))
		);
	}


	// From: CodeObject7
	/* 348L, 205L) */ if (/* 349L, 188L, 189L) */ ((var_1_16) >= (/* 351L, 187L, 191L) */ ((8) % (var_1_40))))) {
		/* 354L, 204L) */ var_1_43 = (
			/* 357L, 203L) */ (min (
				/* 357L, 203L) */ (
					100.25f
				) , (
					var_1_30
				)
			))
		);
	}


	// From: CodeObject8
	/* 360L, 227L) */ if (var_1_45) {
		/* 362L, 225L) */ if (/* 363L, 214L, 215L) */ ((var_1_24) >= (var_1_20))) {
			/* 366L, 224L) */ var_1_44 = (
				var_1_46
			);
		}
	}


	// From: CodeObject9
	/* 371L, 234L) */ var_1_47 = (
		var_1_48
	);


	// From: Req4Batch182Filler_PS_CO
	/* 922L, 144L, 513L, 530L) */ if (/* 923L, 121L, 122L, 514L, 531L) */ ((/* 924L, 117L, 123L, 515L, 532L) */ ((var_1_12) - (var_1_11))) >= (/* 927L, 120L, 126L, 518L, 535L) */ ((var_1_10) / (var_1_17))))) {
		/* 930L, 143L, 521L, 538L) */ var_1_16 = (
			/* 933L, 142L, 524L, 541L) */ ((
				/* 934L, 140L, 525L, 542L) */ ((
					var_1_18
				) - (
					1
				))
			) - (
				var_1_19
			))
		);
	}


	// From: Req5Batch182Filler_PS_CO
	unsigned short int stepLocal_1 = var_1_21;
	/* 964L, 198L, 581L, 606L) */ if (/* 944L, 152L, 153L, 582L, 607L) */ ((var_1_17) >= (var_1_12))) {
		/* 963L, 196L, 585L, 610L) */ if (/* 952L, 167L, 168L, 586L, 611L) */ ((stepLocal_1) != (/* 951L, 166L, 170L, 588L, 613L) */ ((/* 947L, 162L, 171L, 589L, 614L) */ (max (/* 947L, 162L, 171L, 589L, 614L) */ (var_1_14) , (var_1_22)))) - (/* 950L, 165L, 174L, 592L, 617L) */ ((5) + (var_1_23))))))) {
			/* 958L, 191L, 595L, 620L) */ var_1_20 = (
				/* 957L, 190L, 598L, 623L) */ (min (
					/* 957L, 190L, 598L, 623L) */ (
						var_1_22
					) , (
						var_1_3
					)
				))
			);
		} else {
			/* 962L, 195L, 601L, 626L) */ var_1_20 = (
				var_1_21
			);
		}
	}


	// From: Req6Batch182Filler_PS_CO
	/* 968L, 225L, 681L, 698L) */ if (/* 969L, 206L, 207L, 682L, 699L) */ ((var_1_10) < (var_1_12))) {
		/* 972L, 218L, 685L, 702L) */ var_1_24 = (
			/* 975L, 217L, 688L, 705L) */ ((
				var_1_23
			) + (
				var_1_25
			))
		);
	} else {
		/* 978L, 224L, 691L, 708L) */ var_1_24 = (
			/* 981L, 223L, 694L, 711L) */ (max (
				/* 981L, 223L, 694L, 711L) */ (
					var_1_18
				) , (
					-2
				)
			))
		);
	}


	// From: Req1Batch182Filler_PS_CO
	unsigned long int stepLocal_0 = /* 862L, 6L, 10L, 287L, 302L) */ ((/* 863L, 4L, 11L, 288L, 303L) */ ((var_1_20) * (16))) / (var_1_3));
	/* 876L, 29L, 285L, 300L) */ if (/* 869L, 8L, 9L, 286L, 301L) */ ((stepLocal_0) <= (var_1_20))) {
		/* 875L, 28L, 293L, 308L) */ var_1_1 = (
			/* 874L, 27L, 296L, 311L) */ (min (
				/* 874L, 27L, 296L, 311L) */ (
					var_1_5
				) , (
					var_1_6
				)
			))
		);
	}


	// From: Req3Batch182Filler_PS_CO
	/* 911L, 105L, 463L, 476L) */ if (/* 912L, 90L, 91L, 464L, 477L) */ ((/* 913L, 88L, 92L, 465L, 478L) */ ((var_1_14) - (var_1_15))) != (var_1_20))) {
		/* 917L, 104L, 469L, 482L) */ var_1_13 = (
			0.8f
		);
	}


	// From: Req7Batch182Filler_PS_CO
	/* 988L, 275L, 752L, 780L) */ if (/* 989L, 239L, 240L, 753L, 781L) */ ((/* 990L, 233L, 241L, 754L, 782L) */ (max (/* 990L, 233L, 241L, 754L, 782L) */ (var_1_1) , (var_1_17)))) >= (/* 993L, 238L, 244L, 757L, 785L) */ ((var_1_10) + (/* 995L, 237L, 246L, 759L, 787L) */ ((var_1_13) / (128.9f))))))) {
		/* 998L, 269L, 762L, 790L) */ if (var_1_9) {
			/* 1000L, 264L, 764L, 792L) */ var_1_26 = (
				var_1_25
			);
		} else {
			/* 1004L, 268L, 768L, 796L) */ var_1_26 = (
				var_1_18
			);
		}
	} else {
		/* 1008L, 274L, 772L, 800L) */ var_1_26 = (
			var_1_19
		);
	}


	// From: Req2Batch182Filler_PS_CO
	/* 882L, 76L, 347L, 376L) */ if (/* 883L, 37L, 38L, 348L, 377L) */ ((var_1_1) >= (var_1_13))) {
		/* 886L, 74L, 351L, 380L) */ if (var_1_9) {
			/* 888L, 54L, 353L, 382L) */ var_1_7 = (
				/* 891L, 53L, 356L, 385L) */ ((
					var_1_10
				) + (
					/* 893L, 52L, 358L, 387L) */ ((
						var_1_11
					) - (
						var_1_12
					))
				))
			);
		} else {
			/* 896L, 72L, 361L, 390L) */ if (/* 897L, 57L, 58L, 362L, 391L) */ ((var_1_3) >= (var_1_20))) {
				/* 900L, 67L, 365L, 394L) */ var_1_7 = (
					var_1_5
				);
			} else {
				/* 904L, 71L, 369L, 398L) */ var_1_7 = (
					var_1_6
				);
			}
		}
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 65535);
	assume_abort_if_not(var_1_3 != 0);
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= -922337.2036854766000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= -922337.2036854766000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= -461168.6018427383000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427383000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427383000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_14 >= 32767);
	assume_abort_if_not(var_1_14 <= 65535);
	var_1_15 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 32767);
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= -922337.2036854776000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
	assume_abort_if_not(var_1_17 != 0.0F);
	var_1_18 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_18 >= 16382);
	assume_abort_if_not(var_1_18 <= 32766);
	var_1_19 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 32766);
	var_1_21 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 65535);
	var_1_22 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_22 >= 32767);
	assume_abort_if_not(var_1_22 <= 65535);
	var_1_23 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 16383);
	var_1_25 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_25 >= -16383);
	assume_abort_if_not(var_1_25 <= 16383);
	var_1_29 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 4294967295);
	var_1_30 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_30 >= -922337.2036854766000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854766000e+12F && var_1_30 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 4294967294);
	var_1_34 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_34 >= -1);
	assume_abort_if_not(var_1_34 <= 126);
	var_1_35 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_35 >= -1);
	assume_abort_if_not(var_1_35 <= 126);
	var_1_36 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_36 >= 63);
	assume_abort_if_not(var_1_36 <= 126);
	var_1_37 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 63);
	var_1_38 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_38 >= -127);
	assume_abort_if_not(var_1_38 <= 126);
	var_1_40 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_40 >= -2147483648);
	assume_abort_if_not(var_1_40 <= 2147483647);
	assume_abort_if_not(var_1_40 != 0);
	var_1_42 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 32767);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 1);
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 0);
	var_1_48 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_48 >= 1);
	assume_abort_if_not(var_1_48 <= 1);
}



void updateLastVariables(void) {
}

int property(void) {
	if (/* 376L, 8L, 16L, 316L, 331L, 1014L) */ ((/* 377L, 6L, 17L, 317L, 332L, 1015L) */ ((/* 378L, 4L, 18L, 318L, 333L, 1016L) */ ((var_1_20) * (16))) / (var_1_3))) <= (var_1_20))) {
	}
	if (/* 393L, 37L, 41L, 406L, 435L, 1031L) */ ((var_1_1) >= (var_1_13))) {
		if (var_1_9) {
		} else {
			if (/* 407L, 57L, 61L, 420L, 449L, 1045L) */ ((var_1_3) >= (var_1_20))) {
			} else {
			}
		}
	}
	if (/* 422L, 90L, 96L, 490L, 503L, 1060L) */ ((/* 423L, 88L, 97L, 491L, 504L, 1061L) */ ((var_1_14) - (var_1_15))) != (var_1_20))) {
	}
	if (/* 433L, 121L, 129L, 548L, 565L, 1071L) */ ((/* 434L, 117L, 130L, 549L, 566L, 1072L) */ ((var_1_12) - (var_1_11))) >= (/* 437L, 120L, 133L, 552L, 569L, 1075L) */ ((var_1_10) / (var_1_17))))) {
	}
	if (/* 450L, 152L, 156L, 632L, 657L, 1088L) */ ((var_1_17) >= (var_1_12))) {
		if (/* 454L, 167L, 177L, 636L, 661L, 1092L) */ ((var_1_21) != (/* 456L, 166L, 179L, 638L, 663L, 1094L) */ ((/* 457L, 162L, 180L, 639L, 664L, 1095L) */ (max (/* 457L, 162L, 180L, 639L, 664L, 1095L) */ (var_1_14) , (var_1_22)))) - (/* 460L, 165L, 183L, 642L, 667L, 1098L) */ ((5) + (var_1_23))))))) {
		} else {
		}
	}
	if (/* 475L, 206L, 210L, 716L, 733L, 1113L) */ ((var_1_10) < (var_1_12))) {
	} else {
	}
	if (/* 495L, 239L, 249L, 809L, 837L, 1133L) */ ((/* 496L, 233L, 250L, 810L, 838L, 1134L) */ (max (/* 496L, 233L, 250L, 810L, 838L, 1134L) */ (var_1_1) , (var_1_17)))) >= (/* 499L, 238L, 253L, 813L, 841L, 1137L) */ ((var_1_10) + (/* 501L, 237L, 255L, 815L, 843L, 1139L) */ ((var_1_13) / (128.9f))))))) {
		if (var_1_9) {
		} else {
		}
	} else {
	}
	return /* 524L) */ ((
	/* 523L) */ ((
		/* 522L) */ ((
			/* 521L) */ ((
				/* 520L) */ ((
					/* 519L) */ ((
						/* 375L, 30L, 315L, 330L, 1013L) */ ((
							/* 376L, 8L, 16L, 316L, 331L, 1014L) */ ((
								/* 377L, 6L, 17L, 317L, 332L, 1015L) */ ((
									/* 378L, 4L, 18L, 318L, 333L, 1016L) */ ((
										var_1_20
									) * (
										16
									))
								) / (
									var_1_3
								))
							) <= (
								var_1_20
							))
						) ? (
							/* 383L, 28L, 323L, 338L, 1021L) */ ((
								var_1_1
							) == (
								/* 383L, 28L, 323L, 338L, 1021L) */ ((float) (
									/* 386L, 27L, 326L, 341L, 1024L) */ (min (
										/* 386L, 27L, 326L, 341L, 1024L) */ (
											var_1_5
										) , (
											var_1_6
										)
									))
								))
							))
						) : (
							1
						))
					) && (
						/* 392L, 77L, 405L, 434L, 1030L) */ ((
							/* 393L, 37L, 41L, 406L, 435L, 1031L) */ ((
								var_1_1
							) >= (
								var_1_13
							))
						) ? (
							/* 396L, 75L, 409L, 438L, 1034L) */ ((
								var_1_9
							) ? (
								/* 398L, 54L, 411L, 440L, 1036L) */ ((
									var_1_7
								) == (
									/* 398L, 54L, 411L, 440L, 1036L) */ ((float) (
										/* 401L, 53L, 414L, 443L, 1039L) */ ((
											var_1_10
										) + (
											/* 403L, 52L, 416L, 445L, 1041L) */ ((
												var_1_11
											) - (
												var_1_12
											))
										))
									))
								))
							) : (
								/* 406L, 73L, 419L, 448L, 1044L) */ ((
									/* 407L, 57L, 61L, 420L, 449L, 1045L) */ ((
										var_1_3
									) >= (
										var_1_20
									))
								) ? (
									/* 410L, 67L, 423L, 452L, 1048L) */ ((
										var_1_7
									) == (
										/* 410L, 67L, 423L, 452L, 1048L) */ ((float) (
											var_1_5
										))
									))
								) : (
									/* 414L, 71L, 427L, 456L, 1052L) */ ((
										var_1_7
									) == (
										/* 414L, 71L, 427L, 456L, 1052L) */ ((float) (
											var_1_6
										))
									))
								))
							))
						) : (
							1
						))
					))
				) && (
					/* 421L, 106L, 489L, 502L, 1059L) */ ((
						/* 422L, 90L, 96L, 490L, 503L, 1060L) */ ((
							/* 423L, 88L, 97L, 491L, 504L, 1061L) */ ((
								var_1_14
							) - (
								var_1_15
							))
						) != (
							var_1_20
						))
					) ? (
						/* 427L, 104L, 495L, 508L, 1065L) */ ((
							var_1_13
						) == (
							/* 427L, 104L, 495L, 508L, 1065L) */ ((float) (
								0.8f
							))
						))
					) : (
						1
					))
				))
			) && (
				/* 432L, 145L, 547L, 564L, 1070L) */ ((
					/* 433L, 121L, 129L, 548L, 565L, 1071L) */ ((
						/* 434L, 117L, 130L, 549L, 566L, 1072L) */ ((
							var_1_12
						) - (
							var_1_11
						))
					) >= (
						/* 437L, 120L, 133L, 552L, 569L, 1075L) */ ((
							var_1_10
						) / (
							var_1_17
						))
					))
				) ? (
					/* 440L, 143L, 555L, 572L, 1078L) */ ((
						var_1_16
					) == (
						/* 440L, 143L, 555L, 572L, 1078L) */ ((signed short int) (
							/* 443L, 142L, 558L, 575L, 1081L) */ ((
								/* 444L, 140L, 559L, 576L, 1082L) */ ((
									var_1_18
								) - (
									1
								))
							) - (
								var_1_19
							))
						))
					))
				) : (
					1
				))
			))
		) && (
			/* 449L, 199L, 631L, 656L, 1087L) */ ((
				/* 450L, 152L, 156L, 632L, 657L, 1088L) */ ((
					var_1_17
				) >= (
					var_1_12
				))
			) ? (
				/* 453L, 197L, 635L, 660L, 1091L) */ ((
					/* 454L, 167L, 177L, 636L, 661L, 1092L) */ ((
						var_1_21
					) != (
						/* 456L, 166L, 179L, 638L, 663L, 1094L) */ ((
							/* 457L, 162L, 180L, 639L, 664L, 1095L) */ (max (
								/* 457L, 162L, 180L, 639L, 664L, 1095L) */ (
									var_1_14
								) , (
									var_1_22
								)
							))
						) - (
							/* 460L, 165L, 183L, 642L, 667L, 1098L) */ ((
								5
							) + (
								var_1_23
							))
						))
					))
				) ? (
					/* 463L, 191L, 645L, 670L, 1101L) */ ((
						var_1_20
					) == (
						/* 463L, 191L, 645L, 670L, 1101L) */ ((unsigned long int) (
							/* 466L, 190L, 648L, 673L, 1104L) */ (min (
								/* 466L, 190L, 648L, 673L, 1104L) */ (
									var_1_22
								) , (
									var_1_3
								)
							))
						))
					))
				) : (
					/* 469L, 195L, 651L, 676L, 1107L) */ ((
						var_1_20
					) == (
						/* 469L, 195L, 651L, 676L, 1107L) */ ((unsigned long int) (
							var_1_21
						))
					))
				))
			) : (
				1
			))
		))
	) && (
		/* 474L, 226L, 715L, 732L, 1112L) */ ((
			/* 475L, 206L, 210L, 716L, 733L, 1113L) */ ((
				var_1_10
			) < (
				var_1_12
			))
		) ? (
			/* 478L, 218L, 719L, 736L, 1116L) */ ((
				var_1_24
			) == (
				/* 478L, 218L, 719L, 736L, 1116L) */ ((signed short int) (
					/* 481L, 217L, 722L, 739L, 1119L) */ ((
						var_1_23
					) + (
						var_1_25
					))
				))
			))
		) : (
			/* 484L, 224L, 725L, 742L, 1122L) */ ((
				var_1_24
			) == (
				/* 484L, 224L, 725L, 742L, 1122L) */ ((signed short int) (
					/* 487L, 223L, 728L, 745L, 1125L) */ (max (
						/* 487L, 223L, 728L, 745L, 1125L) */ (
							var_1_18
						) , (
							-2
						)
					))
				))
			))
		))
	))
) && (
	/* 494L, 276L, 808L, 836L, 1132L) */ ((
		/* 495L, 239L, 249L, 809L, 837L, 1133L) */ ((
			/* 496L, 233L, 250L, 810L, 838L, 1134L) */ (max (
				/* 496L, 233L, 250L, 810L, 838L, 1134L) */ (
					var_1_1
				) , (
					var_1_17
				)
			))
		) >= (
			/* 499L, 238L, 253L, 813L, 841L, 1137L) */ ((
				var_1_10
			) + (
				/* 501L, 237L, 255L, 815L, 843L, 1139L) */ ((
					var_1_13
				) / (
					128.9f
				))
			))
		))
	) ? (
		/* 504L, 270L, 818L, 846L, 1142L) */ ((
			var_1_9
		) ? (
			/* 506L, 264L, 820L, 848L, 1144L) */ ((
				var_1_26
			) == (
				/* 506L, 264L, 820L, 848L, 1144L) */ ((signed short int) (
					var_1_25
				))
			))
		) : (
			/* 510L, 268L, 824L, 852L, 1148L) */ ((
				var_1_26
			) == (
				/* 510L, 268L, 824L, 852L, 1148L) */ ((signed short int) (
					var_1_18
				))
			))
		))
	) : (
		/* 514L, 274L, 828L, 856L, 1152L) */ ((
			var_1_26
		) == (
			/* 514L, 274L, 828L, 856L, 1152L) */ ((signed short int) (
				var_1_19
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
