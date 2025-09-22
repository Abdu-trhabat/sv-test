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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch35Filler_PR_CN.c", 13, "reach_error"); }
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
unsigned char var_1_2 = 1;
unsigned char var_1_3 = 1;
unsigned char var_1_4 = 0;
unsigned char var_1_5 = 0;
unsigned short int var_1_6 = 25;
double var_1_9 = 999.625;
unsigned short int var_1_11 = 5;
signed short int var_1_12 = 2;
signed long int var_1_13 = -256;
double var_1_14 = 127.75;
signed short int var_1_15 = 2;
double var_1_16 = 9.75;
unsigned long int var_1_17 = 32;
double var_1_18 = 10.75;
unsigned long int var_1_19 = 4067291719;
float var_1_20 = 15.3;
signed char var_1_21 = 10;
float var_1_22 = 128.2;
float var_1_23 = 16.625;
signed long int var_1_24 = -100000;
signed long int var_1_25 = -128;
signed char var_1_26 = -25;
signed short int var_1_27 = 0;
signed long int var_1_28 = 2;
unsigned short int var_1_29 = 8;
unsigned short int var_1_30 = 1;
double var_1_31 = 128.6;
signed short int var_1_32 = -256;
double var_1_33 = 8.1;
double var_1_34 = 25.625;
double var_1_35 = 1.25;
unsigned char var_1_36 = 2;
unsigned char var_1_37 = 16;
unsigned char var_1_38 = 0;
unsigned char var_1_39 = 128;
unsigned char var_1_40 = 1;
unsigned char var_1_41 = 0;
unsigned char var_1_42 = 0;
unsigned long int var_1_43 = 0;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_6 = 25;
signed short int last_1_var_1_12 = 2;
unsigned long int last_1_var_1_17 = 32;
signed char last_1_var_1_21 = 10;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req5Batch35Filler_PR_CN
	/* 70L, 177L, 604L, 627L, 942L, 1062L) */ if (/* 61L, 130L, 131L, 605L, 628L, 933L, 1063L) */ ((/* 54L, 124L, 132L, 606L, 629L, 926L, 1064L) */ ((last_1_var_1_21) + (last_1_var_1_17))) < (/* 60L, 129L, 135L, 609L, 632L, 932L, 1069L) */ ((/* 57L, 127L, 136L, 610L, 633L, 929L, 1070L) */ ((var_1_11) >> (var_1_15))) * (last_1_var_1_17))))) {
		/* 65L, 152L, 614L, 637L, 937L, 1075L) */ var_1_14 = (
			var_1_16
		);
	} else {
		/* 69L, 176L, 618L, 641L, 941L, 1079L) */ var_1_14 = (
			8.954
		);
	}


	// From: Req6Batch35Filler_PR_CN
	/* 1084L, 234L, 692L, 715L) */ if (/* 1085L, 201L, 202L, 693L, 716L) */ ((/* 1086L, 196L, 203L, 694L, 717L) */ (min (/* 1086L, 196L, 203L, 694L, 717L) */ (/* 1087L, 193L, 204L, 695L, 718L) */ ((var_1_16) * (200.7f))) , (/* 1090L, 195L, 207L, 698L, 721L) */ (abs (var_1_14)))))) <= (/* 1092L, 200L, 209L, 700L, 723L) */ ((/* 1093L, 198L, 210L, 701L, 724L) */ (- (var_1_14))) / (var_1_18))))) {
		/* 1096L, 229L, 704L, 727L) */ var_1_17 = (
			/* 1099L, 228L, 707L, 730L) */ ((
				var_1_19
			) - (
				var_1_15
			))
		);
	} else {
		/* 1102L, 233L, 710L, 733L) */ var_1_17 = (
			var_1_19
		);
	}


	// From: CodeObject5
	/* 243L) */ if (/* 223L, 222L) */ ((/* 224L, 219L) */ ((/* 225L, 217L) */ (abs (var_1_31))) * (50.5))) > (/* 228L, 221L) */ (- (var_1_23))))) {
		/* 242L) */ var_1_36 = (
			/* 241L) */ (max (
				/* 241L) */ (
					var_1_30
				) , (
					var_1_29
				)
			))
		);
	}


	// From: CodeObject7
	/* 297L) */ if (/* 274L, 273L) */ ((var_1_34) <= (var_1_33))) {
		/* 295L) */ if (/* 283L, 282L) */ ((var_1_38) || (var_1_41))) {
			/* 294L) */ var_1_40 = (
				/* 293L) */ (! (
					/* 292L) */ (! (
						var_1_42
					))
				))
			);
		}
	}


	// From: Req4Batch35Filler_PR_CN
	signed long int stepLocal_2 = last_1_var_1_6;
	/* 24L, 116L, 528L, 546L, 897L, 1054L) */ if (/* 7L, 91L, 92L, 529L, 547L, 880L, 1037L) */ ((last_1_var_1_12) == (stepLocal_2))) {
		/* 23L, 114L, 532L, 550L, 896L, 1053L) */ if (/* 9L, 99L, 100L, 533L, 551L, 882L, 1039L) */ (! (var_1_3))) {
			/* 22L, 113L, 535L, 553L, 895L, 1052L) */ var_1_13 = (
				/* 21L, 112L, 538L, 556L, 894L, 1051L) */ ((
					/* 16L, 108L, 539L, 557L, 889L, 1046L) */ ((
						last_1_var_1_17
					) + (
						last_1_var_1_12
					))
				) + (
					/* 20L, 111L, 542L, 560L, 893L, 1050L) */ ((
						var_1_11
					) - (
						last_1_var_1_17
					))
				))
			);
		}
	}


	// From: CodeObject4
	/* 212L) */ if (/* 188L, 187L) */ ((var_1_27) == (/* 190L, 186L) */ ((/* 191L, 183L) */ (abs (-256))) % (/* 193L, 185L) */ (abs (var_1_32))))))) {
		/* 211L) */ var_1_31 = (
			/* 210L) */ ((
				var_1_33
			) - (
				/* 209L) */ (min (
					/* 209L) */ (
						/* 207L) */ ((
							0.6
						) + (
							var_1_34
						))
					) , (
						var_1_35
					)
				))
			))
		);
	}


	// From: CodeObject8
	/* 344L) */ if (var_1_42) {
		/* 338L) */ if (/* 310L, 309L) */ ((/* 311L, 307L) */ (max (/* 311L, 307L) */ (/* 312L, 305L) */ (abs (var_1_22))) , (var_1_23)))) != (var_1_31))) {
			/* 325L) */ var_1_43 = (
				var_1_29
			);
		} else {
			/* 337L) */ var_1_43 = (
				var_1_28
			);
		}
	} else {
		/* 343L) */ var_1_43 = (
			var_1_29
		);
	}


	// From: Req2Batch35Filler_PR_CN
	unsigned long int stepLocal_0 = var_1_17;
	/* 1014L, 64L, 400L, 423L) */ if (/* 995L, 28L, 29L, 401L, 424L) */ ((var_1_13) >= (stepLocal_0))) {
		/* 1009L, 58L, 404L, 427L) */ if (/* 1000L, 39L, 40L, 405L, 428L) */ ((/* 998L, 37L, 41L, 406L, 429L) */ ((var_1_9) - (1.00000000000025E12))) >= (var_1_14))) {
			/* 1004L, 53L, 410L, 433L) */ var_1_6 = (
				200
			);
		} else {
			/* 1008L, 57L, 414L, 437L) */ var_1_6 = (
				var_1_11
			);
		}
	} else {
		/* 1013L, 63L, 418L, 441L) */ var_1_6 = (
			var_1_11
		);
	}


	// From: Req3Batch35Filler_PR_CN
	signed long int stepLocal_1 = var_1_13;
	/* 1027L, 83L, 492L, 501L) */ if (/* 1022L, 72L, 73L, 493L, 502L) */ ((var_1_11) > (stepLocal_1))) {
		/* 1026L, 82L, 496L, 505L) */ var_1_12 = (
			32
		);
	}


	// From: CodeObject6
	/* 262L) */ if (/* 249L, 248L) */ (! (var_1_38))) {
		/* 261L) */ var_1_37 = (
			/* 260L) */ ((
				var_1_39
			) - (
				/* 259L) */ (min (
					/* 259L) */ (
						10
					) , (
						/* 258L) */ (abs (
							var_1_30
						))
					)
				))
			))
		);
	}


	// From: Req1Batch35Filler_PR_CN
	/* 975L, 18L, 287L, 304L) */ if (var_1_2) {
		/* 977L, 11L, 289L, 306L) */ var_1_1 = (
			/* 980L, 10L, 292L, 309L) */ ((
				/* 981L, 8L, 293L, 310L) */ (! (
					var_1_3
				))
			) || (
				var_1_4
			))
		);
	} else {
		/* 984L, 17L, 296L, 313L) */ var_1_1 = (
			/* 987L, 16L, 299L, 316L) */ ((
				var_1_3
			) && (
				var_1_5
			))
		);
	}


	// From: CodeObject3
	/* 177L) */ if (/* 123L, 122L) */ ((var_1_23) <= (var_1_22))) {
		/* 171L) */ if (/* 141L, 140L) */ ((/* 142L, 132L) */ ((var_1_24) | (/* 144L, 131L) */ (abs (var_1_27))))) >= (/* 146L, 139L) */ ((/* 147L, 135L) */ (min (/* 147L, 135L) */ (10000) , (var_1_28)))) << (/* 150L, 138L) */ ((var_1_29) + (var_1_30))))))) {
			/* 170L) */ var_1_26 = (
				/* 169L) */ (abs (
					/* 168L) */ (abs (
						var_1_30
					))
				))
			);
		}
	} else {
		/* 176L) */ var_1_26 = (
			var_1_29
		);
	}


	// From: Req7Batch35Filler_PR_CN
	signed long int stepLocal_3 = /* 1108L, 242L, 248L, 786L, 803L) */ (max (/* 1108L, 242L, 248L, 786L, 803L) */ (var_1_13) , (var_1_12)));
	/* 1124L, 272L, 784L, 801L) */ if (/* 1115L, 246L, 247L, 785L, 802L) */ ((stepLocal_3) <= (/* 1114L, 245L, 251L, 789L, 806L) */ ((var_1_15) << (var_1_17))))) {
		/* 1123L, 270L, 792L, 809L) */ if (var_1_1) {
			/* 1122L, 269L, 794L, 811L) */ var_1_20 = (
				/* 1121L, 268L, 797L, 814L) */ (max (
					/* 1121L, 268L, 797L, 814L) */ (
						var_1_16
					) , (
						7.9f
					)
				))
			);
		}
	}


	// From: Req8Batch35Filler_PR_CN
	/* 1129L, 281L, 853L, 859L) */ var_1_21 = (
		var_1_15
	);


	// From: CodeObject1
	/* 107L) */ var_1_22 = (
		var_1_23
	);


	// From: CodeObject2
	/* 115L) */ var_1_24 = (
		var_1_25
	);
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 1);
	assume_abort_if_not(var_1_3 <= 1);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 0);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 1);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 65534);
	var_1_15 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_15 >= 1);
	assume_abort_if_not(var_1_15 <= 15);
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= -922337.2036854766000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= -922337.2036854776000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854776000e+12F && var_1_18 >= 1.0e-20F ));
	assume_abort_if_not(var_1_18 != 0.0F);
	var_1_19 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_19 >= 2147483647);
	assume_abort_if_not(var_1_19 <= 4294967294);
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= -922337.2036854766000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854766000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_25 >= -2147483647);
	assume_abort_if_not(var_1_25 <= 2147483646);
	var_1_27 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_27 >= -32767);
	assume_abort_if_not(var_1_27 <= 32767);
	var_1_28 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 2147483647);
	var_1_29 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 9);
	var_1_30 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 8);
	var_1_32 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_32 >= -32767);
	assume_abort_if_not(var_1_32 <= 32767);
	assume_abort_if_not(var_1_32 != 0);
	var_1_33 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_33 >= 0.0F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854766000e+12F && var_1_33 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_34 >= 0.0F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 4611686.018427383000e+12F && var_1_34 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854766000e+12F && var_1_35 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 1);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 127);
	assume_abort_if_not(var_1_39 <= 254);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 1);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 0);
}



void updateLastVariables(void) {
	last_1_var_1_6 = var_1_6;
	last_1_var_1_12 = var_1_12;
	last_1_var_1_17 = var_1_17;
	last_1_var_1_21 = var_1_21;
}

int property(void) {
	if (var_1_2) {
	} else {
	}
	if (/* 364L, 28L, 32L, 447L, 470L, 1152L) */ ((var_1_13) >= (var_1_17))) {
		if (/* 368L, 39L, 45L, 451L, 474L, 1156L) */ ((/* 369L, 37L, 46L, 452L, 475L, 1157L) */ ((var_1_9) - (1.00000000000025E12))) >= (var_1_14))) {
		} else {
		}
	} else {
	}
	if (/* 387L, 72L, 76L, 511L, 520L, 1175L) */ ((var_1_11) > (var_1_13))) {
	}
	if (/* 396L, 91L, 95L, 565L, 583L, 903L, 1184L, 31L) */ ((last_1_var_1_12) == (last_1_var_1_6))) {
		if (/* 402L, 99L, 102L, 569L, 587L, 905L, 1190L, 33L) */ (! (var_1_3))) {
		}
	}
	if (/* 423L, 130L, 140L, 651L, 674L, 959L, 1211L, 87L) */ ((/* 424L, 124L, 141L, 652L, 675L, 952L, 1212L, 80L) */ ((last_1_var_1_21) + (last_1_var_1_17))) < (/* 429L, 129L, 144L, 655L, 678L, 958L, 1217L, 86L) */ ((/* 430L, 127L, 145L, 656L, 679L, 955L, 1218L, 83L) */ ((var_1_11) >> (var_1_15))) * (last_1_var_1_17))))) {
	} else {
	}
	if (/* 445L, 201L, 213L, 739L, 762L, 1233L) */ ((/* 446L, 196L, 214L, 740L, 763L, 1234L) */ (min (/* 446L, 196L, 214L, 740L, 763L, 1234L) */ (/* 447L, 193L, 215L, 741L, 764L, 1235L) */ ((var_1_16) * (200.7f))) , (/* 450L, 195L, 218L, 744L, 767L, 1238L) */ (abs (var_1_14)))))) <= (/* 452L, 200L, 220L, 746L, 769L, 1240L) */ ((/* 453L, 198L, 221L, 747L, 770L, 1241L) */ (- (var_1_14))) / (var_1_18))))) {
	} else {
	}
	if (/* 468L, 246L, 254L, 819L, 836L, 1256L) */ ((/* 469L, 242L, 255L, 820L, 837L, 1257L) */ (max (/* 469L, 242L, 255L, 820L, 837L, 1257L) */ (var_1_13) , (var_1_12)))) <= (/* 472L, 245L, 258L, 823L, 840L, 1260L) */ ((var_1_15) << (var_1_17))))) {
		if (var_1_1) {
		}
	}
	return /* 496L) */ ((
	/* 495L) */ ((
		/* 494L) */ ((
			/* 493L) */ ((
				/* 492L) */ ((
					/* 491L) */ ((
						/* 490L) */ ((
							/* 347L, 19L, 321L, 338L, 1135L) */ ((
								var_1_2
							) ? (
								/* 349L, 11L, 323L, 340L, 1137L) */ ((
									var_1_1
								) == (
									/* 349L, 11L, 323L, 340L, 1137L) */ ((unsigned char) (
										/* 352L, 10L, 326L, 343L, 1140L) */ ((
											/* 353L, 8L, 327L, 344L, 1141L) */ (! (
												var_1_3
											))
										) || (
											var_1_4
										))
									))
								))
							) : (
								/* 356L, 17L, 330L, 347L, 1144L) */ ((
									var_1_1
								) == (
									/* 356L, 17L, 330L, 347L, 1144L) */ ((unsigned char) (
										/* 359L, 16L, 333L, 350L, 1147L) */ ((
											var_1_3
										) && (
											var_1_5
										))
									))
								))
							))
						) && (
							/* 363L, 65L, 446L, 469L, 1151L) */ ((
								/* 364L, 28L, 32L, 447L, 470L, 1152L) */ ((
									var_1_13
								) >= (
									var_1_17
								))
							) ? (
								/* 367L, 59L, 450L, 473L, 1155L) */ ((
									/* 368L, 39L, 45L, 451L, 474L, 1156L) */ ((
										/* 369L, 37L, 46L, 452L, 475L, 1157L) */ ((
											var_1_9
										) - (
											1.00000000000025E12
										))
									) >= (
										var_1_14
									))
								) ? (
									/* 373L, 53L, 456L, 479L, 1161L) */ ((
										var_1_6
									) == (
										/* 373L, 53L, 456L, 479L, 1161L) */ ((unsigned short int) (
											200
										))
									))
								) : (
									/* 377L, 57L, 460L, 483L, 1165L) */ ((
										var_1_6
									) == (
										/* 377L, 57L, 460L, 483L, 1165L) */ ((unsigned short int) (
											var_1_11
										))
									))
								))
							) : (
								/* 381L, 63L, 464L, 487L, 1169L) */ ((
									var_1_6
								) == (
									/* 381L, 63L, 464L, 487L, 1169L) */ ((unsigned short int) (
										var_1_11
									))
								))
							))
						))
					) && (
						/* 386L, 84L, 510L, 519L, 1174L) */ ((
							/* 387L, 72L, 76L, 511L, 520L, 1175L) */ ((
								var_1_11
							) > (
								var_1_13
							))
						) ? (
							/* 390L, 82L, 514L, 523L, 1178L) */ ((
								var_1_12
							) == (
								/* 390L, 82L, 514L, 523L, 1178L) */ ((signed short int) (
									32
								))
							))
						) : (
							1
						))
					))
				) && (
					/* 395L, 117L, 564L, 582L, 920L, 1183L, 48L) */ ((
						/* 396L, 91L, 95L, 565L, 583L, 903L, 1184L, 31L) */ ((
							last_1_var_1_12
						) == (
							last_1_var_1_6
						))
					) ? (
						/* 401L, 115L, 568L, 586L, 919L, 1189L, 47L) */ ((
							/* 402L, 99L, 102L, 569L, 587L, 905L, 1190L, 33L) */ (! (
								var_1_3
							))
						) ? (
							/* 404L, 113L, 571L, 589L, 918L, 1192L, 46L) */ ((
								var_1_13
							) == (
								/* 404L, 113L, 571L, 589L, 918L, 1192L, 46L) */ ((signed long int) (
									/* 407L, 112L, 574L, 592L, 917L, 1195L, 45L) */ ((
										/* 408L, 108L, 575L, 593L, 912L, 1196L, 40L) */ ((
											last_1_var_1_17
										) + (
											last_1_var_1_12
										))
									) + (
										/* 413L, 111L, 578L, 596L, 916L, 1201L, 44L) */ ((
											var_1_11
										) - (
											last_1_var_1_17
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
				/* 422L, 178L, 650L, 673L, 968L, 1210L, 96L) */ ((
					/* 423L, 130L, 140L, 651L, 674L, 959L, 1211L, 87L) */ ((
						/* 424L, 124L, 141L, 652L, 675L, 952L, 1212L, 80L) */ ((
							last_1_var_1_21
						) + (
							last_1_var_1_17
						))
					) < (
						/* 429L, 129L, 144L, 655L, 678L, 958L, 1217L, 86L) */ ((
							/* 430L, 127L, 145L, 656L, 679L, 955L, 1218L, 83L) */ ((
								var_1_11
							) >> (
								var_1_15
							))
						) * (
							last_1_var_1_17
						))
					))
				) ? (
					/* 435L, 152L, 660L, 683L, 963L, 1223L, 91L) */ ((
						var_1_14
					) == (
						/* 435L, 152L, 660L, 683L, 963L, 1223L, 91L) */ ((double) (
							var_1_16
						))
					))
				) : (
					/* 439L, 176L, 664L, 687L, 967L, 1227L, 95L) */ ((
						var_1_14
					) == (
						/* 439L, 176L, 664L, 687L, 967L, 1227L, 95L) */ ((double) (
							8.954
						))
					))
				))
			))
		) && (
			/* 444L, 235L, 738L, 761L, 1232L) */ ((
				/* 445L, 201L, 213L, 739L, 762L, 1233L) */ ((
					/* 446L, 196L, 214L, 740L, 763L, 1234L) */ (min (
						/* 446L, 196L, 214L, 740L, 763L, 1234L) */ (
							/* 447L, 193L, 215L, 741L, 764L, 1235L) */ ((
								var_1_16
							) * (
								200.7f
							))
						) , (
							/* 450L, 195L, 218L, 744L, 767L, 1238L) */ (abs (
								var_1_14
							))
						)
					))
				) <= (
					/* 452L, 200L, 220L, 746L, 769L, 1240L) */ ((
						/* 453L, 198L, 221L, 747L, 770L, 1241L) */ (- (
							var_1_14
						))
					) / (
						var_1_18
					))
				))
			) ? (
				/* 456L, 229L, 750L, 773L, 1244L) */ ((
					var_1_17
				) == (
					/* 456L, 229L, 750L, 773L, 1244L) */ ((unsigned long int) (
						/* 459L, 228L, 753L, 776L, 1247L) */ ((
							var_1_19
						) - (
							var_1_15
						))
					))
				))
			) : (
				/* 462L, 233L, 756L, 779L, 1250L) */ ((
					var_1_17
				) == (
					/* 462L, 233L, 756L, 779L, 1250L) */ ((unsigned long int) (
						var_1_19
					))
				))
			))
		))
	) && (
		/* 467L, 273L, 818L, 835L, 1255L) */ ((
			/* 468L, 246L, 254L, 819L, 836L, 1256L) */ ((
				/* 469L, 242L, 255L, 820L, 837L, 1257L) */ (max (
					/* 469L, 242L, 255L, 820L, 837L, 1257L) */ (
						var_1_13
					) , (
						var_1_12
					)
				))
			) <= (
				/* 472L, 245L, 258L, 823L, 840L, 1260L) */ ((
					var_1_15
				) << (
					var_1_17
				))
			))
		) ? (
			/* 475L, 271L, 826L, 843L, 1263L) */ ((
				var_1_1
			) ? (
				/* 477L, 269L, 828L, 845L, 1265L) */ ((
					var_1_20
				) == (
					/* 477L, 269L, 828L, 845L, 1265L) */ ((float) (
						/* 480L, 268L, 831L, 848L, 1268L) */ (max (
							/* 480L, 268L, 831L, 848L, 1268L) */ (
								var_1_16
							) , (
								7.9f
							)
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
	/* 485L, 281L, 865L, 871L, 1273L) */ ((
		var_1_21
	) == (
		/* 485L, 281L, 865L, 871L, 1273L) */ ((signed char) (
			var_1_15
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
