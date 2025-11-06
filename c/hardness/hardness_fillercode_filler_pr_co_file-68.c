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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch68Filler_PR_CO.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 1;
unsigned char var_1_2 = 10;
unsigned char var_1_3 = 25;
unsigned char var_1_4 = 16;
unsigned char var_1_5 = 0;
float var_1_7 = 0.5;
unsigned char var_1_9 = 1;
unsigned short int var_1_10 = 2;
unsigned short int var_1_11 = 128;
unsigned char var_1_12 = 0;
float var_1_14 = 16.5;
double var_1_15 = 8.9;
double var_1_16 = 31.996;
double var_1_17 = 15.5;
double var_1_18 = 8.5;
float var_1_19 = 0.8;
signed short int var_1_20 = 4;
float var_1_21 = 50.6;
float var_1_22 = 63.8;
unsigned char var_1_23 = 1;
signed char var_1_24 = 1;
signed char var_1_25 = 5;
signed char var_1_26 = 4;
signed char var_1_27 = 1;
unsigned long int var_1_28 = 2;
unsigned long int var_1_29 = 1;
unsigned char var_1_30 = 1;
unsigned char var_1_31 = 0;
unsigned char var_1_33 = 0;
double var_1_34 = 4.65;
double var_1_36 = 9999999999.1;
double var_1_37 = 5.5;
unsigned short int var_1_38 = 16;
unsigned short int var_1_39 = 100;
signed long int var_1_40 = 32;
signed long int var_1_41 = 0;
signed long int var_1_42 = 32;
signed char var_1_43 = 32;
signed char var_1_44 = 32;
signed short int var_1_45 = 100;
unsigned char var_1_46 = 1;
signed char var_1_47 = -25;
unsigned char var_1_48 = 0;
float var_1_49 = 16.5;
unsigned short int var_1_50 = 4;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_28 = 2;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch68Filler_PR_CO
	/* 1097L, 142L, 702L, 716L) */ if (/* 1098L, 123L, 124L, 703L, 717L) */ ((/* 1099L, 119L, 125L, 704L, 718L) */ ((var_1_15) - (var_1_16))) == (/* 1102L, 122L, 128L, 707L, 721L) */ ((var_1_17) - (var_1_18))))) {
		/* 1105L, 141L, 710L, 724L) */ var_1_14 = (
			var_1_19
		);
	}


	// From: CodeObject2
	/* 247L, 29L) */ if (/* 248L, 16L, 17L) */ (! (var_1_31))) {
		/* 250L, 28L) */ var_1_34 = (
			/* 253L, 27L) */ ((
				var_1_36
			) - (
				/* 255L, 26L) */ (max (
					/* 255L, 26L) */ (
						7.7
					) , (
						var_1_37
					)
				))
			))
		);
	}


	// From: CodeObject4
	/* 263L, 137L) */ if (/* 264L, 45L, 46L) */ ((/* 265L, 43L, 47L) */ (max (/* 265L, 43L, 47L) */ (var_1_37) , (var_1_36)))) > (var_1_34))) {
		/* 269L, 135L) */ if (/* 270L, 58L, 59L) */ ((var_1_39) > (var_1_28))) {
			/* 273L, 72L) */ var_1_40 = (
				/* 276L, 71L) */ ((
					100000000
				) + (
					/* 278L, 70L) */ ((
						var_1_39
					) - (
						var_1_28
					))
				))
			);
		} else {
			/* 281L, 133L) */ if (/* 282L, 82L, 83L) */ ((/* 283L, 75L, 84L) */ (min (/* 283L, 75L, 84L) */ (var_1_39) , (var_1_28)))) > (/* 286L, 81L, 87L) */ ((var_1_41) - (/* 288L, 80L, 89L) */ (min (/* 288L, 80L, 89L) */ (var_1_42) , (10)))))))) {
				/* 291L, 127L) */ if (/* 292L, 106L, 107L) */ ((/* 293L, 104L, 108L) */ ((/* 294L, 102L, 109L) */ (abs (var_1_43))) - (var_1_44))) < (2))) {
					/* 298L, 126L) */ var_1_40 = (
						/* 301L, 125L) */ (max (
							/* 301L, 125L) */ (
								var_1_44
							) , (
								/* 303L, 124L) */ (max (
									/* 303L, 124L) */ (
										var_1_43
									) , (
										var_1_28
									)
								))
							)
						))
					);
				}
			} else {
				/* 306L, 132L) */ var_1_40 = (
					var_1_43
				);
			}
		}
	}


	// From: Req4Batch68Filler_PR_CO
	/* 1126L, 210L, 845L, 857L) */ if (/* 1127L, 192L, 193L, 846L, 858L) */ (! (/* 1128L, 191L, 194L, 847L, 859L) */ ((var_1_7) > (var_1_14))))) {
		/* 1131L, 208L, 850L, 862L) */ if (var_1_12) {
			/* 1133L, 207L, 852L, 864L) */ var_1_23 = (
				var_1_5
			);
		}
	}


	// From: CodeObject7
	/* 343L, 228L) */ if (/* 344L, 205L, 206L) */ ((/* 345L, 201L, 207L) */ ((var_1_43) ^ (/* 347L, 200L, 209L) */ ((var_1_47) | (var_1_28))))) < (/* 350L, 204L, 212L) */ ((var_1_42) ^ (var_1_41))))) {
		/* 353L, 227L) */ var_1_49 = (
			var_1_36
		);
	}


	// From: CodeObject8
	/* 358L, 235L) */ var_1_50 = (
		var_1_39
	);


	// From: Req5Batch68Filler_PR_CO
	/* 1139L, 238L, 894L, 910L) */ if (/* 1140L, 218L, 219L, 895L, 911L) */ ((var_1_23) || (var_1_12))) {
		/* 1143L, 236L, 898L, 914L) */ if (var_1_9) {
			/* 1145L, 235L, 900L, 916L) */ var_1_24 = (
				/* 1148L, 234L, 903L, 919L) */ ((
					var_1_25
				) - (
					/* 1150L, 233L, 905L, 921L) */ ((
						var_1_26
					) + (
						var_1_27
					))
				))
			);
		}
	}


	// From: CodeObject1
	/* 239L, 9L) */ var_1_30 = (
		/* 242L, 8L) */ ((
			var_1_31
		) || (
			/* 244L, 7L) */ ((
				var_1_23
			) && (
				var_1_33
			))
		))
	);


	// From: CodeObject3
	/* 259L, 36L) */ var_1_38 = (
		var_1_39
	);


	// From: Req6Batch68Filler_PR_CO
	/* 1154L, 273L, 957L, 976L) */ if (/* 1155L, 248L, 249L, 958L, 977L) */ ((var_1_14) > (var_1_22))) {
		/* 1158L, 271L, 961L, 980L) */ if (/* 1159L, 256L, 257L, 962L, 981L) */ (! (var_1_23))) {
			/* 1161L, 266L, 964L, 983L) */ var_1_28 = (
				/* 1164L, 265L, 967L, 986L) */ ((
					var_1_27
				) + (
					last_1_var_1_28
				))
			);
		} else {
			/* 1168L, 270L, 971L, 990L) */ var_1_28 = (
				var_1_29
			);
		}
	}


	// From: Req1Batch68Filler_PR_CO
	unsigned char stepLocal_2 = var_1_2;
	signed long int stepLocal_1 = /* 1037L, 5L, 9L, 492L, 545L) */ ((var_1_3) ^ (var_1_4));
	unsigned char stepLocal_0 = var_1_3;
	/* 1090L, 111L, 489L, 542L) */ if (/* 1045L, 6L, 7L, 490L, 543L) */ ((var_1_2) <= (stepLocal_1))) {
		/* 1050L, 21L, 495L, 548L) */ var_1_1 = (
			/* 1049L, 20L, 498L, 551L) */ (! (
				var_1_5
			))
		);
	} else {
		/* 1089L, 109L, 500L, 553L) */ if (/* 1056L, 32L, 33L, 501L, 554L) */ ((/* 1054L, 30L, 34L, 502L, 555L) */ ((var_1_14) + (/* 1053L, 29L, 36L, 504L, 557L) */ (- (var_1_14))))) >= (var_1_14))) {
			/* 1084L, 103L, 507L, 560L) */ if (/* 1062L, 55L, 56L, 508L, 561L) */ ((/* 1061L, 53L, 57L, 509L, 562L) */ ((var_1_3) / (/* 1060L, 52L, 59L, 511L, 564L) */ (min (/* 1060L, 52L, 59L, 511L, 564L) */ (var_1_10) , (var_1_11)))))) > (stepLocal_2))) {
				/* 1070L, 77L, 515L, 568L) */ var_1_1 = (
					/* 1069L, 76L, 518L, 571L) */ ((
						var_1_9
					) || (
						/* 1068L, 75L, 520L, 573L) */ ((
							var_1_5
						) || (
							var_1_12
						))
					))
				);
			} else {
				/* 1083L, 101L, 523L, 576L) */ if (/* 1074L, 82L, 83L, 524L, 577L) */ ((/* 1073L, 80L, 84L, 525L, 578L) */ ((var_1_24) * (var_1_4))) < (stepLocal_0))) {
					/* 1078L, 96L, 529L, 582L) */ var_1_1 = (
						var_1_12
					);
				} else {
					/* 1082L, 100L, 533L, 586L) */ var_1_1 = (
						var_1_9
					);
				}
			}
		} else {
			/* 1088L, 108L, 537L, 590L) */ var_1_1 = (
				var_1_12
			);
		}
	}


	// From: Req3Batch68Filler_PR_CO
	/* 1111L, 181L, 758L, 774L) */ if (/* 1112L, 158L, 159L, 759L, 775L) */ ((/* 1113L, 156L, 160L, 760L, 776L) */ ((/* 1114L, 152L, 161L, 761L, 777L) */ (min (/* 1114L, 152L, 161L, 761L, 777L) */ (var_1_17) , (var_1_16)))) - (/* 1117L, 155L, 164L, 764L, 780L) */ ((var_1_21) + (var_1_22))))) >= (63.6))) {
		/* 1121L, 180L, 768L, 784L) */ var_1_20 = (
			var_1_28
		);
	}


	// From: CodeObject5
	/* 311L, 144L) */ var_1_45 = (
		var_1_43
	);


	// From: CodeObject6
	/* 315L, 193L) */ if (/* 316L, 151L, 152L) */ ((var_1_44) >= (var_1_28))) {
		/* 319L, 181L) */ if (/* 320L, 162L, 163L) */ ((/* 321L, 160L, 164L) */ ((var_1_36) > (var_1_37))) || (var_1_31))) {
			/* 325L, 180L) */ var_1_46 = (
				/* 328L, 179L) */ ((
					/* 329L, 177L) */ ((
						var_1_23
					) && (
						var_1_33
					))
				) || (
					var_1_31
				))
			);
		}
	} else {
		/* 333L, 192L) */ var_1_46 = (
			/* 336L, 191L) */ ((
				/* 337L, 189L) */ ((
					var_1_43
				) >= (
					/* 339L, 188L) */ ((
						var_1_28
					) % (
						var_1_47
					))
				))
			) || (
				var_1_48
			))
		);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 255);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 255);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 255);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 0);
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= -922337.2036854776000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854776000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 1);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 65535);
	assume_abort_if_not(var_1_10 != 0);
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 65535);
	assume_abort_if_not(var_1_11 != 0);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 1);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854776000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854776000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= -922337.2036854766000e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854766000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427388000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427388000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= -1);
	assume_abort_if_not(var_1_25 <= 126);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 63);
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 63);
	var_1_29 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 4294967294);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 0);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 0);
	var_1_36 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854766000e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854766000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 65534);
	var_1_41 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 2147483647);
	var_1_42 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 2147483647);
	var_1_43 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_43 >= -127);
	assume_abort_if_not(var_1_43 <= 127);
	var_1_44 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 127);
	var_1_47 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_47 >= -128);
	assume_abort_if_not(var_1_47 <= 127);
	assume_abort_if_not(var_1_47 != 0);
	var_1_48 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_48 >= 1);
	assume_abort_if_not(var_1_48 <= 1);
}



void updateLastVariables(void) {
	last_1_var_1_28 = var_1_28;
}

int property(void) {
	if (/* 363L, 6L, 12L, 596L, 649L, 1174L) */ ((var_1_2) <= (/* 365L, 5L, 14L, 598L, 651L, 1176L) */ ((var_1_3) ^ (var_1_4))))) {
	} else {
		if (/* 374L, 32L, 39L, 607L, 660L, 1185L) */ ((/* 375L, 30L, 40L, 608L, 661L, 1186L) */ ((var_1_14) + (/* 377L, 29L, 42L, 610L, 663L, 1188L) */ (- (var_1_14))))) >= (var_1_14))) {
			if (/* 381L, 55L, 63L, 614L, 667L, 1192L) */ ((/* 382L, 53L, 64L, 615L, 668L, 1193L) */ ((var_1_3) / (/* 384L, 52L, 66L, 617L, 670L, 1195L) */ (min (/* 384L, 52L, 66L, 617L, 670L, 1195L) */ (var_1_10) , (var_1_11)))))) > (var_1_2))) {
			} else {
				if (/* 397L, 82L, 88L, 630L, 683L, 1208L) */ ((/* 398L, 80L, 89L, 631L, 684L, 1209L) */ ((var_1_24) * (var_1_4))) < (var_1_3))) {
				} else {
				}
			}
		} else {
		}
	}
	if (/* 417L, 123L, 131L, 731L, 745L, 1228L) */ ((/* 418L, 119L, 132L, 732L, 746L, 1229L) */ ((var_1_15) - (var_1_16))) == (/* 421L, 122L, 135L, 735L, 749L, 1232L) */ ((var_1_17) - (var_1_18))))) {
	}
	if (/* 431L, 158L, 168L, 791L, 807L, 1242L) */ ((/* 432L, 156L, 169L, 792L, 808L, 1243L) */ ((/* 433L, 152L, 170L, 793L, 809L, 1244L) */ (min (/* 433L, 152L, 170L, 793L, 809L, 1244L) */ (var_1_17) , (var_1_16)))) - (/* 436L, 155L, 173L, 796L, 812L, 1247L) */ ((var_1_21) + (var_1_22))))) >= (63.6))) {
	}
	if (/* 446L, 192L, 197L, 870L, 882L, 1257L) */ (! (/* 447L, 191L, 198L, 871L, 883L, 1258L) */ ((var_1_7) > (var_1_14))))) {
		if (var_1_12) {
		}
	}
	if (/* 459L, 218L, 222L, 927L, 943L, 1270L) */ ((var_1_23) || (var_1_12))) {
		if (var_1_9) {
		}
	}
	if (/* 474L, 248L, 252L, 996L, 1015L, 1285L) */ ((var_1_14) > (var_1_22))) {
		if (/* 478L, 256L, 259L, 1000L, 1019L, 1289L) */ (! (var_1_23))) {
		} else {
		}
	}
	return /* 496L) */ ((
	/* 495L) */ ((
		/* 494L) */ ((
			/* 493L) */ ((
				/* 492L) */ ((
					/* 362L, 112L, 595L, 648L, 1173L) */ ((
						/* 363L, 6L, 12L, 596L, 649L, 1174L) */ ((
							var_1_2
						) <= (
							/* 365L, 5L, 14L, 598L, 651L, 1176L) */ ((
								var_1_3
							) ^ (
								var_1_4
							))
						))
					) ? (
						/* 368L, 21L, 601L, 654L, 1179L) */ ((
							var_1_1
						) == (
							/* 368L, 21L, 601L, 654L, 1179L) */ ((unsigned char) (
								/* 371L, 20L, 604L, 657L, 1182L) */ (! (
									var_1_5
								))
							))
						))
					) : (
						/* 373L, 110L, 606L, 659L, 1184L) */ ((
							/* 374L, 32L, 39L, 607L, 660L, 1185L) */ ((
								/* 375L, 30L, 40L, 608L, 661L, 1186L) */ ((
									var_1_14
								) + (
									/* 377L, 29L, 42L, 610L, 663L, 1188L) */ (- (
										var_1_14
									))
								))
							) >= (
								var_1_14
							))
						) ? (
							/* 380L, 104L, 613L, 666L, 1191L) */ ((
								/* 381L, 55L, 63L, 614L, 667L, 1192L) */ ((
									/* 382L, 53L, 64L, 615L, 668L, 1193L) */ ((
										var_1_3
									) / (
										/* 384L, 52L, 66L, 617L, 670L, 1195L) */ (min (
											/* 384L, 52L, 66L, 617L, 670L, 1195L) */ (
												var_1_10
											) , (
												var_1_11
											)
										))
									))
								) > (
									var_1_2
								))
							) ? (
								/* 388L, 77L, 621L, 674L, 1199L) */ ((
									var_1_1
								) == (
									/* 388L, 77L, 621L, 674L, 1199L) */ ((unsigned char) (
										/* 391L, 76L, 624L, 677L, 1202L) */ ((
											var_1_9
										) || (
											/* 393L, 75L, 626L, 679L, 1204L) */ ((
												var_1_5
											) || (
												var_1_12
											))
										))
									))
								))
							) : (
								/* 396L, 102L, 629L, 682L, 1207L) */ ((
									/* 397L, 82L, 88L, 630L, 683L, 1208L) */ ((
										/* 398L, 80L, 89L, 631L, 684L, 1209L) */ ((
											var_1_24
										) * (
											var_1_4
										))
									) < (
										var_1_3
									))
								) ? (
									/* 402L, 96L, 635L, 688L, 1213L) */ ((
										var_1_1
									) == (
										/* 402L, 96L, 635L, 688L, 1213L) */ ((unsigned char) (
											var_1_12
										))
									))
								) : (
									/* 406L, 100L, 639L, 692L, 1217L) */ ((
										var_1_1
									) == (
										/* 406L, 100L, 639L, 692L, 1217L) */ ((unsigned char) (
											var_1_9
										))
									))
								))
							))
						) : (
							/* 410L, 108L, 643L, 696L, 1221L) */ ((
								var_1_1
							) == (
								/* 410L, 108L, 643L, 696L, 1221L) */ ((unsigned char) (
									var_1_12
								))
							))
						))
					))
				) && (
					/* 416L, 143L, 730L, 744L, 1227L) */ ((
						/* 417L, 123L, 131L, 731L, 745L, 1228L) */ ((
							/* 418L, 119L, 132L, 732L, 746L, 1229L) */ ((
								var_1_15
							) - (
								var_1_16
							))
						) == (
							/* 421L, 122L, 135L, 735L, 749L, 1232L) */ ((
								var_1_17
							) - (
								var_1_18
							))
						))
					) ? (
						/* 424L, 141L, 738L, 752L, 1235L) */ ((
							var_1_14
						) == (
							/* 424L, 141L, 738L, 752L, 1235L) */ ((float) (
								var_1_19
							))
						))
					) : (
						1
					))
				))
			) && (
				/* 430L, 182L, 790L, 806L, 1241L) */ ((
					/* 431L, 158L, 168L, 791L, 807L, 1242L) */ ((
						/* 432L, 156L, 169L, 792L, 808L, 1243L) */ ((
							/* 433L, 152L, 170L, 793L, 809L, 1244L) */ (min (
								/* 433L, 152L, 170L, 793L, 809L, 1244L) */ (
									var_1_17
								) , (
									var_1_16
								)
							))
						) - (
							/* 436L, 155L, 173L, 796L, 812L, 1247L) */ ((
								var_1_21
							) + (
								var_1_22
							))
						))
					) >= (
						63.6
					))
				) ? (
					/* 440L, 180L, 800L, 816L, 1251L) */ ((
						var_1_20
					) == (
						/* 440L, 180L, 800L, 816L, 1251L) */ ((signed short int) (
							var_1_28
						))
					))
				) : (
					1
				))
			))
		) && (
			/* 445L, 211L, 869L, 881L, 1256L) */ ((
				/* 446L, 192L, 197L, 870L, 882L, 1257L) */ (! (
					/* 447L, 191L, 198L, 871L, 883L, 1258L) */ ((
						var_1_7
					) > (
						var_1_14
					))
				))
			) ? (
				/* 450L, 209L, 874L, 886L, 1261L) */ ((
					var_1_12
				) ? (
					/* 452L, 207L, 876L, 888L, 1263L) */ ((
						var_1_23
					) == (
						/* 452L, 207L, 876L, 888L, 1263L) */ ((unsigned char) (
							var_1_5
						))
					))
				) : (
					1
				))
			) : (
				1
			))
		))
	) && (
		/* 458L, 239L, 926L, 942L, 1269L) */ ((
			/* 459L, 218L, 222L, 927L, 943L, 1270L) */ ((
				var_1_23
			) || (
				var_1_12
			))
		) ? (
			/* 462L, 237L, 930L, 946L, 1273L) */ ((
				var_1_9
			) ? (
				/* 464L, 235L, 932L, 948L, 1275L) */ ((
					var_1_24
				) == (
					/* 464L, 235L, 932L, 948L, 1275L) */ ((signed char) (
						/* 467L, 234L, 935L, 951L, 1278L) */ ((
							var_1_25
						) - (
							/* 469L, 233L, 937L, 953L, 1280L) */ ((
								var_1_26
							) + (
								var_1_27
							))
						))
					))
				))
			) : (
				1
			))
		) : (
			1
		))
	))
) && (
	/* 473L, 274L, 995L, 1014L, 1284L) */ ((
		/* 474L, 248L, 252L, 996L, 1015L, 1285L) */ ((
			var_1_14
		) > (
			var_1_22
		))
	) ? (
		/* 477L, 272L, 999L, 1018L, 1288L) */ ((
			/* 478L, 256L, 259L, 1000L, 1019L, 1289L) */ (! (
				var_1_23
			))
		) ? (
			/* 480L, 266L, 1002L, 1021L, 1291L) */ ((
				var_1_28
			) == (
				/* 480L, 266L, 1002L, 1021L, 1291L) */ ((unsigned long int) (
					/* 483L, 265L, 1005L, 1024L, 1294L) */ ((
						var_1_27
					) + (
						last_1_var_1_28
					))
				))
			))
		) : (
			/* 487L, 270L, 1009L, 1028L, 1298L) */ ((
				var_1_28
			) == (
				/* 487L, 270L, 1009L, 1028L, 1298L) */ ((unsigned long int) (
					var_1_29
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
