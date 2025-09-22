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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch181Filler_PR_CO.c", 13, "reach_error"); }
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
signed long int var_1_1 = -16;
signed long int var_1_3 = 5;
signed long int var_1_4 = 5;
unsigned char var_1_6 = 1;
unsigned char var_1_7 = 0;
signed char var_1_8 = 10;
signed short int var_1_9 = 100;
signed short int var_1_10 = 256;
signed short int var_1_11 = 100;
signed char var_1_12 = -32;
signed char var_1_13 = 8;
unsigned short int var_1_14 = 32;
unsigned char var_1_15 = 0;
signed long int var_1_16 = -64;
signed long int var_1_17 = 4;
float var_1_19 = 128.5;
unsigned char var_1_21 = 0;
signed long int var_1_22 = -1;
float var_1_24 = 4.3;
float var_1_25 = 0.0;
float var_1_26 = 0.0;
float var_1_27 = 128.625;
float var_1_28 = 0.5;
signed long int var_1_29 = 10;
signed long int var_1_30 = -4;
unsigned char var_1_31 = 4;
float var_1_32 = 9999999999.4;
float var_1_33 = 15.55;
float var_1_34 = 15.5;
unsigned char var_1_35 = 8;
signed short int var_1_36 = -1;
signed short int var_1_38 = -16;
signed short int var_1_39 = 100;
unsigned long int var_1_40 = 10;
double var_1_41 = 32.8;
unsigned char var_1_42 = 32;
double var_1_43 = 16.6;
double var_1_44 = 10000.8;
double var_1_45 = 1.4;
double var_1_46 = 25.25;
unsigned char var_1_47 = 1;
signed char var_1_48 = -64;
unsigned char var_1_49 = 0;
float var_1_50 = 3.5;
unsigned char var_1_51 = 16;
float var_1_52 = 5.125;
unsigned char var_1_53 = 1;
unsigned char var_1_54 = 1;
signed long int var_1_55 = 256;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_1 = -16;
unsigned char last_1_var_1_15 = 0;
signed long int last_1_var_1_22 = -1;
float last_1_var_1_24 = 4.3;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch181Filler_PR_CO
	signed long int stepLocal_0 = var_1_4;
	/* 126L, 34L, 275L, 296L, 852L, 994L) */ if (last_1_var_1_15) {
		/* 114L, 12L, 277L, 298L, 840L, 983L) */ var_1_1 = (
			/* 113L, 11L, 280L, 301L, 839L, 982L) */ ((
				var_1_3
			) - (
				/* 112L, 10L, 282L, 303L, 838L, 981L) */ ((
					var_1_4
				) + (
					5
				))
			))
		);
	} else {
		/* 125L, 32L, 285L, 306L, 851L, 993L) */ if (/* 120L, 17L, 18L, 286L, 307L, 846L, 988L) */ ((stepLocal_0) > (/* 119L, 16L, 20L, 288L, 309L, 845L, 987L) */ ((var_1_3) * (last_1_var_1_22))))) {
			/* 124L, 31L, 291L, 312L, 850L, 992L) */ var_1_1 = (
				var_1_3
			);
		}
	}


	// From: CodeObject7
	/* 477L, 358L) */ if (var_1_49) {
		/* 479L, 356L) */ if (/* 480L, 334L, 335L) */ ((var_1_22) <= (/* 482L, 333L, 337L) */ ((5) % (/* 484L, 332L, 339L) */ (max (/* 484L, 332L, 339L) */ (var_1_42) , (var_1_51)))))))) {
			/* 487L, 355L) */ var_1_50 = (
				/* 490L, 354L) */ (abs (
					/* 491L, 353L) */ (min (
						/* 491L, 353L) */ (
							var_1_52
						) , (
							var_1_43
						)
					))
				))
			);
		}
	}


	// From: Req5Batch181Filler_PR_CO
	signed long int stepLocal_3 = /* 4L, 139L, 147L, 515L, 557L, 895L, 1044L) */ ((var_1_4) - (last_1_var_1_1));
	signed long int stepLocal_2 = /* 10L, 110L, 117L, 501L, 543L, 880L, 1038L) */ ((last_1_var_1_1) >> (10));
	/* 52L, 194L, 499L, 541L, 922L, 1086L) */ if (/* 19L, 115L, 116L, 500L, 542L, 886L, 1054L) */ ((stepLocal_2) < (/* 18L, 114L, 120L, 504L, 546L, 885L, 1053L) */ ((last_1_var_1_22) / (/* 17L, 113L, 122L, 506L, 548L, 884L, 1052L) */ (abs (var_1_16))))))) {
		/* 47L, 188L, 508L, 550L, 917L, 1081L) */ if (/* 26L, 140L, 141L, 509L, 551L, 896L, 1060L) */ ((/* 24L, 136L, 142L, 510L, 552L, 891L, 1059L) */ ((/* 22L, 134L, 143L, 511L, 553L, 889L, 1057L) */ ((var_1_9) / (var_1_16))) % (var_1_17))) <= (stepLocal_3))) {
			/* 42L, 182L, 518L, 560L, 912L, 1076L) */ if (/* 33L, 163L, 164L, 519L, 561L, 903L, 1067L) */ ((/* 30L, 161L, 165L, 520L, 562L, 900L, 1064L) */ ((last_1_var_1_24) / (var_1_19))) != (last_1_var_1_24))) {
				/* 37L, 177L, 524L, 566L, 907L, 1071L) */ var_1_15 = (
					var_1_21
				);
			} else {
				/* 41L, 181L, 528L, 570L, 911L, 1075L) */ var_1_15 = (
					var_1_7
				);
			}
		} else {
			/* 46L, 187L, 532L, 574L, 916L, 1080L) */ var_1_15 = (
				var_1_21
			);
		}
	} else {
		/* 51L, 193L, 536L, 578L, 921L, 1085L) */ var_1_15 = (
			var_1_21
		);
	}


	// From: Req4Batch181Filler_PR_CO
	/* 1028L, 100L, 460L, 470L) */ if (var_1_15) {
		/* 1030L, 99L, 462L, 472L) */ var_1_14 = (
			/* 1033L, 98L, 465L, 475L) */ (max (
				/* 1033L, 98L, 465L, 475L) */ (
					var_1_10
				) , (
					var_1_11
				)
			))
		);
	}


	// From: CodeObject3
	/* 403L, 204L) */ if (var_1_6) {
		/* 405L, 192L) */ var_1_36 = (
			var_1_1
		);
	} else {
		/* 409L, 203L) */ var_1_36 = (
			/* 412L, 202L) */ (min (
				/* 412L, 202L) */ (
					/* 413L, 198L) */ (abs (
						/* 414L, 197L) */ (min (
							/* 414L, 197L) */ (
								var_1_35
							) , (
								var_1_1
							)
						))
					))
				) , (
					/* 417L, 201L) */ (min (
						/* 417L, 201L) */ (
							var_1_38
						) , (
							var_1_39
						)
					))
				)
			))
		);
	}


	// From: CodeObject9
	/* 500L, 373L) */ var_1_55 = (
		var_1_39
	);


	// From: Req2Batch181Filler_PR_CO
	/* 1003L, 43L, 364L, 374L) */ var_1_6 = (
		var_1_7
	);


	// From: CodeObject1
	/* 377L, 157L) */ var_1_29 = (
		var_1_30
	);


	// From: Req7Batch181Filler_PR_CO
	/* 1125L, 264L, 775L, 790L) */ var_1_24 = (
		/* 1128L, 263L, 778L, 793L) */ ((
			/* 1129L, 261L, 779L, 794L) */ ((
				/* 1130L, 259L, 780L, 795L) */ ((
					var_1_25
				) + (
					var_1_26
				))
			) - (
				var_1_27
			))
		) - (
			var_1_28
		))
	);


	// From: CodeObject5
	/* 425L, 259L) */ if (/* 426L, 222L, 223L) */ ((var_1_35) > (/* 428L, 221L, 225L) */ (max (/* 428L, 221L, 225L) */ (var_1_1) , (/* 430L, 220L, 227L) */ ((var_1_40) / (var_1_42)))))))) {
		/* 433L, 248L) */ if (var_1_6) {
			/* 435L, 247L) */ var_1_41 = (
				/* 438L, 246L) */ (min (
					/* 438L, 246L) */ (
						/* 439L, 244L) */ ((
							var_1_43
						) + (
							var_1_44
						))
					) , (
						var_1_45
					)
				))
			);
		}
	} else {
		/* 443L, 258L) */ var_1_41 = (
			/* 446L, 257L) */ (min (
				/* 446L, 257L) */ (
					/* 447L, 255L) */ ((
						var_1_46
					) - (
						/* 449L, 254L) */ (abs (
							var_1_44
						))
					))
				) , (
					var_1_45
				)
			))
		);
	}


	// From: CodeObject6
	/* 452L, 321L) */ if (/* 453L, 271L, 272L) */ ((/* 454L, 269L, 273L) */ ((/* 455L, 265L, 274L) */ (- (var_1_1))) ^ (/* 457L, 268L, 276L) */ (min (/* 457L, 268L, 276L) */ (var_1_38) , (var_1_35)))))) > (var_1_14))) {
		/* 461L, 319L) */ if (/* 462L, 295L, 296L) */ ((/* 463L, 293L, 297L) */ ((/* 464L, 290L, 298L) */ ((25) >> (2u))) % (/* 467L, 292L, 301L) */ (abs (var_1_48))))) < (var_1_30))) {
			/* 470L, 318L) */ var_1_47 = (
				/* 473L, 317L) */ (! (
					/* 474L, 316L) */ (! (
						/* 475L, 315L) */ (! (
							var_1_49
						))
					))
				))
			);
		}
	}


	// From: Req6Batch181Filler_PR_CO
	signed long int stepLocal_4 = /* 1092L, 221L, 227L, 678L, 704L) */ (abs (var_1_4));
	/* 1117L, 249L, 667L, 693L) */ if (/* 1099L, 204L, 205L, 668L, 694L) */ (! (/* 1098L, 203L, 206L, 669L, 695L) */ (! (/* 1097L, 202L, 207L, 670L, 696L) */ ((var_1_6) || (var_1_7))))))) {
		/* 1112L, 243L, 673L, 699L) */ if (/* 1103L, 222L, 223L, 674L, 700L) */ ((/* 1102L, 217L, 224L, 675L, 701L) */ (min (/* 1102L, 217L, 224L, 675L, 701L) */ (var_1_17) , (var_1_1)))) <= (stepLocal_4))) {
			/* 1107L, 238L, 680L, 706L) */ var_1_22 = (
				var_1_14
			);
		} else {
			/* 1111L, 242L, 684L, 710L) */ var_1_22 = (
				var_1_11
			);
		}
	} else {
		/* 1116L, 248L, 688L, 714L) */ var_1_22 = (
			var_1_13
		);
	}


	// From: CodeObject4
	/* 421L, 211L) */ var_1_40 = (
		var_1_35
	);


	// From: CodeObject8
	/* 495L, 365L) */ var_1_53 = (
		var_1_54
	);


	// From: Req3Batch181Filler_PR_CO
	signed long int stepLocal_1 = var_1_22;
	/* 1023L, 85L, 399L, 414L) */ if (/* 1016L, 64L, 65L, 400L, 415L) */ ((/* 1015L, 62L, 66L, 401L, 416L) */ ((var_1_9) - (/* 1014L, 61L, 68L, 403L, 418L) */ (min (/* 1014L, 61L, 68L, 403L, 418L) */ (var_1_10) , (var_1_11)))))) >= (stepLocal_1))) {
		/* 1022L, 84L, 407L, 422L) */ var_1_8 = (
			/* 1021L, 83L, 410L, 425L) */ (max (
				/* 1021L, 83L, 410L, 425L) */ (
					var_1_12
				) , (
					var_1_13
				)
			))
		);
	}


	// From: CodeObject2
	/* 392L, 182L) */ if (/* 393L, 166L, 167L) */ ((/* 394L, 164L, 168L) */ ((var_1_32) * (var_1_33))) > (var_1_34))) {
		/* 398L, 181L) */ var_1_31 = (
			/* 401L, 180L) */ (abs (
				var_1_35
			))
		);
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -1);
	assume_abort_if_not(var_1_3 <= 2147483646);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 1073741823);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 0);
	var_1_9 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_9 >= -1);
	assume_abort_if_not(var_1_9 <= 32767);
	var_1_10 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 32767);
	var_1_11 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 32767);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -127);
	assume_abort_if_not(var_1_12 <= 126);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= -127);
	assume_abort_if_not(var_1_13 <= 126);
	var_1_16 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_16 >= -2147483647);
	assume_abort_if_not(var_1_16 <= 2147483647);
	assume_abort_if_not(var_1_16 != 0);
	var_1_17 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_17 >= -2147483648);
	assume_abort_if_not(var_1_17 <= 2147483647);
	assume_abort_if_not(var_1_17 != 0);
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= -922337.2036854776000e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854776000e+12F && var_1_19 >= 1.0e-20F ));
	assume_abort_if_not(var_1_19 != 0.0F);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 1);
	assume_abort_if_not(var_1_21 <= 1);
	var_1_25 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_25 >= 2305843.009213691400e+12F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 4611686.018427383000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_26 >= 2305843.009213691400e+12F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 4611686.018427383000e+12F && var_1_26 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 4611686.018427383000e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854766000e+12F && var_1_28 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_30 >= -2147483647);
	assume_abort_if_not(var_1_30 <= 2147483646);
	var_1_32 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_32 >= -922337.2036854776000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854776000e+12F && var_1_32 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_33 >= -922337.2036854776000e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854776000e+12F && var_1_33 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_34 >= -922337.2036854776000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854776000e+12F && var_1_34 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 254);
	var_1_38 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_38 >= -32767);
	assume_abort_if_not(var_1_38 <= 32766);
	var_1_39 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_39 >= -32767);
	assume_abort_if_not(var_1_39 <= 32766);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 255);
	assume_abort_if_not(var_1_42 != 0);
	var_1_43 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_43 >= -461168.6018427383000e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 4611686.018427383000e+12F && var_1_43 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_44 >= -461168.6018427383000e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 4611686.018427383000e+12F && var_1_44 >= 1.0e-20F ));
	var_1_45 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_45 >= -922337.2036854766000e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 9223372.036854766000e+12F && var_1_45 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_46 >= 0.0F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 9223372.036854766000e+12F && var_1_46 >= 1.0e-20F ));
	var_1_48 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_48 >= -127);
	assume_abort_if_not(var_1_48 <= 127);
	assume_abort_if_not(var_1_48 != 0);
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 0);
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 0);
	assume_abort_if_not(var_1_51 <= 255);
	assume_abort_if_not(var_1_51 != 0);
	var_1_52 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_52 >= -922337.2036854766000e+13F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 9223372.036854766000e+12F && var_1_52 >= 1.0e-20F ));
	var_1_54 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_54 >= 1);
	assume_abort_if_not(var_1_54 <= 1);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_15 = var_1_15;
	last_1_var_1_22 = var_1_22;
	last_1_var_1_24 = var_1_24;
}

int property(void) {
	if (last_1_var_1_15) {
	} else {
		if (/* 516L, 17L, 23L, 328L, 349L, 869L, 1148L, 144L) */ ((var_1_4) > (/* 518L, 16L, 25L, 330L, 351L, 868L, 1150L, 143L) */ ((var_1_3) * (last_1_var_1_22))))) {
		}
	}
	if (/* 538L, 64L, 72L, 430L, 445L, 1170L) */ ((/* 539L, 62L, 73L, 431L, 446L, 1171L) */ ((var_1_9) - (/* 541L, 61L, 75L, 433L, 448L, 1173L) */ (min (/* 541L, 61L, 75L, 433L, 448L, 1173L) */ (var_1_10) , (var_1_11)))))) >= (var_1_22))) {
	}
	if (var_1_15) {
	}
	if (/* 563L, 115L, 124L, 584L, 626L, 933L, 1195L, 64L) */ ((/* 564L, 110L, 125L, 585L, 627L, 927L, 1196L, 58L) */ ((last_1_var_1_1) >> (10))) < (/* 568L, 114L, 128L, 588L, 630L, 932L, 1200L, 63L) */ ((last_1_var_1_22) / (/* 571L, 113L, 130L, 590L, 632L, 931L, 1203L, 62L) */ (abs (var_1_16))))))) {
		if (/* 574L, 140L, 150L, 593L, 635L, 943L, 1206L, 74L) */ ((/* 575L, 136L, 151L, 594L, 636L, 938L, 1207L, 69L) */ ((/* 576L, 134L, 152L, 595L, 637L, 936L, 1208L, 67L) */ ((var_1_9) / (var_1_16))) % (var_1_17))) <= (/* 580L, 139L, 156L, 599L, 641L, 942L, 1212L, 73L) */ ((var_1_4) - (last_1_var_1_1))))) {
			if (/* 585L, 163L, 169L, 603L, 645L, 950L, 1217L, 81L) */ ((/* 586L, 161L, 170L, 604L, 646L, 947L, 1218L, 78L) */ ((last_1_var_1_24) / (var_1_19))) != (last_1_var_1_24))) {
			} else {
			}
		} else {
		}
	} else {
	}
	if (/* 610L, 204L, 210L, 720L, 746L, 1242L) */ (! (/* 611L, 203L, 211L, 721L, 747L, 1243L) */ (! (/* 612L, 202L, 212L, 722L, 748L, 1244L) */ ((var_1_6) || (var_1_7))))))) {
		if (/* 616L, 222L, 229L, 726L, 752L, 1248L) */ ((/* 617L, 217L, 230L, 727L, 753L, 1249L) */ (min (/* 617L, 217L, 230L, 727L, 753L, 1249L) */ (var_1_17) , (var_1_1)))) <= (/* 620L, 221L, 233L, 730L, 756L, 1252L) */ (abs (var_1_4))))) {
		} else {
		}
	} else {
	}
	return /* 655L) */ ((
	/* 654L) */ ((
		/* 653L) */ ((
			/* 652L) */ ((
				/* 651L) */ ((
					/* 650L) */ ((
						/* 504L, 35L, 317L, 338L, 875L, 1136L, 150L) */ ((
							last_1_var_1_15
						) ? (
							/* 507L, 12L, 319L, 340L, 863L, 1139L, 138L) */ ((
								var_1_1
							) == (
								/* 507L, 12L, 319L, 340L, 863L, 1139L, 138L) */ ((signed long int) (
									/* 510L, 11L, 322L, 343L, 862L, 1142L, 137L) */ ((
										var_1_3
									) - (
										/* 512L, 10L, 324L, 345L, 861L, 1144L, 136L) */ ((
											var_1_4
										) + (
											5
										))
									))
								))
							))
						) : (
							/* 515L, 33L, 327L, 348L, 874L, 1147L, 149L) */ ((
								/* 516L, 17L, 23L, 328L, 349L, 869L, 1148L, 144L) */ ((
									var_1_4
								) > (
									/* 518L, 16L, 25L, 330L, 351L, 868L, 1150L, 143L) */ ((
										var_1_3
									) * (
										last_1_var_1_22
									))
								))
							) ? (
								/* 522L, 31L, 333L, 354L, 873L, 1154L, 148L) */ ((
									var_1_1
								) == (
									/* 522L, 31L, 333L, 354L, 873L, 1154L, 148L) */ ((signed long int) (
										var_1_3
									))
								))
							) : (
								1
							))
						))
					) && (
						/* 532L, 43L, 384L, 394L, 1164L) */ ((
							var_1_6
						) == (
							/* 532L, 43L, 384L, 394L, 1164L) */ ((unsigned char) (
								var_1_7
							))
						))
					))
				) && (
					/* 537L, 86L, 429L, 444L, 1169L) */ ((
						/* 538L, 64L, 72L, 430L, 445L, 1170L) */ ((
							/* 539L, 62L, 73L, 431L, 446L, 1171L) */ ((
								var_1_9
							) - (
								/* 541L, 61L, 75L, 433L, 448L, 1173L) */ (min (
									/* 541L, 61L, 75L, 433L, 448L, 1173L) */ (
										var_1_10
									) , (
										var_1_11
									)
								))
							))
						) >= (
							var_1_22
						))
					) ? (
						/* 545L, 84L, 437L, 452L, 1177L) */ ((
							var_1_8
						) == (
							/* 545L, 84L, 437L, 452L, 1177L) */ ((signed char) (
								/* 548L, 83L, 440L, 455L, 1180L) */ (max (
									/* 548L, 83L, 440L, 455L, 1180L) */ (
										var_1_12
									) , (
										var_1_13
									)
								))
							))
						))
					) : (
						1
					))
				))
			) && (
				/* 553L, 101L, 480L, 490L, 1185L) */ ((
					var_1_15
				) ? (
					/* 555L, 99L, 482L, 492L, 1187L) */ ((
						var_1_14
					) == (
						/* 555L, 99L, 482L, 492L, 1187L) */ ((unsigned short int) (
							/* 558L, 98L, 485L, 495L, 1190L) */ (max (
								/* 558L, 98L, 485L, 495L, 1190L) */ (
									var_1_10
								) , (
									var_1_11
								)
							))
						))
					))
				) : (
					1
				))
			))
		) && (
			/* 562L, 195L, 583L, 625L, 969L, 1194L, 100L) */ ((
				/* 563L, 115L, 124L, 584L, 626L, 933L, 1195L, 64L) */ ((
					/* 564L, 110L, 125L, 585L, 627L, 927L, 1196L, 58L) */ ((
						last_1_var_1_1
					) >> (
						10
					))
				) < (
					/* 568L, 114L, 128L, 588L, 630L, 932L, 1200L, 63L) */ ((
						last_1_var_1_22
					) / (
						/* 571L, 113L, 130L, 590L, 632L, 931L, 1203L, 62L) */ (abs (
							var_1_16
						))
					))
				))
			) ? (
				/* 573L, 189L, 592L, 634L, 964L, 1205L, 95L) */ ((
					/* 574L, 140L, 150L, 593L, 635L, 943L, 1206L, 74L) */ ((
						/* 575L, 136L, 151L, 594L, 636L, 938L, 1207L, 69L) */ ((
							/* 576L, 134L, 152L, 595L, 637L, 936L, 1208L, 67L) */ ((
								var_1_9
							) / (
								var_1_16
							))
						) % (
							var_1_17
						))
					) <= (
						/* 580L, 139L, 156L, 599L, 641L, 942L, 1212L, 73L) */ ((
							var_1_4
						) - (
							last_1_var_1_1
						))
					))
				) ? (
					/* 584L, 183L, 602L, 644L, 959L, 1216L, 90L) */ ((
						/* 585L, 163L, 169L, 603L, 645L, 950L, 1217L, 81L) */ ((
							/* 586L, 161L, 170L, 604L, 646L, 947L, 1218L, 78L) */ ((
								last_1_var_1_24
							) / (
								var_1_19
							))
						) != (
							last_1_var_1_24
						))
					) ? (
						/* 592L, 177L, 608L, 650L, 954L, 1224L, 85L) */ ((
							var_1_15
						) == (
							/* 592L, 177L, 608L, 650L, 954L, 1224L, 85L) */ ((unsigned char) (
								var_1_21
							))
						))
					) : (
						/* 596L, 181L, 612L, 654L, 958L, 1228L, 89L) */ ((
							var_1_15
						) == (
							/* 596L, 181L, 612L, 654L, 958L, 1228L, 89L) */ ((unsigned char) (
								var_1_7
							))
						))
					))
				) : (
					/* 600L, 187L, 616L, 658L, 963L, 1232L, 94L) */ ((
						var_1_15
					) == (
						/* 600L, 187L, 616L, 658L, 963L, 1232L, 94L) */ ((unsigned char) (
							var_1_21
						))
					))
				))
			) : (
				/* 604L, 193L, 620L, 662L, 968L, 1236L, 99L) */ ((
					var_1_15
				) == (
					/* 604L, 193L, 620L, 662L, 968L, 1236L, 99L) */ ((unsigned char) (
						var_1_21
					))
				))
			))
		))
	) && (
		/* 609L, 250L, 719L, 745L, 1241L) */ ((
			/* 610L, 204L, 210L, 720L, 746L, 1242L) */ (! (
				/* 611L, 203L, 211L, 721L, 747L, 1243L) */ (! (
					/* 612L, 202L, 212L, 722L, 748L, 1244L) */ ((
						var_1_6
					) || (
						var_1_7
					))
				))
			))
		) ? (
			/* 615L, 244L, 725L, 751L, 1247L) */ ((
				/* 616L, 222L, 229L, 726L, 752L, 1248L) */ ((
					/* 617L, 217L, 230L, 727L, 753L, 1249L) */ (min (
						/* 617L, 217L, 230L, 727L, 753L, 1249L) */ (
							var_1_17
						) , (
							var_1_1
						)
					))
				) <= (
					/* 620L, 221L, 233L, 730L, 756L, 1252L) */ (abs (
						var_1_4
					))
				))
			) ? (
				/* 622L, 238L, 732L, 758L, 1254L) */ ((
					var_1_22
				) == (
					/* 622L, 238L, 732L, 758L, 1254L) */ ((signed long int) (
						var_1_14
					))
				))
			) : (
				/* 626L, 242L, 736L, 762L, 1258L) */ ((
					var_1_22
				) == (
					/* 626L, 242L, 736L, 762L, 1258L) */ ((signed long int) (
						var_1_11
					))
				))
			))
		) : (
			/* 630L, 248L, 740L, 766L, 1262L) */ ((
				var_1_22
			) == (
				/* 630L, 248L, 740L, 766L, 1262L) */ ((signed long int) (
					var_1_13
				))
			))
		))
	))
) && (
	/* 639L, 264L, 805L, 820L, 1271L) */ ((
		var_1_24
	) == (
		/* 639L, 264L, 805L, 820L, 1271L) */ ((float) (
			/* 642L, 263L, 808L, 823L, 1274L) */ ((
				/* 643L, 261L, 809L, 824L, 1275L) */ ((
					/* 644L, 259L, 810L, 825L, 1276L) */ ((
						var_1_25
					) + (
						var_1_26
					))
				) - (
					var_1_27
				))
			) - (
				var_1_28
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
