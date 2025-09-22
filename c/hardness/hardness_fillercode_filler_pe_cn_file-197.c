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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch197Filler_PE_CN.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 32;
unsigned char var_1_4 = 200;
unsigned char var_1_5 = 32;
signed short int var_1_6 = -32;
unsigned char var_1_7 = 1;
float var_1_8 = 5.5;
float var_1_9 = 8.6;
unsigned char var_1_10 = 0;
float var_1_11 = 63.5;
float var_1_12 = 1.6;
float var_1_13 = 15.75;
double var_1_14 = 7.375;
double var_1_15 = 5.2;
double var_1_16 = 10.5;
float var_1_17 = 256.75;
signed char var_1_18 = 5;
unsigned char var_1_19 = 4;
signed char var_1_20 = 4;
signed char var_1_21 = -16;
double var_1_22 = 25.8;
unsigned long int var_1_23 = 0;
unsigned char var_1_24 = 1;
unsigned char var_1_25 = 5;
unsigned char var_1_26 = 0;
float var_1_27 = 128.375;
unsigned char var_1_28 = 0;
unsigned char var_1_29 = 0;
double var_1_30 = 7.5;
unsigned char var_1_31 = 4;
double var_1_32 = 100.8;
signed long int var_1_33 = -5;
unsigned long int var_1_34 = 32;
unsigned long int var_1_35 = 4;
signed long int var_1_36 = -16;
double var_1_37 = 32.11;
signed char var_1_38 = 10;
signed char var_1_39 = -50;
signed char var_1_42 = 1;
signed char var_1_43 = -5;
unsigned char var_1_44 = 1;
unsigned char var_1_45 = 1;

// Calibration values

// Last'ed variables
float last_1_var_1_9 = 8.6;
float last_1_var_1_17 = 256.75;
double last_1_var_1_22 = 25.8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch197Filler_PE_CN
	/* 65L, 23L, 281L, 300L, 864L, 939L) */ if (/* 52L, 4L, 5L, 282L, 301L, 851L, 940L) */ ((last_1_var_1_17) != (last_1_var_1_22))) {
		/* 60L, 18L, 285L, 304L, 859L, 945L) */ var_1_1 = (
			/* 59L, 17L, 288L, 307L, 858L, 948L) */ ((
				/* 57L, 15L, 289L, 308L, 856L, 949L) */ ((
					var_1_4
				) - (
					var_1_5
				))
			) - (
				10
			))
		);
	} else {
		/* 64L, 22L, 293L, 312L, 863L, 953L) */ var_1_1 = (
			var_1_5
		);
	}


	// From: Req2Batch197Filler_PE_CN
	/* 22L, 71L, 355L, 375L, 911L, 958L) */ if (/* 6L, 38L, 39L, 356L, 376L, 895L, 959L) */ ((last_1_var_1_22) > (/* 5L, 37L, 41L, 358L, 378L, 894L, 962L) */ ((last_1_var_1_9) / (var_1_8))))) {
		/* 21L, 69L, 361L, 381L, 910L, 966L) */ if (/* 12L, 52L, 53L, 362L, 382L, 901L, 967L) */ (! (/* 11L, 51L, 54L, 363L, 383L, 900L, 968L) */ ((last_1_var_1_22) >= (last_1_var_1_9))))) {
			/* 16L, 64L, 366L, 386L, 905L, 973L) */ var_1_6 = (
				var_1_4
			);
		} else {
			/* 20L, 68L, 370L, 390L, 909L, 977L) */ var_1_6 = (
				-2
			);
		}
	}


	// From: Req6Batch197Filler_PE_CN
	signed long int stepLocal_0 = 4;
	/* 1073L, 255L, 711L, 733L) */ if (/* 1057L, 229L, 230L, 712L, 734L) */ ((/* 1056L, 227L, 231L, 713L, 735L) */ ((var_1_1) / (var_1_19))) <= (stepLocal_0))) {
		/* 1067L, 249L, 717L, 739L) */ var_1_18 = (
			/* 1066L, 248L, 720L, 742L) */ ((
				var_1_5
			) + (
				/* 1065L, 247L, 722L, 744L) */ (max (
					/* 1065L, 247L, 722L, 744L) */ (
						/* 1063L, 245L, 723L, 745L) */ ((
							var_1_19
						) - (
							var_1_20
						))
					) , (
						var_1_21
					)
				))
			))
		);
	} else {
		/* 1072L, 254L, 727L, 749L) */ var_1_18 = (
			/* 1071L, 253L, 730L, 752L) */ (abs (
				var_1_21
			))
		);
	}


	// From: Req7Batch197Filler_PE_CN
	/* 1078L, 264L, 800L, 806L) */ var_1_22 = (
		var_1_13
	);


	// From: Req8Batch197Filler_PE_CN
	/* 1084L, 274L, 824L, 830L) */ var_1_23 = (
		var_1_20
	);


	// From: Req5Batch197Filler_PE_CN
	/* 1026L, 212L, 608L, 634L) */ if (/* 1027L, 170L, 171L, 609L, 635L) */ ((var_1_7) && (var_1_10))) {
		/* 1030L, 206L, 612L, 638L) */ if (/* 1031L, 183L, 184L, 613L, 639L) */ ((/* 1032L, 181L, 185L, 614L, 640L) */ ((/* 1033L, 179L, 186L, 615L, 641L) */ (max (/* 1033L, 179L, 186L, 615L, 641L) */ (var_1_4) , (var_1_1)))) + (var_1_5))) != (var_1_23))) {
			/* 1038L, 201L, 620L, 646L) */ var_1_17 = (
				100.85f
			);
		} else {
			/* 1042L, 205L, 624L, 650L) */ var_1_17 = (
				var_1_13
			);
		}
	} else {
		/* 1046L, 211L, 628L, 654L) */ var_1_17 = (
			var_1_13
		);
	}


	// From: Req3Batch197Filler_PE_CN
	/* 983L, 133L, 436L, 466L) */ if (/* 984L, 79L, 80L, 437L, 467L) */ ((var_1_7) || (var_1_10))) {
		/* 987L, 131L, 440L, 470L) */ if (/* 988L, 91L, 92L, 441L, 471L) */ ((var_1_6) < (/* 990L, 90L, 94L, 443L, 473L) */ (min (/* 990L, 90L, 94L, 443L, 473L) */ (var_1_5) , (var_1_6)))))) {
			/* 993L, 125L, 446L, 476L) */ if (/* 994L, 106L, 107L, 447L, 477L) */ ((var_1_22) < (/* 996L, 105L, 109L, 449L, 479L) */ ((var_1_11) - (var_1_12))))) {
				/* 999L, 120L, 452L, 482L) */ var_1_9 = (
					var_1_13
				);
			} else {
				/* 1003L, 124L, 456L, 486L) */ var_1_9 = (
					32.89f
				);
			}
		} else {
			/* 1007L, 130L, 460L, 490L) */ var_1_9 = (
				var_1_13
			);
		}
	}


	// From: Req4Batch197Filler_PE_CN
	/* 1012L, 162L, 555L, 568L) */ if (/* 1013L, 145L, 146L, 556L, 569L) */ ((var_1_17) < (/* 1015L, 144L, 148L, 558L, 571L) */ ((var_1_9) + (var_1_11))))) {
		/* 1018L, 161L, 561L, 574L) */ var_1_14 = (
			/* 1021L, 160L, 564L, 577L) */ ((
				var_1_15
			) - (
				var_1_16
			))
		);
	}


	// From: CodeObject1
	/* 95L) */ var_1_24 = (
		var_1_25
	);


	// From: CodeObject2
	/* 121L) */ if (/* 104L, 103L) */ ((/* 105L, 101L) */ (- (64.25f))) >= (var_1_27))) {
		/* 119L) */ if (var_1_28) {
			/* 118L) */ var_1_26 = (
				var_1_29
			);
		}
	}


	// From: CodeObject3
	/* 152L) */ if (var_1_29) {
		/* 150L) */ if (/* 134L, 133L) */ ((var_1_25) > (/* 136L, 132L) */ (min (/* 136L, 132L) */ (var_1_24) , (/* 138L, 131L) */ (~ (var_1_31)))))))) {
			/* 149L) */ var_1_30 = (
				var_1_32
			);
		}
	}


	// From: CodeObject4
	/* 187L) */ if (/* 163L, 162L) */ ((/* 164L, 160L) */ ((/* 165L, 158L) */ ((var_1_31) >= (var_1_24))) || (var_1_29))) || (var_1_28))) {
		/* 182L) */ var_1_33 = (
			/* 181L) */ (max (
				/* 181L) */ (
					var_1_24
				) , (
					var_1_25
				)
			))
		);
	} else {
		/* 186L) */ var_1_33 = (
			var_1_24
		);
	}


	// From: CodeObject5
	/* 211L) */ if (/* 194L, 193L) */ ((var_1_31) <= (10))) {
		/* 210L) */ var_1_34 = (
			/* 209L) */ (max (
				/* 209L) */ (
					/* 203L) */ (abs (
						var_1_25
					))
				) , (
					/* 208L) */ (max (
						/* 208L) */ (
							/* 206L) */ (min (
								/* 206L) */ (
									var_1_24
								) , (
									var_1_31
								)
							))
						) , (
							var_1_35
						)
					))
				)
			))
		);
	}


	// From: CodeObject6
	/* 262L) */ if (/* 224L, 223L) */ ((/* 225L, 221L) */ ((/* 226L, 217L) */ ((var_1_27) / (var_1_37))) * (/* 229L, 220L) */ ((var_1_32) * (15.8))))) <= (10.95))) {
		/* 260L) */ if (/* 248L, 247L) */ ((var_1_25) >= (var_1_35))) {
			/* 259L) */ var_1_36 = (
				/* 258L) */ (max (
					/* 258L) */ (
						var_1_24
					) , (
						var_1_25
					)
				))
			);
		}
	}


	// From: CodeObject7
	/* 321L) */ if (/* 269L, 268L) */ ((var_1_37) > (var_1_27))) {
		/* 278L) */ var_1_38 = (
			var_1_39
		);
	} else {
		/* 319L) */ if (/* 289L, 288L) */ ((var_1_29) || (var_1_26))) {
			/* 317L) */ if (/* 300L, 299L) */ ((/* 301L, 297L) */ ((var_1_27) * (var_1_32))) <= (var_1_37))) {
				/* 316L) */ var_1_38 = (
					/* 315L) */ (abs (
						/* 314L) */ (min (
							/* 314L) */ (
								var_1_42
							) , (
								var_1_43
							)
						))
					))
				);
			}
		}
	}


	// From: CodeObject8
	/* 340L) */ if (/* 328L, 327L) */ ((var_1_43) <= (var_1_39))) {
		/* 339L) */ var_1_44 = (
			/* 338L) */ ((
				var_1_29
			) || (
				var_1_45
			))
		);
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 190);
	assume_abort_if_not(var_1_4 <= 254);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 63);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= -922337.2036854776000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
	assume_abort_if_not(var_1_8 != 0.0F);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= -922337.2036854766000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 1);
	assume_abort_if_not(var_1_19 <= 7);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 63);
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= -63);
	assume_abort_if_not(var_1_21 <= 63);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 254);
	var_1_27 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_27 >= -922337.2036854776000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854776000e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 1);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 1);
	assume_abort_if_not(var_1_29 <= 1);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 255);
	var_1_32 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_32 >= -922337.2036854766000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854766000e+12F && var_1_32 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 4294967294);
	var_1_37 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_37 >= -922337.2036854776000e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854776000e+12F && var_1_37 >= 1.0e-20F ));
	assume_abort_if_not(var_1_37 != 0.0F);
	var_1_39 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_39 >= -127);
	assume_abort_if_not(var_1_39 <= 126);
	var_1_42 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_42 >= -126);
	assume_abort_if_not(var_1_42 <= 126);
	var_1_43 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_43 >= -126);
	assume_abort_if_not(var_1_43 <= 126);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 1);
	assume_abort_if_not(var_1_45 <= 1);
}



void updateLastVariables(void) {
	last_1_var_1_9 = var_1_9;
	last_1_var_1_17 = var_1_17;
	last_1_var_1_22 = var_1_22;
}

int property(void) {
	if (/* 347L, 4L, 8L, 320L, 339L, 872L, 1092L, 73L) */ ((last_1_var_1_17) != (last_1_var_1_22))) {
	} else {
	}
	if (/* 366L, 38L, 44L, 396L, 416L, 919L, 1111L, 30L) */ ((last_1_var_1_22) > (/* 369L, 37L, 46L, 398L, 418L, 918L, 1114L, 29L) */ ((last_1_var_1_9) / (var_1_8))))) {
		if (/* 374L, 52L, 57L, 402L, 422L, 925L, 1119L, 36L) */ (! (/* 375L, 51L, 58L, 403L, 423L, 924L, 1120L, 35L) */ ((last_1_var_1_22) >= (last_1_var_1_9))))) {
		} else {
		}
	}
	if (/* 391L, 79L, 83L, 497L, 527L, 1136L) */ ((var_1_7) || (var_1_10))) {
		if (/* 395L, 91L, 97L, 501L, 531L, 1140L) */ ((var_1_6) < (/* 397L, 90L, 99L, 503L, 533L, 1142L) */ (min (/* 397L, 90L, 99L, 503L, 533L, 1142L) */ (var_1_5) , (var_1_6)))))) {
			if (/* 401L, 106L, 112L, 507L, 537L, 1146L) */ ((var_1_22) < (/* 403L, 105L, 114L, 509L, 539L, 1148L) */ ((var_1_11) - (var_1_12))))) {
			} else {
			}
		} else {
		}
	}
	if (/* 420L, 145L, 151L, 582L, 595L, 1165L) */ ((var_1_17) < (/* 422L, 144L, 153L, 584L, 597L, 1167L) */ ((var_1_9) + (var_1_11))))) {
	}
	if (/* 434L, 170L, 174L, 661L, 687L, 1179L) */ ((var_1_7) && (var_1_10))) {
		if (/* 438L, 183L, 191L, 665L, 691L, 1183L) */ ((/* 439L, 181L, 192L, 666L, 692L, 1184L) */ ((/* 440L, 179L, 193L, 667L, 693L, 1185L) */ (max (/* 440L, 179L, 193L, 667L, 693L, 1185L) */ (var_1_4) , (var_1_1)))) + (var_1_5))) != (var_1_23))) {
		} else {
		}
	} else {
	}
	if (/* 459L, 229L, 235L, 756L, 778L, 1204L) */ ((/* 460L, 227L, 236L, 757L, 779L, 1205L) */ ((var_1_1) / (var_1_19))) <= (4))) {
	} else {
	}
	return /* 498L) */ ((
	/* 497L) */ ((
		/* 496L) */ ((
			/* 495L) */ ((
				/* 494L) */ ((
					/* 493L) */ ((
						/* 492L) */ ((
							/* 346L, 24L, 319L, 338L, 885L, 1091L, 86L) */ ((
								/* 347L, 4L, 8L, 320L, 339L, 872L, 1092L, 73L) */ ((
									last_1_var_1_17
								) != (
									last_1_var_1_22
								))
							) ? (
								/* 352L, 18L, 323L, 342L, 880L, 1097L, 81L) */ ((
									var_1_1
								) == (
									/* 352L, 18L, 323L, 342L, 880L, 1097L, 81L) */ ((unsigned char) (
										/* 355L, 17L, 326L, 345L, 879L, 1100L, 80L) */ ((
											/* 356L, 15L, 327L, 346L, 877L, 1101L, 78L) */ ((
												var_1_4
											) - (
												var_1_5
											))
										) - (
											10
										))
									))
								))
							) : (
								/* 360L, 22L, 331L, 350L, 884L, 1105L, 85L) */ ((
									var_1_1
								) == (
									/* 360L, 22L, 331L, 350L, 884L, 1105L, 85L) */ ((unsigned char) (
										var_1_5
									))
								))
							))
						) && (
							/* 365L, 72L, 395L, 415L, 935L, 1110L, 46L) */ ((
								/* 366L, 38L, 44L, 396L, 416L, 919L, 1111L, 30L) */ ((
									last_1_var_1_22
								) > (
									/* 369L, 37L, 46L, 398L, 418L, 918L, 1114L, 29L) */ ((
										last_1_var_1_9
									) / (
										var_1_8
									))
								))
							) ? (
								/* 373L, 70L, 401L, 421L, 934L, 1118L, 45L) */ ((
									/* 374L, 52L, 57L, 402L, 422L, 925L, 1119L, 36L) */ (! (
										/* 375L, 51L, 58L, 403L, 423L, 924L, 1120L, 35L) */ ((
											last_1_var_1_22
										) >= (
											last_1_var_1_9
										))
									))
								) ? (
									/* 380L, 64L, 406L, 426L, 929L, 1125L, 40L) */ ((
										var_1_6
									) == (
										/* 380L, 64L, 406L, 426L, 929L, 1125L, 40L) */ ((signed short int) (
											var_1_4
										))
									))
								) : (
									/* 384L, 68L, 410L, 430L, 933L, 1129L, 44L) */ ((
										var_1_6
									) == (
										/* 384L, 68L, 410L, 430L, 933L, 1129L, 44L) */ ((signed short int) (
											-2
										))
									))
								))
							) : (
								1
							))
						))
					) && (
						/* 390L, 134L, 496L, 526L, 1135L) */ ((
							/* 391L, 79L, 83L, 497L, 527L, 1136L) */ ((
								var_1_7
							) || (
								var_1_10
							))
						) ? (
							/* 394L, 132L, 500L, 530L, 1139L) */ ((
								/* 395L, 91L, 97L, 501L, 531L, 1140L) */ ((
									var_1_6
								) < (
									/* 397L, 90L, 99L, 503L, 533L, 1142L) */ (min (
										/* 397L, 90L, 99L, 503L, 533L, 1142L) */ (
											var_1_5
										) , (
											var_1_6
										)
									))
								))
							) ? (
								/* 400L, 126L, 506L, 536L, 1145L) */ ((
									/* 401L, 106L, 112L, 507L, 537L, 1146L) */ ((
										var_1_22
									) < (
										/* 403L, 105L, 114L, 509L, 539L, 1148L) */ ((
											var_1_11
										) - (
											var_1_12
										))
									))
								) ? (
									/* 406L, 120L, 512L, 542L, 1151L) */ ((
										var_1_9
									) == (
										/* 406L, 120L, 512L, 542L, 1151L) */ ((float) (
											var_1_13
										))
									))
								) : (
									/* 410L, 124L, 516L, 546L, 1155L) */ ((
										var_1_9
									) == (
										/* 410L, 124L, 516L, 546L, 1155L) */ ((float) (
											32.89f
										))
									))
								))
							) : (
								/* 414L, 130L, 520L, 550L, 1159L) */ ((
									var_1_9
								) == (
									/* 414L, 130L, 520L, 550L, 1159L) */ ((float) (
										var_1_13
									))
								))
							))
						) : (
							1
						))
					))
				) && (
					/* 419L, 163L, 581L, 594L, 1164L) */ ((
						/* 420L, 145L, 151L, 582L, 595L, 1165L) */ ((
							var_1_17
						) < (
							/* 422L, 144L, 153L, 584L, 597L, 1167L) */ ((
								var_1_9
							) + (
								var_1_11
							))
						))
					) ? (
						/* 425L, 161L, 587L, 600L, 1170L) */ ((
							var_1_14
						) == (
							/* 425L, 161L, 587L, 600L, 1170L) */ ((double) (
								/* 428L, 160L, 590L, 603L, 1173L) */ ((
									var_1_15
								) - (
									var_1_16
								))
							))
						))
					) : (
						1
					))
				))
			) && (
				/* 433L, 213L, 660L, 686L, 1178L) */ ((
					/* 434L, 170L, 174L, 661L, 687L, 1179L) */ ((
						var_1_7
					) && (
						var_1_10
					))
				) ? (
					/* 437L, 207L, 664L, 690L, 1182L) */ ((
						/* 438L, 183L, 191L, 665L, 691L, 1183L) */ ((
							/* 439L, 181L, 192L, 666L, 692L, 1184L) */ ((
								/* 440L, 179L, 193L, 667L, 693L, 1185L) */ (max (
									/* 440L, 179L, 193L, 667L, 693L, 1185L) */ (
										var_1_4
									) , (
										var_1_1
									)
								))
							) + (
								var_1_5
							))
						) != (
							var_1_23
						))
					) ? (
						/* 445L, 201L, 672L, 698L, 1190L) */ ((
							var_1_17
						) == (
							/* 445L, 201L, 672L, 698L, 1190L) */ ((float) (
								100.85f
							))
						))
					) : (
						/* 449L, 205L, 676L, 702L, 1194L) */ ((
							var_1_17
						) == (
							/* 449L, 205L, 676L, 702L, 1194L) */ ((float) (
								var_1_13
							))
						))
					))
				) : (
					/* 453L, 211L, 680L, 706L, 1198L) */ ((
						var_1_17
					) == (
						/* 453L, 211L, 680L, 706L, 1198L) */ ((float) (
							var_1_13
						))
					))
				))
			))
		) && (
			/* 458L, 256L, 755L, 777L, 1203L) */ ((
				/* 459L, 229L, 235L, 756L, 778L, 1204L) */ ((
					/* 460L, 227L, 236L, 757L, 779L, 1205L) */ ((
						var_1_1
					) / (
						var_1_19
					))
				) <= (
					4
				))
			) ? (
				/* 464L, 249L, 761L, 783L, 1209L) */ ((
					var_1_18
				) == (
					/* 464L, 249L, 761L, 783L, 1209L) */ ((signed char) (
						/* 467L, 248L, 764L, 786L, 1212L) */ ((
							var_1_5
						) + (
							/* 469L, 247L, 766L, 788L, 1214L) */ (max (
								/* 469L, 247L, 766L, 788L, 1214L) */ (
									/* 470L, 245L, 767L, 789L, 1215L) */ ((
										var_1_19
									) - (
										var_1_20
									))
								) , (
									var_1_21
								)
							))
						))
					))
				))
			) : (
				/* 474L, 254L, 771L, 793L, 1219L) */ ((
					var_1_18
				) == (
					/* 474L, 254L, 771L, 793L, 1219L) */ ((signed char) (
						/* 477L, 253L, 774L, 796L, 1222L) */ (abs (
							var_1_21
						))
					))
				))
			))
		))
	) && (
		/* 481L, 264L, 812L, 818L, 1226L) */ ((
			var_1_22
		) == (
			/* 481L, 264L, 812L, 818L, 1226L) */ ((double) (
				var_1_13
			))
		))
	))
) && (
	/* 487L, 274L, 836L, 842L, 1232L) */ ((
		var_1_23
	) == (
		/* 487L, 274L, 836L, 842L, 1232L) */ ((unsigned long int) (
			var_1_20
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
