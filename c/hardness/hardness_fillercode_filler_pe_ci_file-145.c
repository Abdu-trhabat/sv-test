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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch145Filler_PE_CI.c", 13, "reach_error"); }
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
signed short int var_1_1 = 50;
unsigned char var_1_2 = 0;
signed short int var_1_5 = 256;
signed short int var_1_6 = 2;
signed short int var_1_7 = 64;
signed short int var_1_8 = -50;
signed short int var_1_9 = 2;
signed long int var_1_10 = -16;
unsigned char var_1_11 = 1;
signed long int var_1_12 = 5;
unsigned short int var_1_13 = 32;
float var_1_14 = 10000000000.7;
float var_1_15 = 999.4;
unsigned char var_1_16 = 1;
unsigned char var_1_17 = 64;
unsigned char var_1_18 = 0;
unsigned long int var_1_19 = 8;
unsigned char var_1_20 = 1;
unsigned char var_1_21 = 100;
unsigned char var_1_22 = 128;
unsigned long int var_1_23 = 2;
unsigned long int var_1_24 = 4138893358;
unsigned char var_1_25 = 1;
unsigned char var_1_26 = 0;
unsigned char var_1_27 = 0;
unsigned long int var_1_28 = 256;
signed long int var_1_29 = 32;
signed long int var_1_30 = 1;
signed long int var_1_31 = 32;
unsigned long int var_1_33 = 8;
float var_1_34 = 999999999.5;
signed long int var_1_37 = -64;
float var_1_38 = 256.875;
signed long int var_1_39 = -256;
unsigned long int var_1_40 = 64;
signed long int var_1_42 = -200;
float var_1_43 = -0.8;
signed long int var_1_44 = 5;
float var_1_46 = 32.6;
float var_1_47 = 1.0E+15;
float var_1_48 = 100000000000.6;
signed long int var_1_49 = -1;
unsigned long int var_1_50 = 1;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_10 = -16;
unsigned char last_1_var_1_21 = 100;
unsigned long int last_1_var_1_23 = 2;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req8Batch145Filler_PE_CI
	/* 34L, 269L, 860L, 894L, 1029L, 1199L) */ if (/* 9L, 216L, 217L, 861L, 895L, 1004L, 1200L) */ ((last_1_var_1_23) >= (/* 8L, 215L, 219L, 863L, 897L, 1003L, 1203L) */ ((last_1_var_1_21) + (/* 7L, 214L, 221L, 865L, 899L, 1002L, 1206L) */ ((var_1_17) - (last_1_var_1_10))))))) {
		/* 29L, 263L, 868L, 902L, 1024L, 1210L) */ if (/* 12L, 233L, 234L, 869L, 903L, 1007L, 1211L) */ ((var_1_5) >= (var_1_18))) {
			/* 24L, 257L, 872L, 906L, 1019L, 1214L) */ if (/* 15L, 242L, 243L, 873L, 907L, 1010L, 1215L) */ ((var_1_14) == (var_1_15))) {
				/* 19L, 252L, 876L, 910L, 1014L, 1218L) */ var_1_25 = (
					0
				);
			} else {
				/* 23L, 256L, 880L, 914L, 1018L, 1222L) */ var_1_25 = (
					var_1_26
				);
			}
		} else {
			/* 28L, 262L, 884L, 918L, 1023L, 1226L) */ var_1_25 = (
				var_1_26
			);
		}
	} else {
		/* 33L, 268L, 888L, 922L, 1028L, 1230L) */ var_1_25 = (
			var_1_27
		);
	}


	// From: Req6Batch145Filler_PE_CI
	/* 1175L, 190L, 767L, 781L) */ if (/* 1176L, 175L, 176L, 768L, 782L) */ (! (var_1_25))) {
		/* 1178L, 185L, 770L, 784L) */ var_1_21 = (
			/* 1181L, 184L, 773L, 787L) */ ((
				var_1_22
			) - (
				var_1_20
			))
		);
	} else {
		/* 1184L, 189L, 776L, 790L) */ var_1_21 = (
			var_1_17
		);
	}


	// From: Req3Batch145Filler_PE_CI
	signed short int stepLocal_1 = var_1_9;
	/* 1144L, 113L, 575L, 596L) */ if (/* 1130L, 81L, 82L, 576L, 597L) */ ((/* 1128L, 79L, 83L, 577L, 598L) */ ((var_1_14) + (var_1_15))) > (10.5f))) {
		/* 1139L, 107L, 581L, 602L) */ if (/* 1132L, 94L, 95L, 582L, 603L) */ ((stepLocal_1) >= (var_1_8))) {
			/* 1138L, 106L, 585L, 606L) */ var_1_13 = (
				/* 1137L, 105L, 588L, 609L) */ ((
					37936
				) - (
					var_1_7
				))
			);
		}
	} else {
		/* 1143L, 112L, 591L, 612L) */ var_1_13 = (
			50
		);
	}


	// From: Req4Batch145Filler_PE_CI
	/* 1150L, 124L, 661L, 670L) */ var_1_16 = (
		/* 1153L, 123L, 664L, 673L) */ (min (
			/* 1153L, 123L, 664L, 673L) */ (
				var_1_17
			) , (
				var_1_18
			)
		))
	);


	// From: Req5Batch145Filler_PE_CI
	/* 1162L, 158L, 700L, 718L) */ if (/* 1163L, 139L, 140L, 701L, 719L) */ ((/* 1164L, 137L, 141L, 702L, 720L) */ (min (/* 1164L, 137L, 141L, 702L, 720L) */ (/* 1165L, 135L, 142L, 703L, 721L) */ ((var_1_18) >> (var_1_20))) , (var_1_5)))) < (var_1_17))) {
		/* 1170L, 157L, 708L, 726L) */ var_1_19 = (
			var_1_18
		);
	}


	// From: Req7Batch145Filler_PE_CI
	/* 1191L, 201L, 825L, 834L) */ var_1_23 = (
		/* 1194L, 200L, 828L, 837L) */ ((
			var_1_24
		) - (
			var_1_7
		))
	);


	// From: Req1Batch145Filler_PE_CI
	/* 1071L, 34L, 331L, 358L) */ if (var_1_25) {
		/* 1073L, 32L, 333L, 360L) */ if (/* 1074L, 7L, 8L, 334L, 361L) */ ((var_1_23) == (var_1_16))) {
			/* 1077L, 25L, 337L, 364L) */ var_1_1 = (
				/* 1080L, 24L, 340L, 367L) */ ((
					/* 1081L, 20L, 341L, 368L) */ ((
						/* 1082L, 18L, 342L, 369L) */ ((
							var_1_5
						) + (
							var_1_6
						))
					) + (
						var_1_7
					))
				) - (
					/* 1086L, 23L, 346L, 373L) */ (abs (
						/* 1087L, 22L, 347L, 374L) */ (abs (
							var_1_8
						))
					))
				))
			);
		} else {
			/* 1089L, 31L, 349L, 376L) */ var_1_1 = (
				/* 1092L, 30L, 352L, 379L) */ ((
					var_1_9
				) - (
					var_1_6
				))
			);
		}
	}


	// From: Req2Batch145Filler_PE_CI
	unsigned char stepLocal_0 = var_1_11;
	/* 1119L, 71L, 483L, 506L) */ if (/* 1100L, 46L, 47L, 484L, 507L) */ ((var_1_2) || (stepLocal_0))) {
		/* 1112L, 64L, 487L, 510L) */ var_1_10 = (
			/* 1111L, 63L, 490L, 513L) */ (max (
				/* 1111L, 63L, 490L, 513L) */ (
					/* 1105L, 57L, 491L, 514L) */ ((
						var_1_6
					) + (
						var_1_1
					))
				) , (
					/* 1110L, 62L, 494L, 517L) */ ((
						var_1_9
					) + (
						/* 1109L, 61L, 496L, 519L) */ ((
							var_1_5
						) - (
							var_1_12
						))
					))
				)
			))
		);
	} else {
		/* 1118L, 70L, 499L, 522L) */ var_1_10 = (
			/* 1117L, 69L, 502L, 525L) */ ((
				var_1_8
			) + (
				var_1_7
			))
		);
	}


	// From: CodeObject1
	/* 377L, 102L) */ if (/* 378L, 80L, 81L) */ ((/* 379L, 78L, 82L) */ (min (/* 379L, 78L, 82L) */ (var_1_29) , (var_1_30)))) <= (var_1_31))) {
		/* 383L, 97L) */ var_1_28 = (
			/* 386L, 96L) */ ((
				var_1_24
			) - (
				/* 388L, 95L) */ (abs (
					var_1_33
				))
			))
		);
	} else {
		/* 390L, 101L) */ var_1_28 = (
			var_1_24
		);
	}


	// From: CodeObject2
	/* 394L, 169L) */ if (var_1_2) {
		/* 396L, 163L) */ if (/* 397L, 111L, 112L) */ ((var_1_24) >= (var_1_33))) {
			/* 400L, 161L) */ if (/* 401L, 127L, 128L) */ ((var_1_11) && (/* 403L, 126L, 130L) */ ((-128) > (/* 405L, 125L, 132L) */ (~ (var_1_12))))))) {
				/* 407L, 159L) */ if (/* 408L, 144L, 145L) */ ((var_1_37) <= (/* 410L, 143L, 147L) */ ((var_1_24) ^ (var_1_12))))) {
					/* 413L, 158L) */ var_1_34 = (
						var_1_38
					);
				}
			}
		}
	} else {
		/* 417L, 168L) */ var_1_34 = (
			var_1_38
		);
	}


	// From: CodeObject3
	/* 421L, 247L) */ if (/* 422L, 183L, 184L) */ ((/* 423L, 179L, 185L) */ (abs (var_1_33))) <= (/* 425L, 182L, 187L) */ ((var_1_24) - (var_1_40))))) {
		/* 428L, 203L) */ var_1_39 = (
			/* 431L, 202L) */ (min (
				/* 431L, 202L) */ (
					/* 432L, 200L) */ (min (
						/* 432L, 200L) */ (
							var_1_12
						) , (
							-16
						)
					))
				) , (
					var_1_12
				)
			))
		);
	} else {
		/* 436L, 245L) */ if (var_1_11) {
			/* 438L, 239L) */ if (var_1_26) {
				/* 440L, 237L) */ if (/* 441L, 214L, 215L) */ ((/* 442L, 212L, 216L) */ ((var_1_38) / (var_1_43))) >= (var_1_14))) {
					/* 446L, 228L) */ var_1_39 = (
						var_1_12
					);
				} else {
					/* 450L, 236L) */ var_1_39 = (
						/* 453L, 235L) */ ((
							/* 454L, 233L) */ (abs (
								/* 455L, 232L) */ (abs (
									var_1_12
								))
							))
						) + (
							var_1_12
						))
					);
				}
			}
		} else {
			/* 458L, 244L) */ var_1_39 = (
				var_1_12
			);
		}
	}


	// From: CodeObject4
	/* 463L, 254L) */ var_1_46 = (
		var_1_38
	);


	// From: CodeObject5
	/* 467L, 285L) */ if (var_1_25) {
		/* 469L, 283L) */ if (/* 470L, 266L, 267L) */ ((/* 471L, 264L, 268L) */ ((-64) / (var_1_37))) < (var_1_23))) {
			/* 475L, 282L) */ var_1_47 = (
				/* 478L, 281L) */ (min (
					/* 478L, 281L) */ (
						var_1_38
					) , (
						var_1_48
					)
				))
			);
		}
	}


	// From: CodeObject6
	/* 497L, 324L) */ if (/* 498L, 293L, 294L) */ ((/* 499L, 291L, 295L) */ ((var_1_40) >> (var_1_50))) == (var_1_23))) {
		/* 503L, 322L) */ if (/* 504L, 306L, 307L) */ ((var_1_42) < (var_1_44))) {
			/* 507L, 320L) */ if (var_1_25) {
				/* 509L, 319L) */ var_1_49 = (
					-8
				);
			}
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 8192);
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 8191);
	var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 16383);
	var_1_8 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_8 >= -32766);
	assume_abort_if_not(var_1_8 <= 32766);
	var_1_9 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_9 >= -1);
	assume_abort_if_not(var_1_9 <= 32766);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 1073741823);
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= -922337.2036854776000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= -922337.2036854776000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 254);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 254);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 1);
	assume_abort_if_not(var_1_20 <= 7);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 127);
	assume_abort_if_not(var_1_22 <= 254);
	var_1_24 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_24 >= 2147483647);
	assume_abort_if_not(var_1_24 <= 4294967294);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 0);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 1);
	assume_abort_if_not(var_1_27 <= 1);
	var_1_29 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_29 >= -2147483648);
	assume_abort_if_not(var_1_29 <= 2147483647);
	var_1_30 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_30 >= -2147483648);
	assume_abort_if_not(var_1_30 <= 2147483647);
	var_1_31 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_31 >= -2147483648);
	assume_abort_if_not(var_1_31 <= 2147483647);
	var_1_33 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 2147483647);
	var_1_37 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_37 >= -2147483648);
	assume_abort_if_not(var_1_37 <= 2147483647);
	assume_abort_if_not(var_1_37 != 0);
	var_1_38 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_38 >= -922337.2036854766000e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854766000e+12F && var_1_38 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 2147483647);
	var_1_42 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_42 >= -2147483647);
	assume_abort_if_not(var_1_42 <= 2147483646);
	var_1_43 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_43 >= -922337.2036854776000e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854776000e+12F && var_1_43 >= 1.0e-20F ));
	assume_abort_if_not(var_1_43 != 0.0F);
	var_1_44 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_44 >= -1073741823);
	assume_abort_if_not(var_1_44 <= 1073741823);
	var_1_48 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_48 >= -922337.2036854766000e+13F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 9223372.036854766000e+12F && var_1_48 >= 1.0e-20F ));
	var_1_50 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_50 >= 1);
	assume_abort_if_not(var_1_50 <= 31);
}



void updateLastVariables(void) {
	last_1_var_1_10 = var_1_10;
	last_1_var_1_21 = var_1_21;
	last_1_var_1_23 = var_1_23;
}

int property(void) {
	if (var_1_25) {
		if (/* 518L, 7L, 11L, 388L, 415L, 1240L) */ ((var_1_23) == (var_1_16))) {
		} else {
		}
	}
	if (/* 541L, 46L, 50L, 530L, 553L, 1263L) */ ((var_1_2) || (var_1_11))) {
	} else {
	}
	if (/* 564L, 81L, 87L, 618L, 639L, 1286L) */ ((/* 565L, 79L, 88L, 619L, 640L, 1287L) */ ((var_1_14) + (var_1_15))) > (10.5f))) {
		if (/* 570L, 94L, 98L, 624L, 645L, 1292L) */ ((var_1_9) >= (var_1_8))) {
		}
	} else {
	}
	if (/* 599L, 139L, 147L, 737L, 755L, 1321L) */ ((/* 600L, 137L, 148L, 738L, 756L, 1322L) */ (min (/* 600L, 137L, 148L, 738L, 756L, 1322L) */ (/* 601L, 135L, 149L, 739L, 757L, 1323L) */ ((var_1_18) >> (var_1_20))) , (var_1_5)))) < (var_1_17))) {
	}
	if (/* 612L, 175L, 178L, 796L, 810L, 1334L) */ (! (var_1_25))) {
	} else {
	}
	if (/* 636L, 216L, 224L, 929L, 963L, 1041L, 1358L, 46L) */ ((last_1_var_1_23) >= (/* 639L, 215L, 226L, 931L, 965L, 1040L, 1361L, 45L) */ ((last_1_var_1_21) + (/* 642L, 214L, 228L, 933L, 967L, 1039L, 1364L, 44L) */ ((var_1_17) - (last_1_var_1_10))))))) {
		if (/* 647L, 233L, 237L, 937L, 971L, 1044L, 1369L, 49L) */ ((var_1_5) >= (var_1_18))) {
			if (/* 651L, 242L, 246L, 941L, 975L, 1047L, 1373L, 52L) */ ((var_1_14) == (var_1_15))) {
			} else {
			}
		} else {
		}
	} else {
	}
	return /* 677L) */ ((
	/* 676L) */ ((
		/* 675L) */ ((
			/* 674L) */ ((
				/* 673L) */ ((
					/* 672L) */ ((
						/* 671L) */ ((
							/* 515L, 35L, 385L, 412L, 1237L) */ ((
								var_1_25
							) ? (
								/* 517L, 33L, 387L, 414L, 1239L) */ ((
									/* 518L, 7L, 11L, 388L, 415L, 1240L) */ ((
										var_1_23
									) == (
										var_1_16
									))
								) ? (
									/* 521L, 25L, 391L, 418L, 1243L) */ ((
										var_1_1
									) == (
										/* 521L, 25L, 391L, 418L, 1243L) */ ((signed short int) (
											/* 524L, 24L, 394L, 421L, 1246L) */ ((
												/* 525L, 20L, 395L, 422L, 1247L) */ ((
													/* 526L, 18L, 396L, 423L, 1248L) */ ((
														var_1_5
													) + (
														var_1_6
													))
												) + (
													var_1_7
												))
											) - (
												/* 530L, 23L, 400L, 427L, 1252L) */ (abs (
													/* 531L, 22L, 401L, 428L, 1253L) */ (abs (
														var_1_8
													))
												))
											))
										))
									))
								) : (
									/* 533L, 31L, 403L, 430L, 1255L) */ ((
										var_1_1
									) == (
										/* 533L, 31L, 403L, 430L, 1255L) */ ((signed short int) (
											/* 536L, 30L, 406L, 433L, 1258L) */ ((
												var_1_9
											) - (
												var_1_6
											))
										))
									))
								))
							) : (
								1
							))
						) && (
							/* 540L, 72L, 529L, 552L, 1262L) */ ((
								/* 541L, 46L, 50L, 530L, 553L, 1263L) */ ((
									var_1_2
								) || (
									var_1_11
								))
							) ? (
								/* 544L, 64L, 533L, 556L, 1266L) */ ((
									var_1_10
								) == (
									/* 544L, 64L, 533L, 556L, 1266L) */ ((signed long int) (
										/* 547L, 63L, 536L, 559L, 1269L) */ (max (
											/* 547L, 63L, 536L, 559L, 1269L) */ (
												/* 548L, 57L, 537L, 560L, 1270L) */ ((
													var_1_6
												) + (
													var_1_1
												))
											) , (
												/* 551L, 62L, 540L, 563L, 1273L) */ ((
													var_1_9
												) + (
													/* 553L, 61L, 542L, 565L, 1275L) */ ((
														var_1_5
													) - (
														var_1_12
													))
												))
											)
										))
									))
								))
							) : (
								/* 556L, 70L, 545L, 568L, 1278L) */ ((
									var_1_10
								) == (
									/* 556L, 70L, 545L, 568L, 1278L) */ ((signed long int) (
										/* 559L, 69L, 548L, 571L, 1281L) */ ((
											var_1_8
										) + (
											var_1_7
										))
									))
								))
							))
						))
					) && (
						/* 563L, 114L, 617L, 638L, 1285L) */ ((
							/* 564L, 81L, 87L, 618L, 639L, 1286L) */ ((
								/* 565L, 79L, 88L, 619L, 640L, 1287L) */ ((
									var_1_14
								) + (
									var_1_15
								))
							) > (
								10.5f
							))
						) ? (
							/* 569L, 108L, 623L, 644L, 1291L) */ ((
								/* 570L, 94L, 98L, 624L, 645L, 1292L) */ ((
									var_1_9
								) >= (
									var_1_8
								))
							) ? (
								/* 573L, 106L, 627L, 648L, 1295L) */ ((
									var_1_13
								) == (
									/* 573L, 106L, 627L, 648L, 1295L) */ ((unsigned short int) (
										/* 576L, 105L, 630L, 651L, 1298L) */ ((
											37936
										) - (
											var_1_7
										))
									))
								))
							) : (
								1
							))
						) : (
							/* 579L, 112L, 633L, 654L, 1301L) */ ((
								var_1_13
							) == (
								/* 579L, 112L, 633L, 654L, 1301L) */ ((unsigned short int) (
									50
								))
							))
						))
					))
				) && (
					/* 586L, 124L, 679L, 688L, 1308L) */ ((
						var_1_16
					) == (
						/* 586L, 124L, 679L, 688L, 1308L) */ ((unsigned char) (
							/* 589L, 123L, 682L, 691L, 1311L) */ (min (
								/* 589L, 123L, 682L, 691L, 1311L) */ (
									var_1_17
								) , (
									var_1_18
								)
							))
						))
					))
				))
			) && (
				/* 598L, 159L, 736L, 754L, 1320L) */ ((
					/* 599L, 139L, 147L, 737L, 755L, 1321L) */ ((
						/* 600L, 137L, 148L, 738L, 756L, 1322L) */ (min (
							/* 600L, 137L, 148L, 738L, 756L, 1322L) */ (
								/* 601L, 135L, 149L, 739L, 757L, 1323L) */ ((
									var_1_18
								) >> (
									var_1_20
								))
							) , (
								var_1_5
							)
						))
					) < (
						var_1_17
					))
				) ? (
					/* 606L, 157L, 744L, 762L, 1328L) */ ((
						var_1_19
					) == (
						/* 606L, 157L, 744L, 762L, 1328L) */ ((unsigned long int) (
							var_1_18
						))
					))
				) : (
					1
				))
			))
		) && (
			/* 611L, 191L, 795L, 809L, 1333L) */ ((
				/* 612L, 175L, 178L, 796L, 810L, 1334L) */ (! (
					var_1_25
				))
			) ? (
				/* 614L, 185L, 798L, 812L, 1336L) */ ((
					var_1_21
				) == (
					/* 614L, 185L, 798L, 812L, 1336L) */ ((unsigned char) (
						/* 617L, 184L, 801L, 815L, 1339L) */ ((
							var_1_22
						) - (
							var_1_20
						))
					))
				))
			) : (
				/* 620L, 189L, 804L, 818L, 1342L) */ ((
					var_1_21
				) == (
					/* 620L, 189L, 804L, 818L, 1342L) */ ((unsigned char) (
						var_1_17
					))
				))
			))
		))
	) && (
		/* 627L, 201L, 843L, 852L, 1349L) */ ((
			var_1_23
		) == (
			/* 627L, 201L, 843L, 852L, 1349L) */ ((unsigned long int) (
				/* 630L, 200L, 846L, 855L, 1352L) */ ((
					var_1_24
				) - (
					var_1_7
				))
			))
		))
	))
) && (
	/* 635L, 270L, 928L, 962L, 1066L, 1357L, 71L) */ ((
		/* 636L, 216L, 224L, 929L, 963L, 1041L, 1358L, 46L) */ ((
			last_1_var_1_23
		) >= (
			/* 639L, 215L, 226L, 931L, 965L, 1040L, 1361L, 45L) */ ((
				last_1_var_1_21
			) + (
				/* 642L, 214L, 228L, 933L, 967L, 1039L, 1364L, 44L) */ ((
					var_1_17
				) - (
					last_1_var_1_10
				))
			))
		))
	) ? (
		/* 646L, 264L, 936L, 970L, 1061L, 1368L, 66L) */ ((
			/* 647L, 233L, 237L, 937L, 971L, 1044L, 1369L, 49L) */ ((
				var_1_5
			) >= (
				var_1_18
			))
		) ? (
			/* 650L, 258L, 940L, 974L, 1056L, 1372L, 61L) */ ((
				/* 651L, 242L, 246L, 941L, 975L, 1047L, 1373L, 52L) */ ((
					var_1_14
				) == (
					var_1_15
				))
			) ? (
				/* 654L, 252L, 944L, 978L, 1051L, 1376L, 56L) */ ((
					var_1_25
				) == (
					/* 654L, 252L, 944L, 978L, 1051L, 1376L, 56L) */ ((unsigned char) (
						0
					))
				))
			) : (
				/* 658L, 256L, 948L, 982L, 1055L, 1380L, 60L) */ ((
					var_1_25
				) == (
					/* 658L, 256L, 948L, 982L, 1055L, 1380L, 60L) */ ((unsigned char) (
						var_1_26
					))
				))
			))
		) : (
			/* 662L, 262L, 952L, 986L, 1060L, 1384L, 65L) */ ((
				var_1_25
			) == (
				/* 662L, 262L, 952L, 986L, 1060L, 1384L, 65L) */ ((unsigned char) (
					var_1_26
				))
			))
		))
	) : (
		/* 666L, 268L, 956L, 990L, 1065L, 1388L, 70L) */ ((
			var_1_25
		) == (
			/* 666L, 268L, 956L, 990L, 1065L, 1388L, 70L) */ ((unsigned char) (
				var_1_27
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
