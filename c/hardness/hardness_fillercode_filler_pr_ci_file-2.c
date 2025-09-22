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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch2Filler_PR_CI.c", 13, "reach_error"); }
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
float var_1_1 = 3.95;
unsigned char var_1_2 = 50;
unsigned char var_1_3 = 10;
float var_1_4 = 9999999.8;
float var_1_5 = 8.6;
unsigned long int var_1_6 = 10000;
double var_1_8 = 64.5;
float var_1_10 = 255.25;
float var_1_11 = 7.5;
float var_1_12 = 0.0;
float var_1_13 = 64.8;
double var_1_14 = 127.75;
signed char var_1_15 = 8;
signed char var_1_16 = 32;
unsigned char var_1_17 = 0;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 0;
signed short int var_1_20 = -32;
float var_1_21 = 256.5;
float var_1_24 = 1.375;
float var_1_25 = 10.25;
signed char var_1_26 = -64;
signed long int var_1_27 = -1;
signed long int var_1_28 = 5;
signed char var_1_29 = -10;
unsigned long int var_1_30 = 8;
double var_1_31 = 499.75;
double var_1_33 = 25.1;
double var_1_34 = 0.0;
double var_1_35 = 3.15;
double var_1_36 = 16.5;
unsigned char var_1_37 = 8;
unsigned char var_1_38 = 1;
float var_1_39 = 255.8;
signed long int var_1_40 = -1;
signed short int var_1_41 = 28397;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_6 = 10000;
float last_1_var_1_10 = 255.25;
double last_1_var_1_14 = 127.75;
unsigned char last_1_var_1_17 = 0;
signed short int last_1_var_1_20 = -32;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch2Filler_PR_CI
	unsigned char stepLocal_0 = last_1_var_1_17;
	/* 97L, 109L, 461L, 496L, 977L, 1137L) */ if (last_1_var_1_17) {
		/* 92L, 103L, 463L, 498L, 972L, 1132L) */ if (/* 73L, 55L, 56L, 464L, 499L, 952L, 1114L) */ ((/* 69L, 51L, 57L, 465L, 500L, 948L, 1110L) */ (max (/* 69L, 51L, 57L, 465L, 500L, 948L, 1110L) */ (last_1_var_1_14) , (/* 68L, 50L, 59L, 467L, 502L, 947L, 1109L) */ (max (/* 68L, 50L, 59L, 467L, 502L, 947L, 1109L) */ (var_1_5) , (199.78))))))) != (/* 72L, 54L, 62L, 470L, 505L, 951L, 1113L) */ ((var_1_4) - (var_1_8))))) {
			/* 87L, 97L, 473L, 508L, 967L, 1127L) */ if (/* 78L, 78L, 79L, 474L, 509L, 958L, 1118L) */ ((/* 76L, 76L, 80L, 475L, 510L, 955L, 1117L) */ ((var_1_2) != (var_1_3))) || (stepLocal_0))) {
				/* 82L, 92L, 479L, 514L, 962L, 1122L) */ var_1_6 = (
					var_1_2
				);
			} else {
				/* 86L, 96L, 483L, 518L, 966L, 1126L) */ var_1_6 = (
					5u
				);
			}
		} else {
			/* 91L, 102L, 487L, 522L, 971L, 1131L) */ var_1_6 = (
				var_1_2
			);
		}
	} else {
		/* 96L, 108L, 491L, 526L, 976L, 1136L) */ var_1_6 = (
			var_1_2
		);
	}


	// From: CodeObject2
	/* 448L, 210L) */ if (/* 449L, 165L, 166L) */ ((/* 450L, 163L, 167L) */ ((/* 451L, 161L, 168L) */ ((var_1_13) + (127.75f))) * (var_1_8))) < (var_1_13))) {
		/* 456L, 208L) */ if (/* 457L, 187L, 188L) */ ((/* 458L, 181L, 189L) */ (abs (var_1_20))) <= (/* 460L, 186L, 191L) */ ((/* 461L, 184L, 192L) */ (min (/* 461L, 184L, 192L) */ (var_1_2) , (var_1_27)))) & (var_1_28))))) {
			/* 465L, 207L) */ var_1_26 = (
				var_1_29
			);
		}
	}


	// From: Req4Batch2Filler_PR_CI
	/* 1166L, 183L, 698L, 712L) */ if (/* 1167L, 164L, 165L, 699L, 713L) */ ((/* 1168L, 162L, 166L, 700L, 714L) */ ((var_1_15) - (/* 1170L, 161L, 168L, 702L, 716L) */ (min (/* 1170L, 161L, 168L, 702L, 716L) */ (0) , (var_1_16)))))) > (var_1_6))) {
		/* 1174L, 182L, 706L, 720L) */ var_1_14 = (
			var_1_12
		);
	}


	// From: Req5Batch2Filler_PR_CI
	/* 26L, 243L, 754L, 780L, 1043L, 1180L) */ if (/* 6L, 195L, 196L, 755L, 781L, 1023L, 1181L) */ ((last_1_var_1_6) <= (/* 5L, 194L, 198L, 757L, 783L, 1022L, 1184L) */ ((var_1_16) * (last_1_var_1_20))))) {
		/* 21L, 237L, 760L, 786L, 1038L, 1188L) */ if (/* 12L, 210L, 211L, 761L, 787L, 1029L, 1189L) */ ((/* 10L, 208L, 212L, 762L, 788L, 1027L, 1190L) */ ((var_1_5) + (last_1_var_1_10))) <= (127.025f))) {
			/* 16L, 224L, 766L, 792L, 1033L, 1195L) */ var_1_17 = (
				var_1_18
			);
		} else {
			/* 20L, 236L, 770L, 796L, 1037L, 1199L) */ var_1_17 = (
				var_1_19
			);
		}
	} else {
		/* 25L, 242L, 774L, 800L, 1042L, 1203L) */ var_1_17 = (
			var_1_19
		);
	}


	// From: CodeObject4
	/* 495L, 299L) */ if (/* 496L, 247L, 248L) */ ((var_1_13) == (var_1_4))) {
		/* 499L, 289L) */ if (/* 500L, 263L, 264L) */ ((var_1_15) >= (var_1_29))) {
			/* 503L, 287L) */ if (/* 504L, 271L, 272L) */ (! (var_1_17))) {
				/* 506L, 286L) */ var_1_31 = (
					/* 509L, 285L) */ ((
						var_1_33
					) - (
						/* 511L, 284L) */ (max (
							/* 511L, 284L) */ (
								var_1_36
							) , (
								var_1_35
							)
						))
					))
				);
			}
		}
	} else {
		/* 514L, 298L) */ var_1_31 = (
			/* 517L, 297L) */ (abs (
				/* 518L, 296L) */ (abs (
					/* 519L, 295L) */ ((
						var_1_34
					) - (
						9.5
					))
				))
			))
		);
	}


	// From: Req6Batch2Filler_PR_CI
	unsigned char stepLocal_1 = /* 1209L, 269L, 273L, 866L, 887L) */ ((var_1_19) && (var_1_17));
	/* 1229L, 291L, 857L, 878L) */ if (/* 1217L, 255L, 256L, 858L, 879L) */ ((-0.25) < (/* 1216L, 254L, 258L, 860L, 881L) */ ((256.4) - (var_1_5))))) {
		/* 1224L, 285L, 863L, 884L) */ if (/* 1219L, 270L, 271L, 864L, 885L) */ ((var_1_17) && (stepLocal_1))) {
			/* 1223L, 284L, 869L, 890L) */ var_1_20 = (
				var_1_15
			);
		}
	} else {
		/* 1228L, 290L, 873L, 894L) */ var_1_20 = (
			1
		);
	}


	// From: CodeObject7
	/* 541L, 405L) */ if (/* 542L, 358L, 359L) */ ((var_1_36) != (var_1_33))) {
		/* 545L, 399L) */ if (/* 546L, 374L, 375L) */ ((/* 547L, 370L, 376L) */ ((/* 548L, 367L, 377L) */ ((var_1_41) - (var_1_38))) - (/* 551L, 369L, 380L) */ (abs (var_1_16))))) <= (/* 553L, 373L, 382L) */ ((var_1_6) * (var_1_20))))) {
			/* 556L, 398L) */ var_1_40 = (
				var_1_38
			);
		}
	} else {
		/* 560L, 404L) */ var_1_40 = (
			var_1_29
		);
	}


	// From: Req1Batch2Filler_PR_CI
	/* 1076L, 36L, 296L, 320L) */ if (/* 1077L, 4L, 5L, 297L, 321L) */ ((var_1_6) <= (var_1_20))) {
		/* 1080L, 30L, 300L, 324L) */ if (/* 1081L, 13L, 14L, 301L, 325L) */ ((var_1_20) > (var_1_6))) {
			/* 1084L, 25L, 304L, 328L) */ var_1_1 = (
				/* 1087L, 24L, 307L, 331L) */ ((
					var_1_4
				) - (
					var_1_5
				))
			);
		} else {
			/* 1090L, 29L, 310L, 334L) */ var_1_1 = (
				var_1_5
			);
		}
	} else {
		/* 1094L, 35L, 314L, 338L) */ var_1_1 = (
			var_1_4
		);
	}


	// From: CodeObject1
	/* 417L, 155L) */ if (/* 418L, 142L, 143L) */ ((var_1_6) >= (var_1_20))) {
		/* 421L, 154L) */ var_1_21 = (
			/* 424L, 153L) */ ((
				var_1_24
			) + (
				var_1_25
			))
		);
	}


	// From: CodeObject3
	/* 482L, 241L) */ if (/* 483L, 217L, 218L) */ ((var_1_29) < (/* 485L, 216L, 220L) */ (~ (var_1_2))))) {
		/* 487L, 239L) */ if (/* 488L, 228L, 229L) */ ((var_1_15) < (var_1_20))) {
			/* 491L, 238L) */ var_1_30 = (
				var_1_20
			);
		}
	}


	// From: CodeObject5
	/* 523L, 319L) */ if (/* 524L, 306L, 307L) */ (! (/* 525L, 305L, 308L) */ ((var_1_13) <= (var_1_4))))) {
		/* 528L, 318L) */ var_1_37 = (
			var_1_38
		);
	}


	// From: CodeObject6
	/* 532L, 352L) */ if (/* 533L, 339L, 340L) */ ((128) != (/* 535L, 338L, 342L) */ (~ (var_1_6))))) {
		/* 537L, 351L) */ var_1_39 = (
			var_1_33
		);
	}


	// From: Req3Batch2Filler_PR_CI
	/* 1142L, 150L, 602L, 626L) */ if (/* 1143L, 121L, 122L, 603L, 627L) */ ((/* 1144L, 117L, 123L, 604L, 628L) */ ((var_1_5) / (var_1_11))) >= (/* 1147L, 120L, 126L, 607L, 631L) */ ((var_1_8) - (var_1_4))))) {
		/* 1150L, 145L, 610L, 634L) */ var_1_10 = (
			/* 1153L, 144L, 613L, 637L) */ (min (
				/* 1153L, 144L, 613L, 637L) */ (
					/* 1154L, 142L, 614L, 638L) */ ((
						var_1_5
					) - (
						/* 1156L, 141L, 616L, 640L) */ ((
							var_1_12
						) - (
							var_1_13
						))
					))
				) , (
					var_1_4
				)
			))
		);
	} else {
		/* 1160L, 149L, 620L, 644L) */ var_1_10 = (
			4.2f
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
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= -922337.2036854776000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
	assume_abort_if_not(var_1_11 != 0.0F);
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= 4611686.018427383000e+12F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427383000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= -1);
	assume_abort_if_not(var_1_15 <= 127);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 127);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 0);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 0);
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= -461168.6018427383000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427383000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_25 >= -461168.6018427383000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 4611686.018427383000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_27 >= -2147483648);
	assume_abort_if_not(var_1_27 <= 2147483647);
	var_1_28 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_28 >= -2147483648);
	assume_abort_if_not(var_1_28 <= 2147483647);
	var_1_29 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_29 >= -127);
	assume_abort_if_not(var_1_29 <= 126);
	var_1_33 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_33 >= 0.0F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854766000e+12F && var_1_33 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_34 >= 6917529.027641074000e+12F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854766000e+12F && var_1_34 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 2305843.009213691400e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854766000e+12F && var_1_36 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 254);
	var_1_41 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_41 >= 16383);
	assume_abort_if_not(var_1_41 <= 32767);
}



void updateLastVariables(void) {
	last_1_var_1_6 = var_1_6;
	last_1_var_1_10 = var_1_10;
	last_1_var_1_14 = var_1_14;
	last_1_var_1_17 = var_1_17;
	last_1_var_1_20 = var_1_20;
}

int property(void) {
	if (/* 566L, 4L, 8L, 345L, 369L, 1235L) */ ((var_1_6) <= (var_1_20))) {
		if (/* 570L, 13L, 17L, 349L, 373L, 1239L) */ ((var_1_20) > (var_1_6))) {
		} else {
		}
	} else {
	}
	if (last_1_var_1_17) {
		if (/* 592L, 55L, 65L, 534L, 569L, 990L, 1261L, 111L) */ ((/* 593L, 51L, 66L, 535L, 570L, 986L, 1262L, 107L) */ (max (/* 593L, 51L, 66L, 535L, 570L, 986L, 1262L, 107L) */ (last_1_var_1_14) , (/* 596L, 50L, 68L, 537L, 572L, 985L, 1265L, 106L) */ (max (/* 596L, 50L, 68L, 537L, 572L, 985L, 1265L, 106L) */ (var_1_5) , (199.78))))))) != (/* 599L, 54L, 71L, 540L, 575L, 989L, 1268L, 110L) */ ((var_1_4) - (var_1_8))))) {
			if (/* 603L, 78L, 84L, 544L, 579L, 996L, 1272L, 117L) */ ((/* 604L, 76L, 85L, 545L, 580L, 993L, 1273L, 114L) */ ((var_1_2) != (var_1_3))) || (last_1_var_1_17))) {
			} else {
			}
		} else {
		}
	} else {
	}
	if (/* 628L, 121L, 129L, 651L, 675L, 1297L) */ ((/* 629L, 117L, 130L, 652L, 676L, 1298L) */ ((var_1_5) / (var_1_11))) >= (/* 632L, 120L, 133L, 655L, 679L, 1301L) */ ((var_1_8) - (var_1_4))))) {
	} else {
	}
	if (/* 652L, 164L, 172L, 727L, 741L, 1321L) */ ((/* 653L, 162L, 173L, 728L, 742L, 1322L) */ ((var_1_15) - (/* 655L, 161L, 175L, 730L, 744L, 1324L) */ (min (/* 655L, 161L, 175L, 730L, 744L, 1324L) */ (0) , (var_1_16)))))) > (var_1_6))) {
	}
	if (/* 666L, 195L, 201L, 807L, 833L, 1052L, 1335L, 35L) */ ((last_1_var_1_6) <= (/* 669L, 194L, 203L, 809L, 835L, 1051L, 1338L, 34L) */ ((var_1_16) * (last_1_var_1_20))))) {
		if (/* 674L, 210L, 216L, 813L, 839L, 1058L, 1343L, 41L) */ ((/* 675L, 208L, 217L, 814L, 840L, 1056L, 1344L, 39L) */ ((var_1_5) + (last_1_var_1_10))) <= (127.025f))) {
		} else {
		}
	} else {
	}
	if (/* 694L, 255L, 261L, 900L, 921L, 1363L) */ ((-0.25) < (/* 696L, 254L, 263L, 902L, 923L, 1365L) */ ((256.4) - (var_1_5))))) {
		if (/* 700L, 270L, 276L, 906L, 927L, 1369L) */ ((var_1_17) && (/* 702L, 269L, 278L, 908L, 929L, 1371L) */ ((var_1_19) && (var_1_17))))) {
		}
	} else {
	}
	return /* 718L) */ ((
	/* 717L) */ ((
		/* 716L) */ ((
			/* 715L) */ ((
				/* 714L) */ ((
					/* 565L, 37L, 344L, 368L, 1234L) */ ((
						/* 566L, 4L, 8L, 345L, 369L, 1235L) */ ((
							var_1_6
						) <= (
							var_1_20
						))
					) ? (
						/* 569L, 31L, 348L, 372L, 1238L) */ ((
							/* 570L, 13L, 17L, 349L, 373L, 1239L) */ ((
								var_1_20
							) > (
								var_1_6
							))
						) ? (
							/* 573L, 25L, 352L, 376L, 1242L) */ ((
								var_1_1
							) == (
								/* 573L, 25L, 352L, 376L, 1242L) */ ((float) (
									/* 576L, 24L, 355L, 379L, 1245L) */ ((
										var_1_4
									) - (
										var_1_5
									))
								))
							))
						) : (
							/* 579L, 29L, 358L, 382L, 1248L) */ ((
								var_1_1
							) == (
								/* 579L, 29L, 358L, 382L, 1248L) */ ((float) (
									var_1_5
								))
							))
						))
					) : (
						/* 583L, 35L, 362L, 386L, 1252L) */ ((
							var_1_1
						) == (
							/* 583L, 35L, 362L, 386L, 1252L) */ ((float) (
								var_1_4
							))
						))
					))
				) && (
					/* 588L, 110L, 531L, 566L, 1015L, 1257L, 136L) */ ((
						last_1_var_1_17
					) ? (
						/* 591L, 104L, 533L, 568L, 1010L, 1260L, 131L) */ ((
							/* 592L, 55L, 65L, 534L, 569L, 990L, 1261L, 111L) */ ((
								/* 593L, 51L, 66L, 535L, 570L, 986L, 1262L, 107L) */ (max (
									/* 593L, 51L, 66L, 535L, 570L, 986L, 1262L, 107L) */ (
										last_1_var_1_14
									) , (
										/* 596L, 50L, 68L, 537L, 572L, 985L, 1265L, 106L) */ (max (
											/* 596L, 50L, 68L, 537L, 572L, 985L, 1265L, 106L) */ (
												var_1_5
											) , (
												199.78
											)
										))
									)
								))
							) != (
								/* 599L, 54L, 71L, 540L, 575L, 989L, 1268L, 110L) */ ((
									var_1_4
								) - (
									var_1_8
								))
							))
						) ? (
							/* 602L, 98L, 543L, 578L, 1005L, 1271L, 126L) */ ((
								/* 603L, 78L, 84L, 544L, 579L, 996L, 1272L, 117L) */ ((
									/* 604L, 76L, 85L, 545L, 580L, 993L, 1273L, 114L) */ ((
										var_1_2
									) != (
										var_1_3
									))
								) || (
									last_1_var_1_17
								))
							) ? (
								/* 609L, 92L, 549L, 584L, 1000L, 1278L, 121L) */ ((
									var_1_6
								) == (
									/* 609L, 92L, 549L, 584L, 1000L, 1278L, 121L) */ ((unsigned long int) (
										var_1_2
									))
								))
							) : (
								/* 613L, 96L, 553L, 588L, 1004L, 1282L, 125L) */ ((
									var_1_6
								) == (
									/* 613L, 96L, 553L, 588L, 1004L, 1282L, 125L) */ ((unsigned long int) (
										5u
									))
								))
							))
						) : (
							/* 617L, 102L, 557L, 592L, 1009L, 1286L, 130L) */ ((
								var_1_6
							) == (
								/* 617L, 102L, 557L, 592L, 1009L, 1286L, 130L) */ ((unsigned long int) (
									var_1_2
								))
							))
						))
					) : (
						/* 621L, 108L, 561L, 596L, 1014L, 1290L, 135L) */ ((
							var_1_6
						) == (
							/* 621L, 108L, 561L, 596L, 1014L, 1290L, 135L) */ ((unsigned long int) (
								var_1_2
							))
						))
					))
				))
			) && (
				/* 627L, 151L, 650L, 674L, 1296L) */ ((
					/* 628L, 121L, 129L, 651L, 675L, 1297L) */ ((
						/* 629L, 117L, 130L, 652L, 676L, 1298L) */ ((
							var_1_5
						) / (
							var_1_11
						))
					) >= (
						/* 632L, 120L, 133L, 655L, 679L, 1301L) */ ((
							var_1_8
						) - (
							var_1_4
						))
					))
				) ? (
					/* 635L, 145L, 658L, 682L, 1304L) */ ((
						var_1_10
					) == (
						/* 635L, 145L, 658L, 682L, 1304L) */ ((float) (
							/* 638L, 144L, 661L, 685L, 1307L) */ (min (
								/* 638L, 144L, 661L, 685L, 1307L) */ (
									/* 639L, 142L, 662L, 686L, 1308L) */ ((
										var_1_5
									) - (
										/* 641L, 141L, 664L, 688L, 1310L) */ ((
											var_1_12
										) - (
											var_1_13
										))
									))
								) , (
									var_1_4
								)
							))
						))
					))
				) : (
					/* 645L, 149L, 668L, 692L, 1314L) */ ((
						var_1_10
					) == (
						/* 645L, 149L, 668L, 692L, 1314L) */ ((float) (
							4.2f
						))
					))
				))
			))
		) && (
			/* 651L, 184L, 726L, 740L, 1320L) */ ((
				/* 652L, 164L, 172L, 727L, 741L, 1321L) */ ((
					/* 653L, 162L, 173L, 728L, 742L, 1322L) */ ((
						var_1_15
					) - (
						/* 655L, 161L, 175L, 730L, 744L, 1324L) */ (min (
							/* 655L, 161L, 175L, 730L, 744L, 1324L) */ (
								0
							) , (
								var_1_16
							)
						))
					))
				) > (
					var_1_6
				))
			) ? (
				/* 659L, 182L, 734L, 748L, 1328L) */ ((
					var_1_14
				) == (
					/* 659L, 182L, 734L, 748L, 1328L) */ ((double) (
						var_1_12
					))
				))
			) : (
				1
			))
		))
	) && (
		/* 665L, 244L, 806L, 832L, 1072L, 1334L, 55L) */ ((
			/* 666L, 195L, 201L, 807L, 833L, 1052L, 1335L, 35L) */ ((
				last_1_var_1_6
			) <= (
				/* 669L, 194L, 203L, 809L, 835L, 1051L, 1338L, 34L) */ ((
					var_1_16
				) * (
					last_1_var_1_20
				))
			))
		) ? (
			/* 673L, 238L, 812L, 838L, 1067L, 1342L, 50L) */ ((
				/* 674L, 210L, 216L, 813L, 839L, 1058L, 1343L, 41L) */ ((
					/* 675L, 208L, 217L, 814L, 840L, 1056L, 1344L, 39L) */ ((
						var_1_5
					) + (
						last_1_var_1_10
					))
				) <= (
					127.025f
				))
			) ? (
				/* 680L, 224L, 818L, 844L, 1062L, 1349L, 45L) */ ((
					var_1_17
				) == (
					/* 680L, 224L, 818L, 844L, 1062L, 1349L, 45L) */ ((unsigned char) (
						var_1_18
					))
				))
			) : (
				/* 684L, 236L, 822L, 848L, 1066L, 1353L, 49L) */ ((
					var_1_17
				) == (
					/* 684L, 236L, 822L, 848L, 1066L, 1353L, 49L) */ ((unsigned char) (
						var_1_19
					))
				))
			))
		) : (
			/* 688L, 242L, 826L, 852L, 1071L, 1357L, 54L) */ ((
				var_1_17
			) == (
				/* 688L, 242L, 826L, 852L, 1071L, 1357L, 54L) */ ((unsigned char) (
					var_1_19
				))
			))
		))
	))
) && (
	/* 693L, 292L, 899L, 920L, 1362L) */ ((
		/* 694L, 255L, 261L, 900L, 921L, 1363L) */ ((
			-0.25
		) < (
			/* 696L, 254L, 263L, 902L, 923L, 1365L) */ ((
				256.4
			) - (
				var_1_5
			))
		))
	) ? (
		/* 699L, 286L, 905L, 926L, 1368L) */ ((
			/* 700L, 270L, 276L, 906L, 927L, 1369L) */ ((
				var_1_17
			) && (
				/* 702L, 269L, 278L, 908L, 929L, 1371L) */ ((
					var_1_19
				) && (
					var_1_17
				))
			))
		) ? (
			/* 705L, 284L, 911L, 932L, 1374L) */ ((
				var_1_20
			) == (
				/* 705L, 284L, 911L, 932L, 1374L) */ ((signed short int) (
					var_1_15
				))
			))
		) : (
			1
		))
	) : (
		/* 709L, 290L, 915L, 936L, 1378L) */ ((
			var_1_20
		) == (
			/* 709L, 290L, 915L, 936L, 1378L) */ ((signed short int) (
				1
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
