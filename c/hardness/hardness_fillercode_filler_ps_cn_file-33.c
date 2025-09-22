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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch33Filler_PS_CN.c", 13, "reach_error"); }
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
unsigned short int var_1_1 = 8;
signed long int var_1_3 = 64;
signed long int var_1_4 = 50;
signed short int var_1_5 = -10;
signed short int var_1_6 = 25;
unsigned short int var_1_7 = 256;
double var_1_8 = 4.58;
double var_1_9 = -0.1;
signed short int var_1_11 = 0;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 1;
signed char var_1_14 = -16;
signed char var_1_15 = 8;
signed char var_1_16 = 8;
signed char var_1_17 = 10;
signed char var_1_18 = 0;
unsigned long int var_1_19 = 16;
signed char var_1_20 = 10;
signed char var_1_21 = -50;
unsigned short int var_1_22 = 64;
unsigned short int var_1_23 = 2;
unsigned short int var_1_24 = 0;
signed long int var_1_25 = 64;
unsigned short int var_1_26 = 256;
double var_1_27 = 128.4;
double var_1_28 = 32.75;
signed char var_1_29 = -32;
signed char var_1_30 = -1;
unsigned short int var_1_31 = 256;
unsigned char var_1_32 = 16;
unsigned short int var_1_33 = 47831;
unsigned short int var_1_34 = 8;
unsigned char var_1_35 = 5;
unsigned char var_1_36 = 0;
unsigned char var_1_37 = 128;
signed short int var_1_38 = 2;
signed short int var_1_39 = -50;
signed long int var_1_40 = 256;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_11 = 0;
unsigned char last_1_var_1_12 = 0;
unsigned long int last_1_var_1_19 = 16;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	/* 125L) */ if (/* 109L, 108L) */ ((/* 110L, 106L) */ (- (/* 111L, 105L) */ (max (/* 111L, 105L) */ (var_1_23) , (var_1_24)))))) == (var_1_25))) {
		/* 124L) */ var_1_22 = (
			var_1_26
		);
	}


	// From: CodeObject2
	/* 132L) */ var_1_27 = (
		var_1_28
	);


	// From: CodeObject3
	/* 152L) */ if (/* 140L, 139L) */ ((var_1_24) > (var_1_25))) {
		/* 151L) */ var_1_29 = (
			/* 150L) */ (max (
				/* 150L) */ (
					-2
				) , (
					var_1_30
				)
			))
		);
	}


	// From: CodeObject4
	/* 182L) */ if (/* 163L, 162L) */ ((0) <= (/* 165L, 161L) */ ((var_1_23) - (/* 167L, 160L) */ (min (/* 167L, 160L) */ (var_1_24) , (var_1_26)))))))) {
		/* 181L) */ var_1_31 = (
			/* 180L) */ (abs (
				var_1_26
			))
		);
	}


	// From: CodeObject5
	/* 266L) */ if (/* 193L, 192L) */ ((var_1_23) <= (/* 195L, 191L) */ ((var_1_24) / (/* 197L, 190L) */ ((var_1_33) - (var_1_34))))))) {
		/* 264L) */ if (/* 212L, 211L) */ ((-64) >= (/* 214L, 210L) */ (abs (/* 215L, 209L) */ (abs (var_1_22))))))) {
			/* 256L) */ if (/* 225L, 224L) */ ((-8) > (var_1_25))) {
				/* 248L) */ if (/* 234L, 233L) */ ((var_1_27) >= (var_1_28))) {
					/* 247L) */ var_1_32 = (
						/* 246L) */ (min (
							/* 246L) */ (
								/* 244L) */ ((
									var_1_35
								) + (
									var_1_36
								))
							) , (
								1
							)
						))
					);
				}
			} else {
				/* 255L) */ var_1_32 = (
					/* 254L) */ (abs (
						/* 253L) */ (abs (
							var_1_35
						))
					))
				);
			}
		} else {
			/* 263L) */ var_1_32 = (
				/* 262L) */ ((
					var_1_37
				) - (
					var_1_35
				))
			);
		}
	}


	// From: CodeObject6
	/* 306L) */ if (/* 273L, 272L) */ ((var_1_33) < (var_1_32))) {
		/* 283L) */ var_1_38 = (
			/* 282L) */ (abs (
				var_1_29
			))
		);
	} else {
		/* 304L) */ if (/* 290L, 289L) */ ((var_1_34) <= (var_1_22))) {
			/* 303L) */ var_1_38 = (
				/* 302L) */ (min (
					/* 302L) */ (
						var_1_37
					) , (
						/* 301L) */ (max (
							/* 301L) */ (
								var_1_39
							) , (
								var_1_32
							)
						))
					)
				))
			);
		}
	}


	// From: CodeObject7
	/* 339L) */ if (/* 319L, 318L) */ ((/* 320L, 314L) */ ((var_1_34) % (/* 322L, 313L) */ ((16u) + (var_1_33))))) < (/* 325L, 317L) */ (~ (var_1_37))))) {
		/* 338L) */ var_1_40 = (
			var_1_26
		);
	}


	// From: Req1Batch33Filler_PS_CN
	signed long int stepLocal_1 = /* 39L, 29L, 33L, 331L, 356L, 881L, 964L) */ (~ (/* 38L, 28L, 34L, 332L, 357L, 880L, 965L) */ ((var_1_3) | (last_1_var_1_11))));
	signed long int stepLocal_0 = /* 46L, 8L, 13L, 324L, 349L, 875L, 957L) */ ((-10) + (/* 45L, 7L, 15L, 326L, 351L, 874L, 959L) */ (min (/* 45L, 7L, 15L, 326L, 351L, 874L, 959L) */ (var_1_3) , (var_1_4)))));
	/* 68L, 54L, 320L, 345L, 895L, 987L) */ if (/* 53L, 9L, 10L, 321L, 346L, 876L, 973L) */ ((/* 51L, 3L, 11L, 322L, 347L, 870L, 972L) */ (- (last_1_var_1_11))) >= (stepLocal_0))) {
		/* 62L, 48L, 329L, 354L, 889L, 981L) */ if (/* 56L, 31L, 32L, 330L, 355L, 883L, 975L) */ ((stepLocal_1) >= (var_1_4))) {
			/* 61L, 47L, 336L, 361L, 888L, 980L) */ var_1_1 = (
				last_1_var_1_11
			);
		}
	} else {
		/* 67L, 53L, 340L, 365L, 894L, 986L) */ var_1_1 = (
			last_1_var_1_11
		);
	}


	// From: Req3Batch33Filler_PS_CN
	unsigned char stepLocal_2 = /* 5L, 79L, 83L, 454L, 467L, 930L, 1001L) */ ((/* 3L, 77L, 84L, 455L, 468L, 928L, 1002L) */ ((32.6) * (var_1_8))) >= (var_1_9));
	/* 16L, 100L, 452L, 465L, 939L, 1015L) */ if (/* 10L, 81L, 82L, 453L, 466L, 933L, 1009L) */ ((stepLocal_2) && (last_1_var_1_12))) {
		/* 15L, 99L, 460L, 473L, 938L, 1014L) */ var_1_7 = (
			last_1_var_1_11
		);
	}


	// From: Req6Batch33Filler_PS_CN
	/* 1050L, 168L, 622L, 639L) */ var_1_14 = (
		/* 1053L, 167L, 625L, 642L) */ ((
			/* 1054L, 161L, 626L, 643L) */ ((
				/* 1055L, 159L, 627L, 644L) */ (max (
					/* 1055L, 159L, 627L, 644L) */ (
						var_1_15
					) , (
						1
					)
				))
			) - (
				var_1_16
			))
		) + (
			/* 1059L, 166L, 631L, 648L) */ ((
				var_1_17
			) - (
				/* 1061L, 165L, 633L, 650L) */ ((
					4
				) + (
					var_1_18
				))
			))
		))
	);


	// From: Req7Batch33Filler_PS_CN
	/* 1066L, 264L, 689L, 734L) */ if (/* 1067L, 181L, 182L, 690L, 735L) */ ((last_1_var_1_19) >= (var_1_7))) {
		/* 1071L, 258L, 694L, 739L) */ if (/* 1072L, 198L, 199L, 695L, 740L) */ ((/* 1073L, 193L, 200L, 696L, 741L) */ ((var_1_17) + (/* 1075L, 192L, 202L, 698L, 743L) */ (- (256u))))) >= (/* 1077L, 197L, 204L, 700L, 745L) */ ((last_1_var_1_19) % (/* 1080L, 196L, 206L, 703L, 748L) */ (abs (500u))))))) {
			/* 1082L, 252L, 705L, 750L) */ if (/* 1083L, 225L, 226L, 706L, 751L) */ ((last_1_var_1_19) >= (/* 1086L, 224L, 228L, 709L, 754L) */ ((/* 1087L, 220L, 229L, 710L, 755L) */ (max (/* 1087L, 220L, 229L, 710L, 755L) */ (var_1_15) , (var_1_7)))) / (/* 1090L, 223L, 232L, 713L, 758L) */ (min (/* 1090L, 223L, 232L, 713L, 758L) */ (var_1_20) , (var_1_21)))))))) {
				/* 1093L, 247L, 716L, 761L) */ var_1_19 = (
					var_1_17
				);
			} else {
				/* 1097L, 251L, 720L, 765L) */ var_1_19 = (
					var_1_1
				);
			}
		} else {
			/* 1101L, 257L, 724L, 769L) */ var_1_19 = (
				var_1_16
			);
		}
	} else {
		/* 1105L, 263L, 728L, 773L) */ var_1_19 = (
			var_1_18
		);
	}


	// From: Req4Batch33Filler_PS_CN
	/* 1021L, 132L, 506L, 524L) */ if (/* 1022L, 113L, 114L, 507L, 525L) */ (! (/* 1023L, 112L, 115L, 508L, 526L) */ (! (/* 1024L, 111L, 116L, 509L, 527L) */ ((var_1_19) == (var_1_1))))))) {
		/* 1027L, 131L, 512L, 530L) */ var_1_11 = (
			/* 1030L, 130L, 515L, 533L) */ ((
				/* 1031L, 128L, 516L, 534L) */ (max (
					/* 1031L, 128L, 516L, 534L) */ (
						0
					) , (
						last_1_var_1_11
					)
				))
			) + (
				100
			))
		);
	}


	// From: Req5Batch33Filler_PS_CN
	/* 1038L, 150L, 577L, 588L) */ var_1_12 = (
		/* 1041L, 149L, 580L, 591L) */ (! (
			/* 1042L, 148L, 581L, 592L) */ ((
				/* 1043L, 146L, 582L, 593L) */ ((
					var_1_7
				) < (
					var_1_19
				))
			) || (
				var_1_13
			))
		))
	);


	// From: Req2Batch33Filler_PS_CN
	/* 993L, 65L, 421L, 429L) */ var_1_5 = (
		/* 996L, 64L, 424L, 432L) */ (max (
			/* 996L, 64L, 424L, 432L) */ (
				var_1_19
			) , (
				var_1_6
			)
		))
	);
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483648);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483648);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= -32767);
	assume_abort_if_not(var_1_6 <= 32766);
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -922337.2036854776000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 1);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 63);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 63);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 63);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 31);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= -128);
	assume_abort_if_not(var_1_20 <= 127);
	assume_abort_if_not(var_1_20 != 0);
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= -128);
	assume_abort_if_not(var_1_21 <= 127);
	assume_abort_if_not(var_1_21 != 0);
	var_1_23 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 65535);
	var_1_24 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 65535);
	var_1_25 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_25 >= -2147483648);
	assume_abort_if_not(var_1_25 <= 2147483647);
	var_1_26 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 65534);
	var_1_28 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_28 >= -922337.2036854766000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854766000e+12F && var_1_28 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_30 >= -127);
	assume_abort_if_not(var_1_30 <= 126);
	var_1_33 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_33 >= 32767);
	assume_abort_if_not(var_1_33 <= 65535);
	var_1_34 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_34 >= 1);
	assume_abort_if_not(var_1_34 <= 32766);
	assume_abort_if_not(var_1_34 != 32767);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 127);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 127);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 127);
	assume_abort_if_not(var_1_37 <= 254);
	var_1_39 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_39 >= -32767);
	assume_abort_if_not(var_1_39 <= 32766);
}



void updateLastVariables(void) {
	last_1_var_1_11 = var_1_11;
	last_1_var_1_12 = var_1_12;
	last_1_var_1_19 = var_1_19;
}

int property(void) {
	if (/* 346L, 9L, 18L, 371L, 396L, 905L, 1111L, 79L) */ ((/* 347L, 3L, 19L, 372L, 397L, 899L, 1112L, 73L) */ (- (last_1_var_1_11))) >= (/* 350L, 8L, 21L, 374L, 399L, 904L, 1115L, 78L) */ ((-10) + (/* 352L, 7L, 23L, 376L, 401L, 903L, 1117L, 77L) */ (min (/* 352L, 7L, 23L, 376L, 401L, 903L, 1117L, 77L) */ (var_1_3) , (var_1_4)))))))) {
		if (/* 356L, 31L, 38L, 380L, 405L, 912L, 1121L, 86L) */ ((/* 357L, 29L, 39L, 381L, 406L, 910L, 1122L, 84L) */ (~ (/* 358L, 28L, 40L, 382L, 407L, 909L, 1123L, 83L) */ ((var_1_3) | (last_1_var_1_11))))) >= (var_1_4))) {
		}
	} else {
	}
	if (/* 383L, 81L, 89L, 479L, 492L, 948L, 1148L, 26L) */ ((/* 384L, 79L, 90L, 480L, 493L, 945L, 1149L, 23L) */ ((/* 385L, 77L, 91L, 481L, 494L, 943L, 1150L, 21L) */ ((32.6) * (var_1_8))) >= (var_1_9))) && (last_1_var_1_12))) {
	}
	if (/* 400L, 113L, 119L, 543L, 561L, 1165L) */ (! (/* 401L, 112L, 120L, 544L, 562L, 1166L) */ (! (/* 402L, 111L, 121L, 545L, 563L, 1167L) */ ((var_1_19) == (var_1_1))))))) {
	}
	if (/* 445L, 181L, 185L, 780L, 825L, 1210L) */ ((last_1_var_1_19) >= (var_1_7))) {
		if (/* 450L, 198L, 208L, 785L, 830L, 1215L) */ ((/* 451L, 193L, 209L, 786L, 831L, 1216L) */ ((var_1_17) + (/* 453L, 192L, 211L, 788L, 833L, 1218L) */ (- (256u))))) >= (/* 455L, 197L, 213L, 790L, 835L, 1220L) */ ((last_1_var_1_19) % (/* 458L, 196L, 215L, 793L, 838L, 1223L) */ (abs (500u))))))) {
			if (/* 461L, 225L, 235L, 796L, 841L, 1226L) */ ((last_1_var_1_19) >= (/* 464L, 224L, 237L, 799L, 844L, 1229L) */ ((/* 465L, 220L, 238L, 800L, 845L, 1230L) */ (max (/* 465L, 220L, 238L, 800L, 845L, 1230L) */ (var_1_15) , (var_1_7)))) / (/* 468L, 223L, 241L, 803L, 848L, 1233L) */ (min (/* 468L, 223L, 241L, 803L, 848L, 1233L) */ (var_1_20) , (var_1_21)))))))) {
			} else {
			}
		} else {
		}
	} else {
	}
	return /* 493L) */ ((
	/* 492L) */ ((
		/* 491L) */ ((
			/* 490L) */ ((
				/* 489L) */ ((
					/* 488L) */ ((
						/* 345L, 55L, 370L, 395L, 924L, 1110L, 98L) */ ((
							/* 346L, 9L, 18L, 371L, 396L, 905L, 1111L, 79L) */ ((
								/* 347L, 3L, 19L, 372L, 397L, 899L, 1112L, 73L) */ (- (
									last_1_var_1_11
								))
							) >= (
								/* 350L, 8L, 21L, 374L, 399L, 904L, 1115L, 78L) */ ((
									-10
								) + (
									/* 352L, 7L, 23L, 376L, 401L, 903L, 1117L, 77L) */ (min (
										/* 352L, 7L, 23L, 376L, 401L, 903L, 1117L, 77L) */ (
											var_1_3
										) , (
											var_1_4
										)
									))
								))
							))
						) ? (
							/* 355L, 49L, 379L, 404L, 918L, 1120L, 92L) */ ((
								/* 356L, 31L, 38L, 380L, 405L, 912L, 1121L, 86L) */ ((
									/* 357L, 29L, 39L, 381L, 406L, 910L, 1122L, 84L) */ (~ (
										/* 358L, 28L, 40L, 382L, 407L, 909L, 1123L, 83L) */ ((
											var_1_3
										) | (
											last_1_var_1_11
										))
									))
								) >= (
									var_1_4
								))
							) ? (
								/* 363L, 47L, 386L, 411L, 917L, 1128L, 91L) */ ((
									var_1_1
								) == (
									/* 363L, 47L, 386L, 411L, 917L, 1128L, 91L) */ ((unsigned short int) (
										last_1_var_1_11
									))
								))
							) : (
								1
							))
						) : (
							/* 368L, 53L, 390L, 415L, 923L, 1133L, 97L) */ ((
								var_1_1
							) == (
								/* 368L, 53L, 390L, 415L, 923L, 1133L, 97L) */ ((unsigned short int) (
									last_1_var_1_11
								))
							))
						))
					) && (
						/* 375L, 65L, 437L, 445L, 1140L) */ ((
							var_1_5
						) == (
							/* 375L, 65L, 437L, 445L, 1140L) */ ((signed short int) (
								/* 378L, 64L, 440L, 448L, 1143L) */ (max (
									/* 378L, 64L, 440L, 448L, 1143L) */ (
										var_1_19
									) , (
										var_1_6
									)
								))
							))
						))
					))
				) && (
					/* 382L, 101L, 478L, 491L, 954L, 1147L, 32L) */ ((
						/* 383L, 81L, 89L, 479L, 492L, 948L, 1148L, 26L) */ ((
							/* 384L, 79L, 90L, 480L, 493L, 945L, 1149L, 23L) */ ((
								/* 385L, 77L, 91L, 481L, 494L, 943L, 1150L, 21L) */ ((
									32.6
								) * (
									var_1_8
								))
							) >= (
								var_1_9
							))
						) && (
							last_1_var_1_12
						))
					) ? (
						/* 391L, 99L, 486L, 499L, 953L, 1156L, 31L) */ ((
							var_1_7
						) == (
							/* 391L, 99L, 486L, 499L, 953L, 1156L, 31L) */ ((unsigned short int) (
								last_1_var_1_11
							))
						))
					) : (
						1
					))
				))
			) && (
				/* 399L, 133L, 542L, 560L, 1164L) */ ((
					/* 400L, 113L, 119L, 543L, 561L, 1165L) */ (! (
						/* 401L, 112L, 120L, 544L, 562L, 1166L) */ (! (
							/* 402L, 111L, 121L, 545L, 563L, 1167L) */ ((
								var_1_19
							) == (
								var_1_1
							))
						))
					))
				) ? (
					/* 405L, 131L, 548L, 566L, 1170L) */ ((
						var_1_11
					) == (
						/* 405L, 131L, 548L, 566L, 1170L) */ ((signed short int) (
							/* 408L, 130L, 551L, 569L, 1173L) */ ((
								/* 409L, 128L, 552L, 570L, 1174L) */ (max (
									/* 409L, 128L, 552L, 570L, 1174L) */ (
										0
									) , (
										last_1_var_1_11
									)
								))
							) + (
								100
							))
						))
					))
				) : (
					1
				))
			))
		) && (
			/* 416L, 150L, 599L, 610L, 1181L) */ ((
				var_1_12
			) == (
				/* 416L, 150L, 599L, 610L, 1181L) */ ((unsigned char) (
					/* 419L, 149L, 602L, 613L, 1184L) */ (! (
						/* 420L, 148L, 603L, 614L, 1185L) */ ((
							/* 421L, 146L, 604L, 615L, 1186L) */ ((
								var_1_7
							) < (
								var_1_19
							))
						) || (
							var_1_13
						))
					))
				))
			))
		))
	) && (
		/* 428L, 168L, 656L, 673L, 1193L) */ ((
			var_1_14
		) == (
			/* 428L, 168L, 656L, 673L, 1193L) */ ((signed char) (
				/* 431L, 167L, 659L, 676L, 1196L) */ ((
					/* 432L, 161L, 660L, 677L, 1197L) */ ((
						/* 433L, 159L, 661L, 678L, 1198L) */ (max (
							/* 433L, 159L, 661L, 678L, 1198L) */ (
								var_1_15
							) , (
								1
							)
						))
					) - (
						var_1_16
					))
				) + (
					/* 437L, 166L, 665L, 682L, 1202L) */ ((
						var_1_17
					) - (
						/* 439L, 165L, 667L, 684L, 1204L) */ ((
							4
						) + (
							var_1_18
						))
					))
				))
			))
		))
	))
) && (
	/* 444L, 265L, 779L, 824L, 1209L) */ ((
		/* 445L, 181L, 185L, 780L, 825L, 1210L) */ ((
			last_1_var_1_19
		) >= (
			var_1_7
		))
	) ? (
		/* 449L, 259L, 784L, 829L, 1214L) */ ((
			/* 450L, 198L, 208L, 785L, 830L, 1215L) */ ((
				/* 451L, 193L, 209L, 786L, 831L, 1216L) */ ((
					var_1_17
				) + (
					/* 453L, 192L, 211L, 788L, 833L, 1218L) */ (- (
						256u
					))
				))
			) >= (
				/* 455L, 197L, 213L, 790L, 835L, 1220L) */ ((
					last_1_var_1_19
				) % (
					/* 458L, 196L, 215L, 793L, 838L, 1223L) */ (abs (
						500u
					))
				))
			))
		) ? (
			/* 460L, 253L, 795L, 840L, 1225L) */ ((
				/* 461L, 225L, 235L, 796L, 841L, 1226L) */ ((
					last_1_var_1_19
				) >= (
					/* 464L, 224L, 237L, 799L, 844L, 1229L) */ ((
						/* 465L, 220L, 238L, 800L, 845L, 1230L) */ (max (
							/* 465L, 220L, 238L, 800L, 845L, 1230L) */ (
								var_1_15
							) , (
								var_1_7
							)
						))
					) / (
						/* 468L, 223L, 241L, 803L, 848L, 1233L) */ (min (
							/* 468L, 223L, 241L, 803L, 848L, 1233L) */ (
								var_1_20
							) , (
								var_1_21
							)
						))
					))
				))
			) ? (
				/* 471L, 247L, 806L, 851L, 1236L) */ ((
					var_1_19
				) == (
					/* 471L, 247L, 806L, 851L, 1236L) */ ((unsigned long int) (
						var_1_17
					))
				))
			) : (
				/* 475L, 251L, 810L, 855L, 1240L) */ ((
					var_1_19
				) == (
					/* 475L, 251L, 810L, 855L, 1240L) */ ((unsigned long int) (
						var_1_1
					))
				))
			))
		) : (
			/* 479L, 257L, 814L, 859L, 1244L) */ ((
				var_1_19
			) == (
				/* 479L, 257L, 814L, 859L, 1244L) */ ((unsigned long int) (
					var_1_16
				))
			))
		))
	) : (
		/* 483L, 263L, 818L, 863L, 1248L) */ ((
			var_1_19
		) == (
			/* 483L, 263L, 818L, 863L, 1248L) */ ((unsigned long int) (
				var_1_18
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
