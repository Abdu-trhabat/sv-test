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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch11Filler_PE_CN.c", 13, "reach_error"); }
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
unsigned char var_1_2 = 0;
unsigned char var_1_3 = 0;
signed char var_1_4 = 5;
signed char var_1_7 = 0;
signed char var_1_8 = 16;
signed char var_1_9 = 4;
unsigned long int var_1_10 = 128;
unsigned long int var_1_11 = 1422462314;
signed short int var_1_12 = 8;
float var_1_13 = 49.5;
float var_1_14 = 0.4;
signed short int var_1_15 = -50;
unsigned long int var_1_16 = 1;
unsigned long int var_1_17 = 3609236770;
unsigned long int var_1_18 = 2902762324;
double var_1_19 = 3.8;
double var_1_20 = 255.75;
unsigned short int var_1_21 = 0;
signed char var_1_22 = -8;
signed long int var_1_23 = -32;
signed char var_1_24 = -128;
float var_1_25 = 3.25;
float var_1_26 = -0.75;
float var_1_27 = 255.6;
unsigned char var_1_28 = 0;
signed char var_1_29 = 2;
signed char var_1_30 = -50;
signed char var_1_31 = -16;
signed char var_1_32 = 10;
signed char var_1_33 = 2;
signed char var_1_34 = 10;
signed char var_1_35 = 64;
signed char var_1_36 = 100;
signed long int var_1_37 = -100;
signed char var_1_38 = 4;
signed char var_1_39 = -5;
unsigned char var_1_40 = 32;
unsigned char var_1_41 = 2;
unsigned char var_1_42 = 64;
signed char var_1_43 = -1;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_10 = 128;
unsigned long int last_1_var_1_16 = 1;
double last_1_var_1_19 = 3.8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch11Filler_PE_CN
	unsigned long int stepLocal_1 = last_1_var_1_16;
	signed char stepLocal_0 = var_1_8;
	/* 32L, 101L, 461L, 483L, 998L, 1093L) */ if (/* 11L, 61L, 62L, 462L, 484L, 977L, 1073L) */ ((last_1_var_1_10) != (stepLocal_1))) {
		/* 27L, 95L, 465L, 487L, 993L, 1088L) */ if (/* 15L, 70L, 71L, 466L, 488L, 981L, 1076L) */ ((stepLocal_0) <= (last_1_var_1_10))) {
			/* 26L, 93L, 469L, 491L, 992L, 1087L) */ if (/* 21L, 80L, 81L, 470L, 492L, 987L, 1082L) */ ((/* 18L, 78L, 82L, 471L, 493L, 984L, 1079L) */ (- (last_1_var_1_19))) >= (last_1_var_1_19))) {
				/* 25L, 92L, 474L, 496L, 991L, 1086L) */ var_1_12 = (
					var_1_8
				);
			}
		}
	} else {
		/* 31L, 100L, 478L, 500L, 997L, 1092L) */ var_1_12 = (
			var_1_9
		);
	}


	// From: Req1Batch11Filler_PE_CN
	/* 1029L, 8L, 251L, 261L) */ var_1_1 = (
		/* 1032L, 7L, 254L, 264L) */ ((
			var_1_2
		) || (
			/* 1034L, 6L, 256L, 266L) */ (! (
				var_1_3
			))
		))
	);


	// From: Req3Batch11Filler_PE_CN
	/* 1054L, 52L, 418L, 429L) */ var_1_10 = (
		/* 1057L, 51L, 421L, 432L) */ ((
			4027026809u
		) - (
			/* 1059L, 50L, 423L, 434L) */ ((
				/* 1060L, 48L, 424L, 435L) */ (abs (
					var_1_11
				))
			) - (
				var_1_7
			))
		))
	);


	// From: Req5Batch11Filler_PE_CN
	/* 1098L, 149L, 593L, 615L) */ if (var_1_1) {
		/* 1100L, 143L, 595L, 617L) */ if (/* 1101L, 120L, 121L, 596L, 618L) */ ((var_1_13) >= (var_1_14))) {
			/* 1104L, 137L, 599L, 621L) */ if (/* 1105L, 128L, 129L, 600L, 622L) */ (! (var_1_3))) {
				/* 1107L, 136L, 602L, 624L) */ var_1_15 = (
					var_1_8
				);
			}
		} else {
			/* 1111L, 142L, 606L, 628L) */ var_1_15 = (
				var_1_7
			);
		}
	} else {
		/* 1115L, 148L, 610L, 632L) */ var_1_15 = (
			5
		);
	}


	// From: Req7Batch11Filler_PE_CN
	/* 1155L, 213L, 886L, 895L) */ var_1_19 = (
		/* 1158L, 212L, 889L, 898L) */ (min (
			/* 1158L, 212L, 889L, 898L) */ (
				/* 1159L, 210L, 890L, 899L) */ (abs (
					var_1_20
				))
			) , (
				1.4
			)
		))
	);


	// From: Req8Batch11Filler_PE_CN
	unsigned char stepLocal_2 = var_1_1;
	/* 1176L, 245L, 921L, 934L) */ if (/* 1171L, 226L, 227L, 922L, 935L) */ ((/* 1170L, 224L, 228L, 923L, 936L) */ ((var_1_10) == (/* 1169L, 223L, 230L, 925L, 938L) */ ((var_1_8) - (var_1_9))))) && (stepLocal_2))) {
		/* 1175L, 244L, 929L, 942L) */ var_1_21 = (
			var_1_9
		);
	}


	// From: Req2Batch11Filler_PE_CN
	/* 1038L, 36L, 354L, 370L) */ if (/* 1039L, 19L, 20L, 355L, 371L) */ ((var_1_21) == (var_1_15))) {
		/* 1042L, 35L, 358L, 374L) */ var_1_4 = (
			/* 1045L, 34L, 361L, 377L) */ ((
				/* 1046L, 32L, 362L, 378L) */ ((
					8
				) + (
					/* 1048L, 31L, 364L, 380L) */ (max (
						/* 1048L, 31L, 364L, 380L) */ (
							var_1_7
						) , (
							var_1_8
						)
					))
				))
			) - (
				var_1_9
			))
		);
	}


	// From: Req6Batch11Filler_PE_CN
	/* 1121L, 199L, 750L, 784L) */ if (/* 1122L, 157L, 158L, 751L, 785L) */ ((var_1_13) != (var_1_14))) {
		/* 1125L, 171L, 754L, 788L) */ var_1_16 = (
			/* 1128L, 170L, 757L, 791L) */ ((
				/* 1129L, 168L, 758L, 792L) */ (min (
					/* 1129L, 168L, 758L, 792L) */ (
						var_1_11
					) , (
						var_1_7
					)
				))
			) + (
				var_1_8
			))
		);
	} else {
		/* 1133L, 197L, 762L, 796L) */ if (/* 1134L, 174L, 175L, 763L, 797L) */ ((var_1_15) > (var_1_12))) {
			/* 1137L, 188L, 766L, 800L) */ var_1_16 = (
				/* 1140L, 187L, 769L, 803L) */ ((
					var_1_17
				) - (
					/* 1142L, 186L, 771L, 805L) */ ((
						var_1_11
					) - (
						var_1_8
					))
				))
			);
		} else {
			/* 1145L, 196L, 774L, 808L) */ var_1_16 = (
				/* 1148L, 195L, 777L, 811L) */ ((
					/* 1149L, 193L, 778L, 812L) */ (max (
						/* 1149L, 193L, 778L, 812L) */ (
							var_1_17
						) , (
							var_1_18
						)
					))
				) - (
					var_1_9
				))
			);
		}
	}


	// From: CodeObject1
	/* 68L) */ var_1_22 = (
		/* 67L) */ (abs (
			-25
		))
	);


	// From: CodeObject2
	/* 108L) */ if (/* 76L, 75L) */ ((var_1_22) > (var_1_24))) {
		/* 106L) */ if (/* 86L, 85L) */ ((/* 87L, 83L) */ (~ (var_1_22))) <= (128))) {
			/* 97L) */ var_1_23 = (
				var_1_24
			);
		} else {
			/* 105L) */ var_1_23 = (
				var_1_22
			);
		}
	}


	// From: CodeObject3
	/* 153L) */ if (/* 121L, 120L) */ ((var_1_23) <= (var_1_24))) {
		/* 135L) */ var_1_25 = (
			/* 134L) */ (min (
				/* 134L) */ (
					/* 131L) */ (max (
						/* 131L) */ (
							var_1_26
						) , (
							49.5f
						)
					))
				) , (
					/* 133L) */ (abs (
						var_1_27
					))
				)
			))
		);
	} else {
		/* 151L) */ if (var_1_28) {
			/* 142L) */ var_1_25 = (
				var_1_26
			);
		} else {
			/* 150L) */ var_1_25 = (
				64.75f
			);
		}
	}


	// From: CodeObject4
	/* 208L) */ if (/* 164L, 163L) */ ((var_1_23) <= (var_1_22))) {
		/* 199L) */ if (var_1_28) {
			/* 197L) */ if (/* 179L, 178L) */ ((var_1_22) <= (/* 181L, 177L) */ (abs (/* 182L, 176L) */ (min (/* 182L, 176L) */ (var_1_30) , (var_1_31)))))))) {
				/* 196L) */ var_1_29 = (
					/* 195L) */ (min (
						/* 195L) */ (
							var_1_32
						) , (
							var_1_33
						)
					))
				);
			}
		}
	} else {
		/* 207L) */ var_1_29 = (
			/* 206L) */ (abs (
				/* 205L) */ ((
					var_1_34
				) - (
					var_1_35
				))
			))
		);
	}


	// From: CodeObject5
	/* 281L) */ if (/* 217L, 216L) */ ((var_1_28) || (/* 219L, 215L) */ ((var_1_33) <= (var_1_23))))) {
		/* 275L) */ if (/* 233L, 232L) */ ((/* 234L, 230L) */ (abs (/* 235L, 229L) */ (max (/* 235L, 229L) */ (var_1_23) , (var_1_35)))))) <= (var_1_37))) {
			/* 269L) */ if (/* 249L, 248L) */ ((var_1_35) > (/* 251L, 247L) */ (abs (var_1_31))))) {
				/* 264L) */ var_1_36 = (
					/* 263L) */ (abs (
						/* 262L) */ ((
							var_1_38
						) + (
							/* 261L) */ (abs (
								var_1_39
							))
						))
					))
				);
			} else {
				/* 268L) */ var_1_36 = (
					var_1_32
				);
			}
		} else {
			/* 274L) */ var_1_36 = (
				var_1_39
			);
		}
	} else {
		/* 280L) */ var_1_36 = (
			var_1_35
		);
	}


	// From: CodeObject6
	/* 290L) */ var_1_40 = (
		var_1_41
	);


	// From: CodeObject7
	/* 298L) */ var_1_42 = (
		var_1_35
	);


	// From: CodeObject8
	/* 306L) */ var_1_43 = (
		var_1_32
	);
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 0);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 63);
	var_1_8 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 63);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 126);
	var_1_11 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_11 >= 1073741823);
	assume_abort_if_not(var_1_11 <= 2147483647);
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= -922337.2036854776000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_17 >= 2147483647);
	assume_abort_if_not(var_1_17 <= 4294967294);
	var_1_18 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_18 >= 2147483647);
	assume_abort_if_not(var_1_18 <= 4294967294);
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= -922337.2036854766000e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854766000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_24 >= -128);
	assume_abort_if_not(var_1_24 <= 127);
	var_1_26 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_26 >= -922337.2036854766000e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854766000e+12F && var_1_26 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_27 >= -922337.2036854766000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854766000e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 1);
	var_1_30 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_30 >= -127);
	assume_abort_if_not(var_1_30 <= 127);
	var_1_31 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_31 >= -127);
	assume_abort_if_not(var_1_31 <= 127);
	var_1_32 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_32 >= -127);
	assume_abort_if_not(var_1_32 <= 126);
	var_1_33 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_33 >= -127);
	assume_abort_if_not(var_1_33 <= 126);
	var_1_34 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 126);
	var_1_35 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 126);
	var_1_37 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_37 >= -2147483648);
	assume_abort_if_not(var_1_37 <= 2147483647);
	var_1_38 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_38 >= -63);
	assume_abort_if_not(var_1_38 <= 63);
	var_1_39 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_39 >= -63);
	assume_abort_if_not(var_1_39 <= 63);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 254);
}



void updateLastVariables(void) {
	last_1_var_1_10 = var_1_10;
	last_1_var_1_16 = var_1_16;
	last_1_var_1_19 = var_1_19;
}

int property(void) {
	if (/* 321L, 19L, 23L, 387L, 403L, 1192L) */ ((var_1_21) == (var_1_15))) {
	}
	if (/* 347L, 61L, 65L, 506L, 528L, 1004L, 1218L, 39L) */ ((last_1_var_1_10) != (last_1_var_1_16))) {
		if (/* 353L, 70L, 74L, 510L, 532L, 1008L, 1224L, 43L) */ ((var_1_8) <= (last_1_var_1_10))) {
			if (/* 358L, 80L, 85L, 514L, 536L, 1014L, 1229L, 49L) */ ((/* 359L, 78L, 86L, 515L, 537L, 1011L, 1230L, 46L) */ (- (last_1_var_1_19))) >= (last_1_var_1_19))) {
			}
		}
	} else {
	}
	if (var_1_1) {
		if (/* 376L, 120L, 124L, 640L, 662L, 1247L) */ ((var_1_13) >= (var_1_14))) {
			if (/* 380L, 128L, 131L, 644L, 666L, 1251L) */ (! (var_1_3))) {
			}
		} else {
		}
	} else {
	}
	if (/* 397L, 157L, 161L, 819L, 853L, 1268L) */ ((var_1_13) != (var_1_14))) {
	} else {
		if (/* 409L, 174L, 178L, 831L, 865L, 1280L) */ ((var_1_15) > (var_1_12))) {
		} else {
		}
	}
	if (/* 439L, 226L, 234L, 948L, 961L, 1310L) */ ((/* 440L, 224L, 235L, 949L, 962L, 1311L) */ ((var_1_10) == (/* 442L, 223L, 237L, 951L, 964L, 1313L) */ ((var_1_8) - (var_1_9))))) && (var_1_1))) {
	}
	return /* 457L) */ ((
	/* 456L) */ ((
		/* 455L) */ ((
			/* 454L) */ ((
				/* 453L) */ ((
					/* 452L) */ ((
						/* 451L) */ ((
							/* 311L, 8L, 271L, 281L, 1182L) */ ((
								var_1_1
							) == (
								/* 311L, 8L, 271L, 281L, 1182L) */ ((unsigned char) (
									/* 314L, 7L, 274L, 284L, 1185L) */ ((
										var_1_2
									) || (
										/* 316L, 6L, 276L, 286L, 1187L) */ (! (
											var_1_3
										))
									))
								))
							))
						) && (
							/* 320L, 37L, 386L, 402L, 1191L) */ ((
								/* 321L, 19L, 23L, 387L, 403L, 1192L) */ ((
									var_1_21
								) == (
									var_1_15
								))
							) ? (
								/* 324L, 35L, 390L, 406L, 1195L) */ ((
									var_1_4
								) == (
									/* 324L, 35L, 390L, 406L, 1195L) */ ((signed char) (
										/* 327L, 34L, 393L, 409L, 1198L) */ ((
											/* 328L, 32L, 394L, 410L, 1199L) */ ((
												8
											) + (
												/* 330L, 31L, 396L, 412L, 1201L) */ (max (
													/* 330L, 31L, 396L, 412L, 1201L) */ (
														var_1_7
													) , (
														var_1_8
													)
												))
											))
										) - (
											var_1_9
										))
									))
								))
							) : (
								1
							))
						))
					) && (
						/* 336L, 52L, 440L, 451L, 1207L) */ ((
							var_1_10
						) == (
							/* 336L, 52L, 440L, 451L, 1207L) */ ((unsigned long int) (
								/* 339L, 51L, 443L, 454L, 1210L) */ ((
									4027026809u
								) - (
									/* 341L, 50L, 445L, 456L, 1212L) */ ((
										/* 342L, 48L, 446L, 457L, 1213L) */ (abs (
											var_1_11
										))
									) - (
										var_1_7
									))
								))
							))
						))
					))
				) && (
					/* 346L, 102L, 505L, 527L, 1025L, 1217L, 60L) */ ((
						/* 347L, 61L, 65L, 506L, 528L, 1004L, 1218L, 39L) */ ((
							last_1_var_1_10
						) != (
							last_1_var_1_16
						))
					) ? (
						/* 352L, 96L, 509L, 531L, 1020L, 1223L, 55L) */ ((
							/* 353L, 70L, 74L, 510L, 532L, 1008L, 1224L, 43L) */ ((
								var_1_8
							) <= (
								last_1_var_1_10
							))
						) ? (
							/* 357L, 94L, 513L, 535L, 1019L, 1228L, 54L) */ ((
								/* 358L, 80L, 85L, 514L, 536L, 1014L, 1229L, 49L) */ ((
									/* 359L, 78L, 86L, 515L, 537L, 1011L, 1230L, 46L) */ (- (
										last_1_var_1_19
									))
								) >= (
									last_1_var_1_19
								))
							) ? (
								/* 364L, 92L, 518L, 540L, 1018L, 1235L, 53L) */ ((
									var_1_12
								) == (
									/* 364L, 92L, 518L, 540L, 1018L, 1235L, 53L) */ ((signed short int) (
										var_1_8
									))
								))
							) : (
								1
							))
						) : (
							1
						))
					) : (
						/* 368L, 100L, 522L, 544L, 1024L, 1239L, 59L) */ ((
							var_1_12
						) == (
							/* 368L, 100L, 522L, 544L, 1024L, 1239L, 59L) */ ((signed short int) (
								var_1_9
							))
						))
					))
				))
			) && (
				/* 373L, 150L, 637L, 659L, 1244L) */ ((
					var_1_1
				) ? (
					/* 375L, 144L, 639L, 661L, 1246L) */ ((
						/* 376L, 120L, 124L, 640L, 662L, 1247L) */ ((
							var_1_13
						) >= (
							var_1_14
						))
					) ? (
						/* 379L, 138L, 643L, 665L, 1250L) */ ((
							/* 380L, 128L, 131L, 644L, 666L, 1251L) */ (! (
								var_1_3
							))
						) ? (
							/* 382L, 136L, 646L, 668L, 1253L) */ ((
								var_1_15
							) == (
								/* 382L, 136L, 646L, 668L, 1253L) */ ((signed short int) (
									var_1_8
								))
							))
						) : (
							1
						))
					) : (
						/* 386L, 142L, 650L, 672L, 1257L) */ ((
							var_1_15
						) == (
							/* 386L, 142L, 650L, 672L, 1257L) */ ((signed short int) (
								var_1_7
							))
						))
					))
				) : (
					/* 390L, 148L, 654L, 676L, 1261L) */ ((
						var_1_15
					) == (
						/* 390L, 148L, 654L, 676L, 1261L) */ ((signed short int) (
							5
						))
					))
				))
			))
		) && (
			/* 396L, 200L, 818L, 852L, 1267L) */ ((
				/* 397L, 157L, 161L, 819L, 853L, 1268L) */ ((
					var_1_13
				) != (
					var_1_14
				))
			) ? (
				/* 400L, 171L, 822L, 856L, 1271L) */ ((
					var_1_16
				) == (
					/* 400L, 171L, 822L, 856L, 1271L) */ ((unsigned long int) (
						/* 403L, 170L, 825L, 859L, 1274L) */ ((
							/* 404L, 168L, 826L, 860L, 1275L) */ (min (
								/* 404L, 168L, 826L, 860L, 1275L) */ (
									var_1_11
								) , (
									var_1_7
								)
							))
						) + (
							var_1_8
						))
					))
				))
			) : (
				/* 408L, 198L, 830L, 864L, 1279L) */ ((
					/* 409L, 174L, 178L, 831L, 865L, 1280L) */ ((
						var_1_15
					) > (
						var_1_12
					))
				) ? (
					/* 412L, 188L, 834L, 868L, 1283L) */ ((
						var_1_16
					) == (
						/* 412L, 188L, 834L, 868L, 1283L) */ ((unsigned long int) (
							/* 415L, 187L, 837L, 871L, 1286L) */ ((
								var_1_17
							) - (
								/* 417L, 186L, 839L, 873L, 1288L) */ ((
									var_1_11
								) - (
									var_1_8
								))
							))
						))
					))
				) : (
					/* 420L, 196L, 842L, 876L, 1291L) */ ((
						var_1_16
					) == (
						/* 420L, 196L, 842L, 876L, 1291L) */ ((unsigned long int) (
							/* 423L, 195L, 845L, 879L, 1294L) */ ((
								/* 424L, 193L, 846L, 880L, 1295L) */ (max (
									/* 424L, 193L, 846L, 880L, 1295L) */ (
										var_1_17
									) , (
										var_1_18
									)
								))
							) - (
								var_1_9
							))
						))
					))
				))
			))
		))
	) && (
		/* 430L, 213L, 904L, 913L, 1301L) */ ((
			var_1_19
		) == (
			/* 430L, 213L, 904L, 913L, 1301L) */ ((double) (
				/* 433L, 212L, 907L, 916L, 1304L) */ (min (
					/* 433L, 212L, 907L, 916L, 1304L) */ (
						/* 434L, 210L, 908L, 917L, 1305L) */ (abs (
							var_1_20
						))
					) , (
						1.4
					)
				))
			))
		))
	))
) && (
	/* 438L, 246L, 947L, 960L, 1309L) */ ((
		/* 439L, 226L, 234L, 948L, 961L, 1310L) */ ((
			/* 440L, 224L, 235L, 949L, 962L, 1311L) */ ((
				var_1_10
			) == (
				/* 442L, 223L, 237L, 951L, 964L, 1313L) */ ((
					var_1_8
				) - (
					var_1_9
				))
			))
		) && (
			var_1_1
		))
	) ? (
		/* 446L, 244L, 955L, 968L, 1317L) */ ((
			var_1_21
		) == (
			/* 446L, 244L, 955L, 968L, 1317L) */ ((unsigned short int) (
				var_1_9
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
