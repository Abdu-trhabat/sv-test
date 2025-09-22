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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch42Filler_PS_CO.c", 13, "reach_error"); }
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
signed short int var_1_1 = 16;
unsigned char var_1_2 = 0;
signed short int var_1_3 = -200;
signed short int var_1_4 = 2;
signed char var_1_5 = -8;
unsigned char var_1_6 = 10;
unsigned char var_1_7 = 128;
unsigned char var_1_8 = 1;
unsigned char var_1_10 = 1;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 0;
signed short int var_1_13 = 200;
float var_1_14 = -0.8;
float var_1_15 = 127.25;
float var_1_16 = 3.5;
unsigned short int var_1_17 = 16;
unsigned short int var_1_18 = 100;
unsigned char var_1_19 = 1;
unsigned char var_1_20 = 0;
unsigned char var_1_21 = 0;
unsigned char var_1_25 = 1;
float var_1_26 = 500.65;
signed long int var_1_27 = -8;
float var_1_28 = 255.5;
float var_1_29 = 7.5;
float var_1_30 = 9.8;
unsigned char var_1_31 = 4;
signed long int var_1_32 = 1;
unsigned char var_1_33 = 2;
unsigned short int var_1_34 = 1;
unsigned long int var_1_35 = 10;
unsigned char var_1_36 = 10;
unsigned char var_1_37 = 128;
unsigned char var_1_38 = 16;
unsigned char var_1_39 = 0;
unsigned short int var_1_40 = 10;
unsigned short int var_1_41 = 128;
unsigned short int var_1_42 = 40597;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_1 = 16;
unsigned char last_1_var_1_8 = 1;
unsigned short int last_1_var_1_17 = 16;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	/* 367L, 159L) */ if (/* 368L, 144L, 145L) */ ((var_1_8) || (var_1_19))) {
		/* 371L, 158L) */ var_1_21 = (
			/* 374L, 157L) */ ((
				/* 375L, 155L) */ ((
					var_1_13
				) > (
					-4
				))
			) || (
				var_1_25
			))
		);
	}


	// From: CodeObject2
	/* 379L, 193L) */ if (/* 380L, 171L, 172L) */ ((/* 381L, 169L, 173L) */ ((/* 382L, 167L, 174L) */ ((var_1_17) + (25))) % (var_1_27))) < (2))) {
		/* 387L, 192L) */ var_1_26 = (
			/* 390L, 191L) */ ((
				/* 391L, 189L) */ (abs (
					var_1_28
				))
			) + (
				var_1_29
			))
		);
	}


	// From: CodeObject3
	/* 395L, 219L) */ if (/* 396L, 202L, 203L) */ ((/* 397L, 198L, 204L) */ (- (var_1_28))) < (/* 399L, 201L, 206L) */ (max (/* 399L, 201L, 206L) */ (var_1_14) , (var_1_29)))))) {
		/* 402L, 218L) */ var_1_30 = (
			var_1_29
		);
	}


	// From: CodeObject4
	/* 406L, 247L) */ if (/* 407L, 230L, 231L) */ ((/* 408L, 228L, 232L) */ (min (/* 408L, 228L, 232L) */ (/* 409L, 226L, 233L) */ (abs (var_1_27))) , (var_1_13)))) <= (var_1_32))) {
		/* 413L, 246L) */ var_1_31 = (
			var_1_33
		);
	}


	// From: CodeObject5
	/* 417L, 270L) */ if (/* 418L, 254L, 255L) */ ((var_1_17) < (/* 420L, 253L, 257L) */ (abs (var_1_1))))) {
		/* 422L, 269L) */ var_1_34 = (
			/* 425L, 268L) */ (max (
				/* 425L, 268L) */ (
					/* 426L, 266L) */ (abs (
						var_1_17
					))
				) , (
					var_1_33
				)
			))
		);
	}


	// From: CodeObject6
	/* 429L, 281L) */ if (var_1_25) {
		/* 431L, 280L) */ var_1_35 = (
			var_1_33
		);
	}


	// From: CodeObject7
	/* 435L, 301L) */ if (var_1_25) {
		/* 437L, 293L) */ var_1_36 = (
			/* 440L, 292L) */ ((
				var_1_37
			) - (
				var_1_38
			))
		);
	} else {
		/* 443L, 300L) */ var_1_36 = (
			/* 446L, 299L) */ ((
				var_1_37
			) - (
				/* 448L, 298L) */ (abs (
					var_1_39
				))
			))
		);
	}


	// From: CodeObject8
	/* 450L, 321L) */ if (/* 451L, 308L, 309L) */ ((/* 452L, 306L, 310L) */ (- (var_1_1))) != (var_1_17))) {
		/* 455L, 320L) */ var_1_40 = (
			var_1_39
		);
	}


	// From: CodeObject9
	/* 460L, 362L) */ if (/* 461L, 328L, 329L) */ ((var_1_33) <= (/* 463L, 327L, 331L) */ (~ (var_1_17))))) {
		/* 465L, 356L) */ if (/* 466L, 340L, 341L) */ ((/* 467L, 338L, 342L) */ (abs (var_1_39))) >= (var_1_38))) {
			/* 470L, 355L) */ var_1_41 = (
				/* 473L, 354L) */ (abs (
					/* 474L, 353L) */ ((
						var_1_42
					) - (
						var_1_38
					))
				))
			);
		}
	} else {
		/* 477L, 361L) */ var_1_41 = (
			var_1_17
		);
	}


	// From: Req4Batch42Filler_PS_CO
	signed long int stepLocal_4 = last_1_var_1_17;
	signed long int stepLocal_3 = last_1_var_1_17;
	/* 105L, 161L, 543L, 570L, 945L, 1081L) */ if (/* 82L, 114L, 115L, 544L, 571L, 921L, 1059L) */ ((stepLocal_3) >= (/* 81L, 113L, 117L, 546L, 573L, 920L, 1058L) */ ((last_1_var_1_17) / (var_1_7))))) {
		/* 100L, 155L, 549L, 576L, 940L, 1076L) */ if (/* 90L, 132L, 133L, 550L, 577L, 930L, 1066L) */ ((stepLocal_4) != (/* 89L, 131L, 135L, 552L, 579L, 929L, 1065L) */ (max (/* 89L, 131L, 135L, 552L, 579L, 929L, 1065L) */ (/* 87L, 129L, 136L, 553L, 580L, 927L, 1063L) */ (max (/* 87L, 129L, 136L, 553L, 580L, 927L, 1063L) */ (var_1_3) , (last_1_var_1_17)))) , (var_1_5)))))) {
			/* 94L, 150L, 557L, 584L, 934L, 1070L) */ var_1_13 = (
				var_1_7
			);
		} else {
			/* 99L, 154L, 561L, 588L, 939L, 1075L) */ var_1_13 = (
				last_1_var_1_17
			);
		}
	} else {
		/* 104L, 160L, 565L, 592L, 944L, 1080L) */ var_1_13 = (
			var_1_3
		);
	}


	// From: Req6Batch42Filler_PS_CO
	signed short int stepLocal_7 = var_1_3;
	/* 1136L, 236L, 759L, 772L) */ if (/* 1127L, 221L, 222L, 760L, 773L) */ ((var_1_4) > (stepLocal_7))) {
		/* 1135L, 235L, 763L, 776L) */ var_1_17 = (
			/* 1134L, 234L, 766L, 779L) */ (max (
				/* 1134L, 234L, 766L, 779L) */ (
					25
				) , (
					/* 1133L, 233L, 768L, 781L) */ ((
						var_1_13
					) + (
						var_1_18
					))
				)
			))
		);
	}


	// From: Req5Batch42Filler_PS_CO
	signed long int stepLocal_6 = last_1_var_1_1;
	unsigned char stepLocal_5 = /* 10L, 171L, 175L, 653L, 680L, 860L, 1087L) */ ((/* 8L, 169L, 176L, 654L, 681L, 858L, 1088L) */ (min (/* 8L, 169L, 176L, 654L, 681L, 858L, 1088L) */ (last_1_var_1_1) , (8)))) <= (var_1_5));
	/* 35L, 213L, 651L, 678L, 883L, 1118L) */ if (/* 16L, 173L, 174L, 652L, 679L, 863L, 1100L) */ ((stepLocal_5) || (last_1_var_1_8))) {
		/* 30L, 207L, 659L, 686L, 878L, 1113L) */ if (/* 19L, 190L, 191L, 660L, 687L, 867L, 1102L) */ ((stepLocal_6) <= (var_1_3))) {
			/* 25L, 202L, 663L, 690L, 873L, 1108L) */ var_1_14 = (
				/* 24L, 201L, 666L, 693L, 872L, 1107L) */ ((
					var_1_15
				) + (
					var_1_16
				))
			);
		} else {
			/* 29L, 206L, 669L, 696L, 877L, 1112L) */ var_1_14 = (
				var_1_16
			);
		}
	} else {
		/* 34L, 212L, 673L, 700L, 882L, 1117L) */ var_1_14 = (
			var_1_16
		);
	}


	// From: Req3Batch42Filler_PS_CO
	unsigned char stepLocal_2 = var_1_7;
	unsigned char stepLocal_1 = /* 1014L, 63L, 69L, 440L, 467L) */ ((var_1_2) && (var_1_10));
	/* 1042L, 104L, 435L, 462L) */ if (/* 1024L, 64L, 65L, 436L, 463L) */ ((/* 1023L, 60L, 66L, 437L, 464L) */ ((49.5f) <= (var_1_14))) && (stepLocal_1))) {
		/* 1037L, 98L, 443L, 470L) */ if (/* 1026L, 81L, 82L, 444L, 471L) */ ((var_1_13) < (stepLocal_2))) {
			/* 1032L, 93L, 447L, 474L) */ var_1_8 = (
				/* 1031L, 92L, 450L, 477L) */ ((
					var_1_2
				) || (
					var_1_11
				))
			);
		} else {
			/* 1036L, 97L, 453L, 480L) */ var_1_8 = (
				var_1_11
			);
		}
	} else {
		/* 1041L, 103L, 457L, 484L) */ var_1_8 = (
			var_1_12
		);
	}


	// From: Req7Batch42Filler_PS_CO
	/* 1140L, 257L, 811L, 822L) */ if (/* 1141L, 244L, 245L, 812L, 823L) */ ((var_1_14) <= (var_1_15))) {
		/* 1144L, 256L, 815L, 826L) */ var_1_19 = (
			/* 1147L, 255L, 818L, 829L) */ ((
				var_1_12
			) || (
				var_1_20
			))
		);
	}


	// From: Req1Batch42Filler_PS_CO
	signed short int stepLocal_0 = var_1_3;
	/* 997L, 29L, 261L, 279L) */ if (var_1_19) {
		/* 988L, 10L, 263L, 281L) */ var_1_1 = (
			/* 987L, 9L, 266L, 284L) */ (max (
				/* 987L, 9L, 266L, 284L) */ (
					var_1_3
				) , (
					var_1_4
				)
			))
		);
	} else {
		/* 996L, 27L, 269L, 287L) */ if (/* 991L, 14L, 15L, 270L, 288L) */ ((/* 990L, 12L, 16L, 271L, 289L) */ (abs (var_1_5))) >= (stepLocal_0))) {
			/* 995L, 26L, 274L, 292L) */ var_1_1 = (
				var_1_5
			);
		}
	}


	// From: Req2Batch42Filler_PS_CO
	/* 1002L, 50L, 334L, 346L) */ if (/* 1003L, 37L, 38L, 335L, 347L) */ ((var_1_5) >= (-2))) {
		/* 1006L, 49L, 338L, 350L) */ var_1_6 = (
			/* 1009L, 48L, 341L, 353L) */ ((
				var_1_7
			) - (
				100
			))
		);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_3 >= -32767);
	assume_abort_if_not(var_1_3 <= 32766);
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= -32767);
	assume_abort_if_not(var_1_4 <= 32766);
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= -127);
	assume_abort_if_not(var_1_5 <= 127);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 127);
	assume_abort_if_not(var_1_7 <= 254);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 1);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 0);
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= -461168.6018427383000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= -461168.6018427383000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427383000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 32767);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 0);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 1);
	assume_abort_if_not(var_1_25 <= 1);
	var_1_27 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_27 >= -2147483648);
	assume_abort_if_not(var_1_27 <= 2147483647);
	assume_abort_if_not(var_1_27 != 0);
	var_1_28 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_28 >= -461168.6018427383000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 4611686.018427383000e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_29 >= -461168.6018427383000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 4611686.018427383000e+12F && var_1_29 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_32 >= -2147483648);
	assume_abort_if_not(var_1_32 <= 2147483647);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 254);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 127);
	assume_abort_if_not(var_1_37 <= 254);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 127);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 127);
	var_1_42 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_42 >= 32767);
	assume_abort_if_not(var_1_42 <= 65534);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_8 = var_1_8;
	last_1_var_1_17 = var_1_17;
}

int property(void) {
	if (var_1_19) {
	} else {
		if (/* 490L, 14L, 19L, 306L, 324L, 1160L) */ ((/* 491L, 12L, 20L, 307L, 325L, 1161L) */ (abs (var_1_5))) >= (var_1_3))) {
		}
	}
	if (/* 501L, 37L, 41L, 359L, 371L, 1171L) */ ((var_1_5) >= (-2))) {
	}
	if (/* 512L, 64L, 72L, 490L, 517L, 1182L) */ ((/* 513L, 60L, 73L, 491L, 518L, 1183L) */ ((49.5f) <= (var_1_14))) && (/* 516L, 63L, 76L, 494L, 521L, 1186L) */ ((var_1_2) && (var_1_10))))) {
		if (/* 520L, 81L, 85L, 498L, 525L, 1190L) */ ((var_1_13) < (var_1_7))) {
		} else {
		}
	} else {
	}
	if (/* 539L, 114L, 120L, 598L, 625L, 953L, 1209L, 114L) */ ((last_1_var_1_17) >= (/* 542L, 113L, 122L, 600L, 627L, 952L, 1212L, 113L) */ ((last_1_var_1_17) / (var_1_7))))) {
		if (/* 547L, 132L, 140L, 604L, 631L, 962L, 1217L, 123L) */ ((last_1_var_1_17) != (/* 550L, 131L, 142L, 606L, 633L, 961L, 1220L, 122L) */ (max (/* 550L, 131L, 142L, 606L, 633L, 961L, 1220L, 122L) */ (/* 551L, 129L, 143L, 607L, 634L, 959L, 1221L, 120L) */ (max (/* 551L, 129L, 143L, 607L, 634L, 959L, 1221L, 120L) */ (var_1_3) , (last_1_var_1_17)))) , (var_1_5)))))) {
		} else {
		}
	} else {
	}
	if (/* 571L, 173L, 181L, 706L, 733L, 893L, 1241L, 46L) */ ((/* 572L, 171L, 182L, 707L, 734L, 890L, 1242L, 43L) */ ((/* 573L, 169L, 183L, 708L, 735L, 888L, 1243L, 41L) */ (min (/* 573L, 169L, 183L, 708L, 735L, 888L, 1243L, 41L) */ (last_1_var_1_1) , (8)))) <= (var_1_5))) || (last_1_var_1_8))) {
		if (/* 581L, 190L, 194L, 714L, 741L, 897L, 1251L, 50L) */ ((last_1_var_1_1) <= (var_1_3))) {
		} else {
		}
	} else {
	}
	if (/* 601L, 221L, 225L, 786L, 799L, 1271L) */ ((var_1_4) > (var_1_3))) {
	}
	if (/* 614L, 244L, 248L, 834L, 845L, 1284L) */ ((var_1_14) <= (var_1_15))) {
	}
	return /* 629L) */ ((
	/* 628L) */ ((
		/* 627L) */ ((
			/* 626L) */ ((
				/* 625L) */ ((
					/* 624L) */ ((
						/* 481L, 30L, 297L, 315L, 1151L) */ ((
							var_1_19
						) ? (
							/* 483L, 10L, 299L, 317L, 1153L) */ ((
								var_1_1
							) == (
								/* 483L, 10L, 299L, 317L, 1153L) */ ((signed short int) (
									/* 486L, 9L, 302L, 320L, 1156L) */ (max (
										/* 486L, 9L, 302L, 320L, 1156L) */ (
											var_1_3
										) , (
											var_1_4
										)
									))
								))
							))
						) : (
							/* 489L, 28L, 305L, 323L, 1159L) */ ((
								/* 490L, 14L, 19L, 306L, 324L, 1160L) */ ((
									/* 491L, 12L, 20L, 307L, 325L, 1161L) */ (abs (
										var_1_5
									))
								) >= (
									var_1_3
								))
							) ? (
								/* 494L, 26L, 310L, 328L, 1164L) */ ((
									var_1_1
								) == (
									/* 494L, 26L, 310L, 328L, 1164L) */ ((signed short int) (
										var_1_5
									))
								))
							) : (
								1
							))
						))
					) && (
						/* 500L, 51L, 358L, 370L, 1170L) */ ((
							/* 501L, 37L, 41L, 359L, 371L, 1171L) */ ((
								var_1_5
							) >= (
								-2
							))
						) ? (
							/* 504L, 49L, 362L, 374L, 1174L) */ ((
								var_1_6
							) == (
								/* 504L, 49L, 362L, 374L, 1174L) */ ((unsigned char) (
									/* 507L, 48L, 365L, 377L, 1177L) */ ((
										var_1_7
									) - (
										100
									))
								))
							))
						) : (
							1
						))
					))
				) && (
					/* 511L, 105L, 489L, 516L, 1181L) */ ((
						/* 512L, 64L, 72L, 490L, 517L, 1182L) */ ((
							/* 513L, 60L, 73L, 491L, 518L, 1183L) */ ((
								49.5f
							) <= (
								var_1_14
							))
						) && (
							/* 516L, 63L, 76L, 494L, 521L, 1186L) */ ((
								var_1_2
							) && (
								var_1_10
							))
						))
					) ? (
						/* 519L, 99L, 497L, 524L, 1189L) */ ((
							/* 520L, 81L, 85L, 498L, 525L, 1190L) */ ((
								var_1_13
							) < (
								var_1_7
							))
						) ? (
							/* 523L, 93L, 501L, 528L, 1193L) */ ((
								var_1_8
							) == (
								/* 523L, 93L, 501L, 528L, 1193L) */ ((unsigned char) (
									/* 526L, 92L, 504L, 531L, 1196L) */ ((
										var_1_2
									) || (
										var_1_11
									))
								))
							))
						) : (
							/* 529L, 97L, 507L, 534L, 1199L) */ ((
								var_1_8
							) == (
								/* 529L, 97L, 507L, 534L, 1199L) */ ((unsigned char) (
									var_1_11
								))
							))
						))
					) : (
						/* 533L, 103L, 511L, 538L, 1203L) */ ((
							var_1_8
						) == (
							/* 533L, 103L, 511L, 538L, 1203L) */ ((unsigned char) (
								var_1_12
							))
						))
					))
				))
			) && (
				/* 538L, 162L, 597L, 624L, 977L, 1208L, 138L) */ ((
					/* 539L, 114L, 120L, 598L, 625L, 953L, 1209L, 114L) */ ((
						last_1_var_1_17
					) >= (
						/* 542L, 113L, 122L, 600L, 627L, 952L, 1212L, 113L) */ ((
							last_1_var_1_17
						) / (
							var_1_7
						))
					))
				) ? (
					/* 546L, 156L, 603L, 630L, 972L, 1216L, 133L) */ ((
						/* 547L, 132L, 140L, 604L, 631L, 962L, 1217L, 123L) */ ((
							last_1_var_1_17
						) != (
							/* 550L, 131L, 142L, 606L, 633L, 961L, 1220L, 122L) */ (max (
								/* 550L, 131L, 142L, 606L, 633L, 961L, 1220L, 122L) */ (
									/* 551L, 129L, 143L, 607L, 634L, 959L, 1221L, 120L) */ (max (
										/* 551L, 129L, 143L, 607L, 634L, 959L, 1221L, 120L) */ (
											var_1_3
										) , (
											last_1_var_1_17
										)
									))
								) , (
									var_1_5
								)
							))
						))
					) ? (
						/* 556L, 150L, 611L, 638L, 966L, 1226L, 127L) */ ((
							var_1_13
						) == (
							/* 556L, 150L, 611L, 638L, 966L, 1226L, 127L) */ ((signed short int) (
								var_1_7
							))
						))
					) : (
						/* 560L, 154L, 615L, 642L, 971L, 1230L, 132L) */ ((
							var_1_13
						) == (
							/* 560L, 154L, 615L, 642L, 971L, 1230L, 132L) */ ((signed short int) (
								last_1_var_1_17
							))
						))
					))
				) : (
					/* 565L, 160L, 619L, 646L, 976L, 1235L, 137L) */ ((
						var_1_13
					) == (
						/* 565L, 160L, 619L, 646L, 976L, 1235L, 137L) */ ((signed short int) (
							var_1_3
						))
					))
				))
			))
		) && (
			/* 570L, 214L, 705L, 732L, 913L, 1240L, 66L) */ ((
				/* 571L, 173L, 181L, 706L, 733L, 893L, 1241L, 46L) */ ((
					/* 572L, 171L, 182L, 707L, 734L, 890L, 1242L, 43L) */ ((
						/* 573L, 169L, 183L, 708L, 735L, 888L, 1243L, 41L) */ (min (
							/* 573L, 169L, 183L, 708L, 735L, 888L, 1243L, 41L) */ (
								last_1_var_1_1
							) , (
								8
							)
						))
					) <= (
						var_1_5
					))
				) || (
					last_1_var_1_8
				))
			) ? (
				/* 580L, 208L, 713L, 740L, 908L, 1250L, 61L) */ ((
					/* 581L, 190L, 194L, 714L, 741L, 897L, 1251L, 50L) */ ((
						last_1_var_1_1
					) <= (
						var_1_3
					))
				) ? (
					/* 585L, 202L, 717L, 744L, 903L, 1255L, 56L) */ ((
						var_1_14
					) == (
						/* 585L, 202L, 717L, 744L, 903L, 1255L, 56L) */ ((float) (
							/* 588L, 201L, 720L, 747L, 902L, 1258L, 55L) */ ((
								var_1_15
							) + (
								var_1_16
							))
						))
					))
				) : (
					/* 591L, 206L, 723L, 750L, 907L, 1261L, 60L) */ ((
						var_1_14
					) == (
						/* 591L, 206L, 723L, 750L, 907L, 1261L, 60L) */ ((float) (
							var_1_16
						))
					))
				))
			) : (
				/* 595L, 212L, 727L, 754L, 912L, 1265L, 65L) */ ((
					var_1_14
				) == (
					/* 595L, 212L, 727L, 754L, 912L, 1265L, 65L) */ ((float) (
						var_1_16
					))
				))
			))
		))
	) && (
		/* 600L, 237L, 785L, 798L, 1270L) */ ((
			/* 601L, 221L, 225L, 786L, 799L, 1271L) */ ((
				var_1_4
			) > (
				var_1_3
			))
		) ? (
			/* 604L, 235L, 789L, 802L, 1274L) */ ((
				var_1_17
			) == (
				/* 604L, 235L, 789L, 802L, 1274L) */ ((unsigned short int) (
					/* 607L, 234L, 792L, 805L, 1277L) */ (max (
						/* 607L, 234L, 792L, 805L, 1277L) */ (
							25
						) , (
							/* 609L, 233L, 794L, 807L, 1279L) */ ((
								var_1_13
							) + (
								var_1_18
							))
						)
					))
				))
			))
		) : (
			1
		))
	))
) && (
	/* 613L, 258L, 833L, 844L, 1283L) */ ((
		/* 614L, 244L, 248L, 834L, 845L, 1284L) */ ((
			var_1_14
		) <= (
			var_1_15
		))
	) ? (
		/* 617L, 256L, 837L, 848L, 1287L) */ ((
			var_1_19
		) == (
			/* 617L, 256L, 837L, 848L, 1287L) */ ((unsigned char) (
				/* 620L, 255L, 840L, 851L, 1290L) */ ((
					var_1_12
				) || (
					var_1_20
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
