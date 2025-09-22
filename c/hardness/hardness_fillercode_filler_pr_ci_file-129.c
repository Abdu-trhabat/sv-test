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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch129Filler_PR_CI.c", 13, "reach_error"); }
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
float var_1_1 = 5.2;
unsigned long int var_1_2 = 5;
unsigned long int var_1_3 = 5;
unsigned long int var_1_4 = 5;
float var_1_5 = 255.875;
float var_1_6 = 1.75;
float var_1_7 = 16.25;
float var_1_8 = 0.44999999999999996;
float var_1_9 = 3.6;
signed long int var_1_10 = 1506006796;
signed long int var_1_11 = 500;
signed long int var_1_12 = 2;
signed short int var_1_13 = 0;
signed short int var_1_14 = 32;
signed short int var_1_15 = 0;
signed short int var_1_16 = 8;
unsigned char var_1_17 = 1;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 0;
double var_1_21 = 9.5;
double var_1_22 = 128.8;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 200;
unsigned char var_1_25 = 0;
double var_1_26 = 24.5;
double var_1_27 = 3.5;
unsigned long int var_1_28 = 32;
unsigned long int var_1_30 = 100;
unsigned long int var_1_31 = 0;
unsigned short int var_1_32 = 10;
unsigned short int var_1_33 = 5;
unsigned char var_1_34 = 1;
unsigned char var_1_35 = 0;
unsigned char var_1_36 = 1;
signed char var_1_37 = 1;
double var_1_38 = 3.625;
double var_1_39 = 32.2;
double var_1_40 = 16.875;
signed char var_1_41 = 2;
double var_1_42 = 9.5;
double var_1_43 = 10.9;
double var_1_44 = 64.125;
unsigned long int var_1_45 = 2;
double var_1_46 = 16.125;
double var_1_47 = 63.375;
double var_1_48 = 8.2;
double var_1_49 = 15.5;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_17 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch129Filler_PR_CI
	/* 816L, 32L, 260L, 282L) */ if (/* 817L, 7L, 8L, 261L, 283L) */ ((/* 818L, 4L, 9L, 262L, 284L) */ ((var_1_2) ^ (var_1_3))) != (var_1_4))) {
		/* 822L, 23L, 266L, 288L) */ var_1_1 = (
			/* 825L, 22L, 269L, 291L) */ ((
				var_1_5
			) + (
				var_1_6
			))
		);
	} else {
		/* 828L, 31L, 272L, 294L) */ var_1_1 = (
			/* 831L, 30L, 275L, 297L) */ ((
				/* 832L, 28L, 276L, 298L) */ (max (
					/* 832L, 28L, 276L, 298L) */ (
						var_1_7
					) , (
						var_1_8
					)
				))
			) - (
				32.4f
			))
		);
	}


	// From: Req2Batch129Filler_PR_CI
	/* 840L, 65L, 350L, 366L) */ if (/* 841L, 46L, 47L, 351L, 367L) */ ((/* 842L, 44L, 48L, 352L, 368L) */ ((/* 843L, 42L, 49L, 353L, 369L) */ ((var_1_10) - (var_1_11))) - (var_1_12))) < (var_1_2))) {
		/* 848L, 64L, 358L, 374L) */ var_1_9 = (
			var_1_8
		);
	}


	// From: Req3Batch129Filler_PR_CI
	/* 855L, 125L, 413L, 441L) */ if (/* 856L, 84L, 85L, 414L, 442L) */ ((/* 857L, 79L, 86L, 415L, 443L) */ ((var_1_10) ^ (var_1_2))) >= (/* 860L, 83L, 89L, 418L, 446L) */ ((var_1_4) | (var_1_12))))) {
		/* 863L, 123L, 421L, 449L) */ if (/* 864L, 102L, 103L, 422L, 450L) */ ((var_1_10) != (/* 866L, 101L, 105L, 424L, 452L) */ (~ (var_1_11))))) {
			/* 868L, 118L, 426L, 454L) */ var_1_13 = (
				/* 871L, 117L, 429L, 457L) */ ((
					var_1_14
				) + (
					/* 873L, 116L, 431L, 459L) */ (max (
						/* 873L, 116L, 431L, 459L) */ (
							var_1_15
						) , (
							var_1_16
						)
					))
				))
			);
		} else {
			/* 876L, 122L, 434L, 462L) */ var_1_13 = (
				var_1_14
			);
		}
	}


	// From: CodeObject4
	/* 325L, 81L) */ if (/* 326L, 53L, 54L) */ ((/* 327L, 51L, 55L) */ (abs (/* 328L, 50L, 56L) */ (min (/* 328L, 50L, 56L) */ (var_1_38) , (var_1_39)))))) >= (var_1_40))) {
		/* 332L, 79L) */ if (/* 333L, 68L, 69L) */ ((var_1_36) && (var_1_35))) {
			/* 336L, 78L) */ var_1_37 = (
				var_1_41
			);
		}
	}


	// From: Req4Batch129Filler_PR_CI
	/* 881L, 152L, 523L, 539L) */ if (/* 882L, 136L, 137L, 524L, 540L) */ (! (last_1_var_1_17))) {
		/* 885L, 144L, 527L, 543L) */ var_1_17 = (
			var_1_19
		);
	} else {
		/* 889L, 151L, 531L, 547L) */ var_1_17 = (
			/* 892L, 150L, 534L, 550L) */ ((
				/* 893L, 148L, 535L, 551L) */ (! (
					var_1_19
				))
			) && (
				var_1_20
			))
		);
	}


	// From: CodeObject2
	/* 256L, 24L) */ var_1_32 = (
		var_1_33
	);


	// From: CodeObject3
	/* 270L, 44L) */ if (/* 271L, 31L, 32L) */ ((var_1_33) != (var_1_30))) {
		/* 274L, 43L) */ var_1_34 = (
			/* 277L, 42L) */ ((
				var_1_35
			) && (
				var_1_36
			))
		);
	}


	// From: Req5Batch129Filler_PR_CI
	/* 899L, 165L, 589L, 600L) */ var_1_21 = (
		/* 902L, 164L, 592L, 603L) */ ((
			1.000000005E8
		) - (
			/* 904L, 163L, 594L, 605L) */ ((
				7.46417232161781E18
			) - (
				var_1_22
			))
		))
	);


	// From: CodeObject6
	/* 473L, 241L) */ if (/* 474L, 175L, 176L) */ ((var_1_22) > (/* 476L, 174L, 178L) */ (min (/* 476L, 174L, 178L) */ (/* 477L, 172L, 179L) */ ((var_1_22) / (15.5))) , (var_1_27)))))) {
		/* 481L, 239L) */ if (/* 482L, 194L, 195L) */ ((/* 483L, 192L, 196L) */ ((var_1_30) ^ (8))) >= (var_1_31))) {
			/* 487L, 233L) */ if (/* 488L, 214L, 215L) */ ((/* 489L, 210L, 216L) */ ((var_1_31) & (var_1_2))) < (/* 492L, 213L, 219L) */ ((var_1_45) ^ (var_1_30))))) {
				/* 495L, 232L) */ var_1_49 = (
					var_1_22
				);
			}
		} else {
			/* 499L, 238L) */ var_1_49 = (
				var_1_22
			);
		}
	}


	// From: Req6Batch129Filler_PR_CI
	unsigned char stepLocal_2 = var_1_19;
	unsigned long int stepLocal_1 = var_1_4;
	signed long int stepLocal_0 = /* 909L, 185L, 189L, 637L, 664L) */ ((var_1_24) - (16));
	/* 939L, 223L, 631L, 658L) */ if (/* 920L, 176L, 177L, 632L, 659L) */ ((var_1_17) || (stepLocal_2))) {
		/* 934L, 217L, 635L, 662L) */ if (/* 922L, 187L, 188L, 636L, 663L) */ ((stepLocal_0) >= (var_1_14))) {
			/* 929L, 211L, 641L, 668L) */ if (/* 924L, 200L, 201L, 642L, 669L) */ ((var_1_2) < (stepLocal_1))) {
				/* 928L, 210L, 645L, 672L) */ var_1_23 = (
					var_1_25
				);
			}
		} else {
			/* 933L, 216L, 649L, 676L) */ var_1_23 = (
				var_1_25
			);
		}
	} else {
		/* 938L, 222L, 653L, 680L) */ var_1_23 = (
			var_1_25
		);
	}


	// From: CodeObject1
	/* 245L, 17L) */ if (/* 246L, 4L, 5L) */ ((var_1_14) <= (-16))) {
		/* 249L, 16L) */ var_1_28 = (
			/* 252L, 15L) */ ((
				var_1_30
			) + (
				var_1_31
			))
		);
	}


	// From: Req7Batch129Filler_PR_CI
	signed long int stepLocal_3 = -8;
	/* 964L, 255L, 739L, 758L) */ if (/* 949L, 234L, 235L, 740L, 759L) */ ((stepLocal_3) < (var_1_13))) {
		/* 959L, 250L, 743L, 762L) */ var_1_26 = (
			/* 958L, 249L, 746L, 765L) */ (max (
				/* 958L, 249L, 746L, 765L) */ (
					var_1_22
				) , (
					/* 957L, 248L, 748L, 767L) */ (max (
						/* 957L, 248L, 748L, 767L) */ (
							var_1_8
						) , (
							/* 956L, 247L, 750L, 769L) */ ((
								var_1_7
							) - (
								var_1_27
							))
						)
					))
				)
			))
		);
	} else {
		/* 963L, 254L, 753L, 772L) */ var_1_26 = (
			var_1_8
		);
	}


	// From: CodeObject5
	/* 428L, 165L) */ if (var_1_20) {
		/* 430L, 106L) */ if (/* 431L, 91L, 92L) */ ((/* 432L, 89L, 93L) */ (abs (var_1_41))) >= (var_1_3))) {
			/* 435L, 105L) */ var_1_42 = (
				/* 438L, 104L) */ ((
					var_1_43
				) - (
					var_1_44
				))
			);
		}
	} else {
		/* 441L, 163L) */ if (/* 442L, 112L, 113L) */ ((var_1_33) > (/* 444L, 111L, 115L) */ (max (/* 444L, 111L, 115L) */ (var_1_31) , (var_1_3)))))) {
			/* 447L, 130L) */ var_1_42 = (
				/* 450L, 129L) */ (abs (
					/* 451L, 128L) */ (min (
						/* 451L, 128L) */ (
							/* 452L, 126L) */ (abs (
								var_1_43
							))
						) , (
							var_1_44
						)
					))
				))
			);
		} else {
			/* 455L, 161L) */ if (/* 456L, 137L, 138L) */ ((var_1_33) <= (/* 458L, 136L, 140L) */ ((/* 459L, 134L, 141L) */ ((var_1_2) % (1))) >> (var_1_45))))) {
				/* 463L, 160L) */ var_1_42 = (
					/* 466L, 159L) */ ((
						/* 467L, 155L) */ (abs (
							var_1_46
						))
					) + (
						/* 469L, 158L) */ (min (
							/* 469L, 158L) */ (
								var_1_47
							) , (
								var_1_48
							)
						))
					))
				);
			}
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 4294967295);
	var_1_3 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 4294967295);
	var_1_4 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 4294967295);
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= -461168.6018427383000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= -461168.6018427383000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854766000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854766000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= 1073741823);
	assume_abort_if_not(var_1_10 <= 2147483647);
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1073741824);
	var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 2147483647);
	var_1_14 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_14 >= -16383);
	assume_abort_if_not(var_1_14 <= 16383);
	var_1_15 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_15 >= -16383);
	assume_abort_if_not(var_1_15 <= 16383);
	var_1_16 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_16 >= -16383);
	assume_abort_if_not(var_1_16 <= 16383);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 0);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 0);
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427383000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 127);
	assume_abort_if_not(var_1_24 <= 255);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 1);
	assume_abort_if_not(var_1_25 <= 1);
	var_1_27 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854766000e+12F && var_1_27 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 2147483647);
	var_1_31 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 2147483647);
	var_1_33 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 65534);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 1);
	assume_abort_if_not(var_1_35 <= 1);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 1);
	assume_abort_if_not(var_1_36 <= 1);
	var_1_38 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_38 >= -922337.2036854776000e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854776000e+12F && var_1_38 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_39 >= -922337.2036854776000e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854776000e+12F && var_1_39 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_40 >= -922337.2036854776000e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854776000e+12F && var_1_40 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_41 >= -127);
	assume_abort_if_not(var_1_41 <= 126);
	var_1_43 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_43 >= 0.0F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854766000e+12F && var_1_43 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_44 >= 0.0F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854766000e+12F && var_1_44 >= 1.0e-20F ));
	var_1_45 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_45 >= 1);
	assume_abort_if_not(var_1_45 <= 30);
	var_1_46 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_46 >= -461168.6018427383000e+13F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 4611686.018427383000e+12F && var_1_46 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_47 >= -461168.6018427383000e+13F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 4611686.018427383000e+12F && var_1_47 >= 1.0e-20F ));
	var_1_48 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_48 >= -461168.6018427383000e+13F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 4611686.018427383000e+12F && var_1_48 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_17 = var_1_17;
}

int property(void) {
	if (/* 505L, 7L, 13L, 305L, 327L, 970L) */ ((/* 506L, 4L, 14L, 306L, 328L, 971L) */ ((var_1_2) ^ (var_1_3))) != (var_1_4))) {
	} else {
	}
	if (/* 529L, 46L, 54L, 383L, 399L, 994L) */ ((/* 530L, 44L, 55L, 384L, 400L, 995L) */ ((/* 531L, 42L, 56L, 385L, 401L, 996L) */ ((var_1_10) - (var_1_11))) - (var_1_12))) < (var_1_2))) {
	}
	if (/* 544L, 84L, 92L, 470L, 498L, 1009L) */ ((/* 545L, 79L, 93L, 471L, 499L, 1010L) */ ((var_1_10) ^ (var_1_2))) >= (/* 548L, 83L, 96L, 474L, 502L, 1013L) */ ((var_1_4) | (var_1_12))))) {
		if (/* 552L, 102L, 107L, 478L, 506L, 1017L) */ ((var_1_10) != (/* 554L, 101L, 109L, 480L, 508L, 1019L) */ (~ (var_1_11))))) {
		} else {
		}
	}
	if (/* 570L, 136L, 139L, 556L, 572L, 1035L) */ (! (last_1_var_1_17))) {
	} else {
	}
	if (/* 597L, 176L, 180L, 686L, 713L, 1062L) */ ((var_1_17) || (var_1_19))) {
		if (/* 601L, 187L, 193L, 690L, 717L, 1066L) */ ((/* 602L, 185L, 194L, 691L, 718L, 1067L) */ ((var_1_24) - (16))) >= (var_1_14))) {
			if (/* 607L, 200L, 204L, 696L, 723L, 1072L) */ ((var_1_2) < (var_1_4))) {
			}
		} else {
		}
	} else {
	}
	if (/* 624L, 234L, 238L, 778L, 797L, 1089L) */ ((-8) < (var_1_13))) {
	} else {
	}
	return /* 647L) */ ((
	/* 646L) */ ((
		/* 645L) */ ((
			/* 644L) */ ((
				/* 643L) */ ((
					/* 642L) */ ((
						/* 504L, 33L, 304L, 326L, 969L) */ ((
							/* 505L, 7L, 13L, 305L, 327L, 970L) */ ((
								/* 506L, 4L, 14L, 306L, 328L, 971L) */ ((
									var_1_2
								) ^ (
									var_1_3
								))
							) != (
								var_1_4
							))
						) ? (
							/* 510L, 23L, 310L, 332L, 975L) */ ((
								var_1_1
							) == (
								/* 510L, 23L, 310L, 332L, 975L) */ ((float) (
									/* 513L, 22L, 313L, 335L, 978L) */ ((
										var_1_5
									) + (
										var_1_6
									))
								))
							))
						) : (
							/* 516L, 31L, 316L, 338L, 981L) */ ((
								var_1_1
							) == (
								/* 516L, 31L, 316L, 338L, 981L) */ ((float) (
									/* 519L, 30L, 319L, 341L, 984L) */ ((
										/* 520L, 28L, 320L, 342L, 985L) */ (max (
											/* 520L, 28L, 320L, 342L, 985L) */ (
												var_1_7
											) , (
												var_1_8
											)
										))
									) - (
										32.4f
									))
								))
							))
						))
					) && (
						/* 528L, 66L, 382L, 398L, 993L) */ ((
							/* 529L, 46L, 54L, 383L, 399L, 994L) */ ((
								/* 530L, 44L, 55L, 384L, 400L, 995L) */ ((
									/* 531L, 42L, 56L, 385L, 401L, 996L) */ ((
										var_1_10
									) - (
										var_1_11
									))
								) - (
									var_1_12
								))
							) < (
								var_1_2
							))
						) ? (
							/* 536L, 64L, 390L, 406L, 1001L) */ ((
								var_1_9
							) == (
								/* 536L, 64L, 390L, 406L, 1001L) */ ((float) (
									var_1_8
								))
							))
						) : (
							1
						))
					))
				) && (
					/* 543L, 126L, 469L, 497L, 1008L) */ ((
						/* 544L, 84L, 92L, 470L, 498L, 1009L) */ ((
							/* 545L, 79L, 93L, 471L, 499L, 1010L) */ ((
								var_1_10
							) ^ (
								var_1_2
							))
						) >= (
							/* 548L, 83L, 96L, 474L, 502L, 1013L) */ ((
								var_1_4
							) | (
								var_1_12
							))
						))
					) ? (
						/* 551L, 124L, 477L, 505L, 1016L) */ ((
							/* 552L, 102L, 107L, 478L, 506L, 1017L) */ ((
								var_1_10
							) != (
								/* 554L, 101L, 109L, 480L, 508L, 1019L) */ (~ (
									var_1_11
								))
							))
						) ? (
							/* 556L, 118L, 482L, 510L, 1021L) */ ((
								var_1_13
							) == (
								/* 556L, 118L, 482L, 510L, 1021L) */ ((signed short int) (
									/* 559L, 117L, 485L, 513L, 1024L) */ ((
										var_1_14
									) + (
										/* 561L, 116L, 487L, 515L, 1026L) */ (max (
											/* 561L, 116L, 487L, 515L, 1026L) */ (
												var_1_15
											) , (
												var_1_16
											)
										))
									))
								))
							))
						) : (
							/* 564L, 122L, 490L, 518L, 1029L) */ ((
								var_1_13
							) == (
								/* 564L, 122L, 490L, 518L, 1029L) */ ((signed short int) (
									var_1_14
								))
							))
						))
					) : (
						1
					))
				))
			) && (
				/* 569L, 153L, 555L, 571L, 1034L) */ ((
					/* 570L, 136L, 139L, 556L, 572L, 1035L) */ (! (
						last_1_var_1_17
					))
				) ? (
					/* 573L, 144L, 559L, 575L, 1038L) */ ((
						var_1_17
					) == (
						/* 573L, 144L, 559L, 575L, 1038L) */ ((unsigned char) (
							var_1_19
						))
					))
				) : (
					/* 577L, 151L, 563L, 579L, 1042L) */ ((
						var_1_17
					) == (
						/* 577L, 151L, 563L, 579L, 1042L) */ ((unsigned char) (
							/* 580L, 150L, 566L, 582L, 1045L) */ ((
								/* 581L, 148L, 567L, 583L, 1046L) */ (! (
									var_1_19
								))
							) && (
								var_1_20
							))
						))
					))
				))
			))
		) && (
			/* 587L, 165L, 611L, 622L, 1052L) */ ((
				var_1_21
			) == (
				/* 587L, 165L, 611L, 622L, 1052L) */ ((double) (
					/* 590L, 164L, 614L, 625L, 1055L) */ ((
						1.000000005E8
					) - (
						/* 592L, 163L, 616L, 627L, 1057L) */ ((
							7.46417232161781E18
						) - (
							var_1_22
						))
					))
				))
			))
		))
	) && (
		/* 596L, 224L, 685L, 712L, 1061L) */ ((
			/* 597L, 176L, 180L, 686L, 713L, 1062L) */ ((
				var_1_17
			) || (
				var_1_19
			))
		) ? (
			/* 600L, 218L, 689L, 716L, 1065L) */ ((
				/* 601L, 187L, 193L, 690L, 717L, 1066L) */ ((
					/* 602L, 185L, 194L, 691L, 718L, 1067L) */ ((
						var_1_24
					) - (
						16
					))
				) >= (
					var_1_14
				))
			) ? (
				/* 606L, 212L, 695L, 722L, 1071L) */ ((
					/* 607L, 200L, 204L, 696L, 723L, 1072L) */ ((
						var_1_2
					) < (
						var_1_4
					))
				) ? (
					/* 610L, 210L, 699L, 726L, 1075L) */ ((
						var_1_23
					) == (
						/* 610L, 210L, 699L, 726L, 1075L) */ ((unsigned char) (
							var_1_25
						))
					))
				) : (
					1
				))
			) : (
				/* 614L, 216L, 703L, 730L, 1079L) */ ((
					var_1_23
				) == (
					/* 614L, 216L, 703L, 730L, 1079L) */ ((unsigned char) (
						var_1_25
					))
				))
			))
		) : (
			/* 618L, 222L, 707L, 734L, 1083L) */ ((
				var_1_23
			) == (
				/* 618L, 222L, 707L, 734L, 1083L) */ ((unsigned char) (
					var_1_25
				))
			))
		))
	))
) && (
	/* 623L, 256L, 777L, 796L, 1088L) */ ((
		/* 624L, 234L, 238L, 778L, 797L, 1089L) */ ((
			-8
		) < (
			var_1_13
		))
	) ? (
		/* 627L, 250L, 781L, 800L, 1092L) */ ((
			var_1_26
		) == (
			/* 627L, 250L, 781L, 800L, 1092L) */ ((double) (
				/* 630L, 249L, 784L, 803L, 1095L) */ (max (
					/* 630L, 249L, 784L, 803L, 1095L) */ (
						var_1_22
					) , (
						/* 632L, 248L, 786L, 805L, 1097L) */ (max (
							/* 632L, 248L, 786L, 805L, 1097L) */ (
								var_1_8
							) , (
								/* 634L, 247L, 788L, 807L, 1099L) */ ((
									var_1_7
								) - (
									var_1_27
								))
							)
						))
					)
				))
			))
		))
	) : (
		/* 637L, 254L, 791L, 810L, 1102L) */ ((
			var_1_26
		) == (
			/* 637L, 254L, 791L, 810L, 1102L) */ ((double) (
				var_1_8
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
