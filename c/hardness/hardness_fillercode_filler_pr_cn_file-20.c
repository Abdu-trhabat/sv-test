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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch20Filler_PR_CN.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 5;
unsigned char var_1_2 = 0;
unsigned char var_1_3 = 128;
unsigned char var_1_4 = 2;
unsigned char var_1_5 = 2;
unsigned char var_1_6 = 32;
signed long int var_1_7 = 128;
unsigned short int var_1_8 = 100;
float var_1_9 = 255.75;
signed char var_1_10 = 64;
signed char var_1_11 = 32;
signed char var_1_12 = 4;
float var_1_13 = 0.0;
float var_1_14 = 7.25;
float var_1_15 = 8.125;
float var_1_16 = 24.5;
signed short int var_1_17 = -256;
double var_1_18 = 31.5;
double var_1_20 = 127.5;
float var_1_21 = 255.2;
float var_1_22 = 5.5;
signed long int var_1_23 = -8;
double var_1_24 = 0.5;
unsigned short int var_1_25 = 200;
unsigned char var_1_26 = 0;
float var_1_27 = 127.9;
double var_1_28 = 1.8;
unsigned char var_1_29 = 1;
double var_1_30 = 5.65;
unsigned short int var_1_31 = 8;
signed short int var_1_32 = -64;
signed long int var_1_33 = 1000;
unsigned short int var_1_34 = 64;
unsigned short int var_1_35 = 0;
unsigned short int var_1_36 = 2;
unsigned short int var_1_37 = 8;
unsigned short int var_1_38 = 2;
unsigned char var_1_39 = 1;
unsigned short int var_1_40 = 5;
unsigned char var_1_41 = 0;
unsigned char var_1_42 = 0;
unsigned long int var_1_43 = 10;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch20Filler_PR_CN
	/* 967L, 17L, 281L, 296L) */ if (var_1_2) {
		/* 969L, 10L, 283L, 298L) */ var_1_1 = (
			/* 972L, 9L, 286L, 301L) */ ((
				var_1_3
			) - (
				var_1_4
			))
		);
	} else {
		/* 975L, 16L, 289L, 304L) */ var_1_1 = (
			/* 978L, 15L, 292L, 307L) */ ((
				var_1_4
			) + (
				var_1_5
			))
		);
	}


	// From: CodeObject1
	/* 5L) */ var_1_21 = (
		var_1_22
	);


	// From: Req2Batch20Filler_PR_CN
	signed long int stepLocal_0 = /* 983L, 28L, 36L, 343L, 364L) */ ((64) + (/* 985L, 27L, 38L, 345L, 366L) */ ((var_1_5) / (var_1_3))));
	/* 1003L, 65L, 341L, 362L) */ if (/* 994L, 34L, 35L, 342L, 363L) */ ((stepLocal_0) != (/* 993L, 33L, 41L, 348L, 369L) */ ((var_1_1) - (/* 992L, 32L, 43L, 350L, 371L) */ ((var_1_4) + (var_1_7))))))) {
		/* 998L, 60L, 353L, 374L) */ var_1_6 = (
			var_1_4
		);
	} else {
		/* 1002L, 64L, 357L, 378L) */ var_1_6 = (
			128
		);
	}


	// From: CodeObject7
	/* 212L) */ if (/* 192L, 191L) */ ((var_1_26) || (/* 194L, 190L) */ ((var_1_25) <= (/* 196L, 189L) */ ((var_1_35) / (var_1_40))))))) {
		/* 211L) */ var_1_39 = (
			/* 210L) */ ((
				var_1_41
			) || (
				var_1_42
			))
		);
	}


	// From: CodeObject8
	/* 246L) */ if (/* 223L, 222L) */ ((/* 224L, 220L) */ ((var_1_33) + (/* 226L, 219L) */ (min (/* 226L, 219L) */ (var_1_35) , (var_1_36)))))) <= (var_1_31))) {
		/* 244L) */ if (var_1_29) {
			/* 243L) */ var_1_43 = (
				var_1_36
			);
		}
	}


	// From: Req3Batch20Filler_PR_CN
	signed long int stepLocal_1 = /* 1008L, 73L, 79L, 541L, 560L) */ ((var_1_6) + (var_1_1));
	/* 1026L, 102L, 539L, 558L) */ if (/* 1015L, 77L, 78L, 540L, 559L) */ ((stepLocal_1) >= (/* 1014L, 76L, 82L, 544L, 563L) */ ((var_1_3) - (var_1_5))))) {
		/* 1021L, 97L, 547L, 566L) */ var_1_8 = (
			/* 1020L, 96L, 550L, 569L) */ (max (
				/* 1020L, 96L, 550L, 569L) */ (
					var_1_1
				) , (
					var_1_3
				)
			))
		);
	} else {
		/* 1025L, 101L, 553L, 572L) */ var_1_8 = (
			var_1_1
		);
	}


	// From: CodeObject6
	/* 181L) */ if (/* 118L, 117L) */ ((var_1_29) || (/* 120L, 116L) */ ((var_1_21) <= (var_1_28))))) {
		/* 170L) */ if (/* 137L, 136L) */ ((/* 138L, 132L) */ ((var_1_25) | (/* 140L, 131L) */ ((var_1_23) * (var_1_32))))) == (/* 143L, 135L) */ (min (/* 143L, 135L) */ (var_1_33) , (-32)))))) {
			/* 161L) */ var_1_31 = (
				/* 160L) */ (max (
					/* 160L) */ (
						/* 158L) */ (abs (
							var_1_34
						))
					) , (
						var_1_35
					)
				))
			);
		} else {
			/* 169L) */ var_1_31 = (
				/* 168L) */ (abs (
					/* 167L) */ (min (
						/* 167L) */ (
							var_1_34
						) , (
							/* 166L) */ (abs (
								var_1_35
							))
						)
					))
				))
			);
		}
	} else {
		/* 180L) */ var_1_31 = (
			/* 179L) */ ((
				var_1_36
			) + (
				/* 178L) */ ((
					/* 176L) */ (abs (
						var_1_37
					))
				) + (
					var_1_38
				))
			))
		);
	}


	// From: Req4Batch20Filler_PR_CN
	/* 1031L, 147L, 616L, 640L) */ if (/* 1032L, 116L, 117L, 617L, 641L) */ ((/* 1033L, 114L, 118L, 618L, 642L) */ ((/* 1034L, 110L, 119L, 619L, 643L) */ ((var_1_10) - (var_1_11))) - (/* 1037L, 113L, 122L, 622L, 646L) */ ((16) + (var_1_12))))) != (var_1_5))) {
		/* 1041L, 142L, 626L, 650L) */ var_1_9 = (
			/* 1044L, 141L, 629L, 653L) */ ((
				64.8f
			) - (
				/* 1046L, 140L, 631L, 655L) */ ((
					var_1_13
				) - (
					var_1_14
				))
			))
		);
	} else {
		/* 1049L, 146L, 634L, 658L) */ var_1_9 = (
			var_1_13
		);
	}


	// From: Req5Batch20Filler_PR_CN
	/* 1057L, 160L, 714L, 724L) */ var_1_15 = (
		/* 1060L, 159L, 717L, 727L) */ ((
			var_1_14
		) + (
			var_1_16
		))
	);


	// From: CodeObject4
	/* 57L) */ if (var_1_26) {
		/* 55L) */ if (/* 35L, 34L) */ ((var_1_21) > (/* 37L, 33L) */ ((var_1_24) / (/* 39L, 32L) */ (abs (var_1_27))))))) {
			/* 50L) */ var_1_25 = (
				100
			);
		} else {
			/* 54L) */ var_1_25 = (
				10
			);
		}
	}


	// From: Req6Batch20Filler_PR_CN
	/* 1064L, 219L, 751L, 780L) */ if (var_1_2) {
		/* 1066L, 179L, 753L, 782L) */ var_1_17 = (
			/* 1069L, 178L, 756L, 785L) */ ((
				var_1_3
			) + (
				var_1_12
			))
		);
	} else {
		/* 1072L, 217L, 759L, 788L) */ if (/* 1073L, 188L, 189L, 760L, 789L) */ ((var_1_14) == (/* 1075L, 187L, 191L, 762L, 791L) */ ((/* 1076L, 183L, 192L, 763L, 792L) */ (min (/* 1076L, 183L, 192L, 763L, 792L) */ (99.8f) , (var_1_16)))) / (/* 1079L, 186L, 195L, 766L, 795L) */ (max (/* 1079L, 186L, 195L, 766L, 795L) */ (255.6f) , (var_1_13)))))))) {
			/* 1082L, 210L, 769L, 798L) */ var_1_17 = (
				var_1_4
			);
		} else {
			/* 1086L, 216L, 773L, 802L) */ var_1_17 = (
				/* 1089L, 215L, 776L, 805L) */ ((
					var_1_5
				) - (
					var_1_3
				))
			);
		}
	}


	// From: CodeObject2
	/* 13L) */ var_1_23 = (
		-16
	);


	// From: CodeObject5
	/* 109L) */ if (/* 64L, 63L) */ ((var_1_21) > (var_1_22))) {
		/* 73L) */ var_1_28 = (
			var_1_22
		);
	} else {
		/* 107L) */ if (/* 85L, 84L) */ ((/* 86L, 79L) */ ((var_1_26) || (var_1_29))) || (/* 89L, 83L) */ ((/* 90L, 81L) */ (- (var_1_24))) <= (var_1_30))))) {
			/* 106L) */ var_1_28 = (
				/* 105L) */ (min (
					/* 105L) */ (
						9.99999999739E8
					) , (
						var_1_22
					)
				))
			);
		}
	}


	// From: Req7Batch20Filler_PR_CN
	/* 1094L, 275L, 868L, 893L) */ if (/* 1095L, 233L, 234L, 869L, 894L) */ ((/* 1096L, 229L, 235L, 870L, 895L) */ ((var_1_2) || (/* 1098L, 228L, 237L, 872L, 897L) */ ((var_1_16) > (var_1_13))))) && (/* 1101L, 232L, 240L, 875L, 900L) */ ((var_1_3) < (var_1_8))))) {
		/* 1104L, 269L, 878L, 903L) */ if (/* 1105L, 256L, 257L, 879L, 904L) */ ((/* 1106L, 254L, 258L, 880L, 905L) */ (- (var_1_8))) > (var_1_5))) {
			/* 1109L, 268L, 883L, 908L) */ var_1_18 = (
				var_1_20
			);
		}
	} else {
		/* 1113L, 274L, 887L, 912L) */ var_1_18 = (
			1.000000075E7
		);
	}


	// From: CodeObject3
	/* 21L) */ var_1_24 = (
		var_1_22
	);
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 127);
	assume_abort_if_not(var_1_3 <= 254);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 127);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 127);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1073741823);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= 63);
	assume_abort_if_not(var_1_10 <= 127);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 64);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 63);
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= 4611686.018427383000e+12F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= -461168.6018427383000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427383000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= -922337.2036854766000e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854766000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= -922337.2036854766000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854766000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 1);
	var_1_27 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_27 >= -922337.2036854776000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854776000e+12F && var_1_27 >= 1.0e-20F ));
	assume_abort_if_not(var_1_27 != 0.0F);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 1);
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= -922337.2036854776000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854776000e+12F && var_1_30 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_32 >= -32768);
	assume_abort_if_not(var_1_32 <= 32767);
	var_1_33 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_33 >= -2147483648);
	assume_abort_if_not(var_1_33 <= 2147483647);
	var_1_34 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 65534);
	var_1_35 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 65534);
	var_1_36 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 32767);
	var_1_37 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 16384);
	var_1_38 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 16383);
	var_1_40 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 65535);
	assume_abort_if_not(var_1_40 != 0);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 0);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 0);
}



void updateLastVariables(void) {
}

int property(void) {
	if (var_1_2) {
	} else {
	}
	if (/* 264L, 34L, 46L, 384L, 405L, 1134L) */ ((/* 265L, 28L, 47L, 385L, 406L, 1135L) */ ((64) + (/* 267L, 27L, 49L, 387L, 408L, 1137L) */ ((var_1_5) / (var_1_3))))) != (/* 270L, 33L, 52L, 390L, 411L, 1140L) */ ((var_1_1) - (/* 272L, 32L, 54L, 392L, 413L, 1142L) */ ((var_1_4) + (var_1_7))))))) {
	} else {
	}
	if (/* 285L, 77L, 85L, 578L, 597L, 1155L) */ ((/* 286L, 73L, 86L, 579L, 598L, 1156L) */ ((var_1_6) + (var_1_1))) >= (/* 289L, 76L, 89L, 582L, 601L, 1159L) */ ((var_1_3) - (var_1_5))))) {
	} else {
	}
	if (/* 305L, 116L, 126L, 665L, 689L, 1175L) */ ((/* 306L, 114L, 127L, 666L, 690L, 1176L) */ ((/* 307L, 110L, 128L, 667L, 691L, 1177L) */ ((var_1_10) - (var_1_11))) - (/* 310L, 113L, 131L, 670L, 694L, 1180L) */ ((16) + (var_1_12))))) != (var_1_5))) {
	} else {
	}
	if (var_1_2) {
	} else {
		if (/* 346L, 188L, 198L, 818L, 847L, 1216L) */ ((var_1_14) == (/* 348L, 187L, 200L, 820L, 849L, 1218L) */ ((/* 349L, 183L, 201L, 821L, 850L, 1219L) */ (min (/* 349L, 183L, 201L, 821L, 850L, 1219L) */ (99.8f) , (var_1_16)))) / (/* 352L, 186L, 204L, 824L, 853L, 1222L) */ (max (/* 352L, 186L, 204L, 824L, 853L, 1222L) */ (255.6f) , (var_1_13)))))))) {
		} else {
		}
	}
	if (/* 368L, 233L, 243L, 919L, 944L, 1238L) */ ((/* 369L, 229L, 244L, 920L, 945L, 1239L) */ ((var_1_2) || (/* 371L, 228L, 246L, 922L, 947L, 1241L) */ ((var_1_16) > (var_1_13))))) && (/* 374L, 232L, 249L, 925L, 950L, 1244L) */ ((var_1_3) < (var_1_8))))) {
		if (/* 378L, 256L, 261L, 929L, 954L, 1248L) */ ((/* 379L, 254L, 262L, 930L, 955L, 1249L) */ (- (var_1_8))) > (var_1_5))) {
		}
	} else {
	}
	return /* 396L) */ ((
	/* 395L) */ ((
		/* 394L) */ ((
			/* 393L) */ ((
				/* 392L) */ ((
					/* 391L) */ ((
						/* 248L, 18L, 311L, 326L, 1118L) */ ((
							var_1_2
						) ? (
							/* 250L, 10L, 313L, 328L, 1120L) */ ((
								var_1_1
							) == (
								/* 250L, 10L, 313L, 328L, 1120L) */ ((unsigned char) (
									/* 253L, 9L, 316L, 331L, 1123L) */ ((
										var_1_3
									) - (
										var_1_4
									))
								))
							))
						) : (
							/* 256L, 16L, 319L, 334L, 1126L) */ ((
								var_1_1
							) == (
								/* 256L, 16L, 319L, 334L, 1126L) */ ((unsigned char) (
									/* 259L, 15L, 322L, 337L, 1129L) */ ((
										var_1_4
									) + (
										var_1_5
									))
								))
							))
						))
					) && (
						/* 263L, 66L, 383L, 404L, 1133L) */ ((
							/* 264L, 34L, 46L, 384L, 405L, 1134L) */ ((
								/* 265L, 28L, 47L, 385L, 406L, 1135L) */ ((
									64
								) + (
									/* 267L, 27L, 49L, 387L, 408L, 1137L) */ ((
										var_1_5
									) / (
										var_1_3
									))
								))
							) != (
								/* 270L, 33L, 52L, 390L, 411L, 1140L) */ ((
									var_1_1
								) - (
									/* 272L, 32L, 54L, 392L, 413L, 1142L) */ ((
										var_1_4
									) + (
										var_1_7
									))
								))
							))
						) ? (
							/* 275L, 60L, 395L, 416L, 1145L) */ ((
								var_1_6
							) == (
								/* 275L, 60L, 395L, 416L, 1145L) */ ((unsigned char) (
									var_1_4
								))
							))
						) : (
							/* 279L, 64L, 399L, 420L, 1149L) */ ((
								var_1_6
							) == (
								/* 279L, 64L, 399L, 420L, 1149L) */ ((unsigned char) (
									128
								))
							))
						))
					))
				) && (
					/* 284L, 103L, 577L, 596L, 1154L) */ ((
						/* 285L, 77L, 85L, 578L, 597L, 1155L) */ ((
							/* 286L, 73L, 86L, 579L, 598L, 1156L) */ ((
								var_1_6
							) + (
								var_1_1
							))
						) >= (
							/* 289L, 76L, 89L, 582L, 601L, 1159L) */ ((
								var_1_3
							) - (
								var_1_5
							))
						))
					) ? (
						/* 292L, 97L, 585L, 604L, 1162L) */ ((
							var_1_8
						) == (
							/* 292L, 97L, 585L, 604L, 1162L) */ ((unsigned short int) (
								/* 295L, 96L, 588L, 607L, 1165L) */ (max (
									/* 295L, 96L, 588L, 607L, 1165L) */ (
										var_1_1
									) , (
										var_1_3
									)
								))
							))
						))
					) : (
						/* 298L, 101L, 591L, 610L, 1168L) */ ((
							var_1_8
						) == (
							/* 298L, 101L, 591L, 610L, 1168L) */ ((unsigned short int) (
								var_1_1
							))
						))
					))
				))
			) && (
				/* 304L, 148L, 664L, 688L, 1174L) */ ((
					/* 305L, 116L, 126L, 665L, 689L, 1175L) */ ((
						/* 306L, 114L, 127L, 666L, 690L, 1176L) */ ((
							/* 307L, 110L, 128L, 667L, 691L, 1177L) */ ((
								var_1_10
							) - (
								var_1_11
							))
						) - (
							/* 310L, 113L, 131L, 670L, 694L, 1180L) */ ((
								16
							) + (
								var_1_12
							))
						))
					) != (
						var_1_5
					))
				) ? (
					/* 314L, 142L, 674L, 698L, 1184L) */ ((
						var_1_9
					) == (
						/* 314L, 142L, 674L, 698L, 1184L) */ ((float) (
							/* 317L, 141L, 677L, 701L, 1187L) */ ((
								64.8f
							) - (
								/* 319L, 140L, 679L, 703L, 1189L) */ ((
									var_1_13
								) - (
									var_1_14
								))
							))
						))
					))
				) : (
					/* 322L, 146L, 682L, 706L, 1192L) */ ((
						var_1_9
					) == (
						/* 322L, 146L, 682L, 706L, 1192L) */ ((float) (
							var_1_13
						))
					))
				))
			))
		) && (
			/* 330L, 160L, 734L, 744L, 1200L) */ ((
				var_1_15
			) == (
				/* 330L, 160L, 734L, 744L, 1200L) */ ((float) (
					/* 333L, 159L, 737L, 747L, 1203L) */ ((
						var_1_14
					) + (
						var_1_16
					))
				))
			))
		))
	) && (
		/* 337L, 220L, 809L, 838L, 1207L) */ ((
			var_1_2
		) ? (
			/* 339L, 179L, 811L, 840L, 1209L) */ ((
				var_1_17
			) == (
				/* 339L, 179L, 811L, 840L, 1209L) */ ((signed short int) (
					/* 342L, 178L, 814L, 843L, 1212L) */ ((
						var_1_3
					) + (
						var_1_12
					))
				))
			))
		) : (
			/* 345L, 218L, 817L, 846L, 1215L) */ ((
				/* 346L, 188L, 198L, 818L, 847L, 1216L) */ ((
					var_1_14
				) == (
					/* 348L, 187L, 200L, 820L, 849L, 1218L) */ ((
						/* 349L, 183L, 201L, 821L, 850L, 1219L) */ (min (
							/* 349L, 183L, 201L, 821L, 850L, 1219L) */ (
								99.8f
							) , (
								var_1_16
							)
						))
					) / (
						/* 352L, 186L, 204L, 824L, 853L, 1222L) */ (max (
							/* 352L, 186L, 204L, 824L, 853L, 1222L) */ (
								255.6f
							) , (
								var_1_13
							)
						))
					))
				))
			) ? (
				/* 355L, 210L, 827L, 856L, 1225L) */ ((
					var_1_17
				) == (
					/* 355L, 210L, 827L, 856L, 1225L) */ ((signed short int) (
						var_1_4
					))
				))
			) : (
				/* 359L, 216L, 831L, 860L, 1229L) */ ((
					var_1_17
				) == (
					/* 359L, 216L, 831L, 860L, 1229L) */ ((signed short int) (
						/* 362L, 215L, 834L, 863L, 1232L) */ ((
							var_1_5
						) - (
							var_1_3
						))
					))
				))
			))
		))
	))
) && (
	/* 367L, 276L, 918L, 943L, 1237L) */ ((
		/* 368L, 233L, 243L, 919L, 944L, 1238L) */ ((
			/* 369L, 229L, 244L, 920L, 945L, 1239L) */ ((
				var_1_2
			) || (
				/* 371L, 228L, 246L, 922L, 947L, 1241L) */ ((
					var_1_16
				) > (
					var_1_13
				))
			))
		) && (
			/* 374L, 232L, 249L, 925L, 950L, 1244L) */ ((
				var_1_3
			) < (
				var_1_8
			))
		))
	) ? (
		/* 377L, 270L, 928L, 953L, 1247L) */ ((
			/* 378L, 256L, 261L, 929L, 954L, 1248L) */ ((
				/* 379L, 254L, 262L, 930L, 955L, 1249L) */ (- (
					var_1_8
				))
			) > (
				var_1_5
			))
		) ? (
			/* 382L, 268L, 933L, 958L, 1252L) */ ((
				var_1_18
			) == (
				/* 382L, 268L, 933L, 958L, 1252L) */ ((double) (
					var_1_20
				))
			))
		) : (
			1
		))
	) : (
		/* 386L, 274L, 937L, 962L, 1256L) */ ((
			var_1_18
		) == (
			/* 386L, 274L, 937L, 962L, 1256L) */ ((double) (
				1.000000075E7
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
