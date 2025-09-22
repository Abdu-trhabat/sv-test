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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch15Filler_PE_CN.c", 13, "reach_error"); }
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
signed short int var_1_1 = -10;
unsigned char var_1_2 = 0;
signed short int var_1_5 = 2;
signed short int var_1_6 = -32;
signed short int var_1_7 = 10;
signed short int var_1_8 = 64;
signed short int var_1_9 = 256;
signed char var_1_10 = -5;
signed char var_1_11 = 5;
double var_1_12 = 256.4;
double var_1_15 = 32.5;
double var_1_16 = 10000000000.25;
signed char var_1_17 = -5;
unsigned char var_1_18 = 1;
unsigned short int var_1_19 = 64;
unsigned short int var_1_20 = 5;
unsigned long int var_1_21 = 10000000;
unsigned long int var_1_22 = 3445332657;
float var_1_23 = -0.25;
float var_1_24 = 9999999.75;
float var_1_25 = 25.75;
float var_1_26 = 64.25;
signed short int var_1_27 = 10;
unsigned char var_1_28 = 0;
signed short int var_1_29 = -16;
signed short int var_1_30 = 32;
unsigned char var_1_31 = 1;
unsigned char var_1_32 = 1;
signed short int var_1_33 = 0;
signed short int var_1_34 = 10;
signed long int var_1_35 = -10;
signed long int var_1_36 = 200;
double var_1_37 = 4.85;
double var_1_38 = 2.5;
double var_1_39 = 15.75;
signed char var_1_40 = -100;
signed char var_1_41 = 1;
signed short int var_1_42 = -32;
signed char var_1_43 = 4;
signed char var_1_44 = -8;
signed short int var_1_45 = -25;

// Calibration values

// Last'ed variables
float last_1_var_1_23 = -0.25;
float last_1_var_1_26 = 64.25;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch15Filler_PE_CN
	/* 23L, 90L, 455L, 476L, 968L, 1033L) */ if (/* 10L, 63L, 64L, 456L, 477L, 955L, 1034L) */ ((last_1_var_1_26) >= (/* 9L, 62L, 66L, 458L, 479L, 954L, 1037L) */ ((last_1_var_1_26) * (/* 8L, 61L, 68L, 460L, 481L, 953L, 1040L) */ ((last_1_var_1_26) + (last_1_var_1_23))))))) {
		/* 18L, 85L, 463L, 484L, 963L, 1045L) */ var_1_12 = (
			/* 17L, 84L, 466L, 487L, 962L, 1048L) */ (min (
				/* 17L, 84L, 466L, 487L, 962L, 1048L) */ (
					/* 15L, 82L, 467L, 488L, 960L, 1049L) */ ((
						var_1_15
					) - (
						var_1_16
					))
				) , (
					-0.85
				)
			))
		);
	} else {
		/* 22L, 89L, 471L, 492L, 967L, 1053L) */ var_1_12 = (
			var_1_16
		);
	}


	// From: Req2Batch15Filler_PE_CN
	/* 1028L, 44L, 423L, 432L) */ var_1_10 = (
		var_1_11
	);


	// From: Req5Batch15Filler_PE_CN
	/* 1082L, 158L, 654L, 667L) */ if (/* 1083L, 145L, 146L, 655L, 668L) */ (! (var_1_2))) {
		/* 1085L, 157L, 657L, 670L) */ var_1_19 = (
			/* 1088L, 156L, 660L, 673L) */ ((
				/* 1089L, 154L, 661L, 674L) */ (min (
					/* 1089L, 154L, 661L, 674L) */ (
						var_1_7
					) , (
						var_1_9
					)
				))
			) + (
				var_1_20
			))
		);
	}


	// From: Req6Batch15Filler_PE_CN
	/* 1094L, 177L, 705L, 716L) */ if (var_1_18) {
		/* 1096L, 176L, 707L, 718L) */ var_1_21 = (
			/* 1099L, 175L, 710L, 721L) */ ((
				/* 1100L, 173L, 711L, 722L) */ (max (
					/* 1100L, 173L, 711L, 722L) */ (
						3346787891u
					) , (
						var_1_22
					)
				))
			) - (
				var_1_7
			))
		);
	}


	// From: Req7Batch15Filler_PE_CN
	/* 1106L, 208L, 750L, 772L) */ if (/* 1107L, 185L, 186L, 751L, 773L) */ ((-1) < (var_1_6))) {
		/* 1110L, 201L, 754L, 776L) */ var_1_23 = (
			/* 1113L, 200L, 757L, 779L) */ (min (
				/* 1113L, 200L, 757L, 779L) */ (
					/* 1114L, 198L, 758L, 780L) */ ((
						var_1_16
					) - (
						/* 1116L, 197L, 760L, 782L) */ (min (
							/* 1116L, 197L, 760L, 782L) */ (
								var_1_15
							) , (
								var_1_24
							)
						))
					))
				) , (
					var_1_25
				)
			))
		);
	} else {
		/* 1120L, 207L, 764L, 786L) */ var_1_23 = (
			/* 1123L, 206L, 767L, 789L) */ (min (
				/* 1123L, 206L, 767L, 789L) */ (
					var_1_15
				) , (
					var_1_25
				)
			))
		);
	}


	// From: Req8Batch15Filler_PE_CN
	unsigned short int stepLocal_2 = var_1_19;
	/* 1154L, 265L, 837L, 864L) */ if (/* 1132L, 218L, 219L, 838L, 865L) */ ((var_1_15) > (var_1_12))) {
		/* 1149L, 259L, 841L, 868L) */ if (/* 1138L, 231L, 232L, 842L, 869L) */ ((/* 1137L, 229L, 233L, 843L, 870L) */ ((/* 1135L, 227L, 234L, 844L, 871L) */ ((var_1_20) + (var_1_21))) - (var_1_7))) >= (stepLocal_2))) {
			/* 1148L, 257L, 849L, 876L) */ if (var_1_2) {
				/* 1143L, 252L, 851L, 878L) */ var_1_26 = (
					var_1_15
				);
			} else {
				/* 1147L, 256L, 855L, 882L) */ var_1_26 = (
					9.999999999999923E13f
				);
			}
		}
	} else {
		/* 1153L, 264L, 859L, 886L) */ var_1_26 = (
			var_1_15
		);
	}


	// From: Req1Batch15Filler_PE_CN
	unsigned char stepLocal_0 = /* 996L, 5L, 9L, 322L, 347L) */ ((var_1_26) > (var_1_12));
	/* 1020L, 35L, 319L, 344L) */ if (/* 1001L, 6L, 7L, 320L, 345L) */ ((var_1_2) || (stepLocal_0))) {
		/* 1007L, 22L, 325L, 350L) */ var_1_1 = (
			/* 1006L, 21L, 328L, 353L) */ ((
				var_1_5
			) + (
				var_1_6
			))
		);
	} else {
		/* 1019L, 34L, 331L, 356L) */ var_1_1 = (
			/* 1018L, 33L, 334L, 359L) */ ((
				/* 1014L, 29L, 335L, 360L) */ (min (
					/* 1014L, 29L, 335L, 360L) */ (
						/* 1012L, 27L, 336L, 361L) */ ((
							var_1_7
						) + (
							1
						))
					) , (
						var_1_8
					)
				))
			) - (
				/* 1017L, 32L, 340L, 365L) */ ((
					24762
				) - (
					var_1_9
				))
			))
		);
	}


	// From: Req4Batch15Filler_PE_CN
	unsigned char stepLocal_1 = var_1_2;
	/* 1077L, 138L, 577L, 596L) */ if (/* 1065L, 104L, 105L, 578L, 597L) */ ((var_1_23) <= (/* 1064L, 103L, 107L, 580L, 599L) */ (min (/* 1064L, 103L, 107L, 580L, 599L) */ (var_1_26) , (var_1_12)))))) {
		/* 1076L, 136L, 583L, 602L) */ if (/* 1067L, 117L, 118L, 584L, 603L) */ ((stepLocal_1) || (var_1_18))) {
			/* 1071L, 127L, 587L, 606L) */ var_1_17 = (
				var_1_11
			);
		} else {
			/* 1075L, 135L, 591L, 610L) */ var_1_17 = (
				16
			);
		}
	}


	// From: CodeObject1
	/* 123L) */ if (/* 54L, 53L) */ (! (var_1_28))) {
		/* 121L) */ if (var_1_28) {
			/* 67L) */ var_1_27 = (
				/* 66L) */ (abs (
					/* 65L) */ (min (
						/* 65L) */ (
							var_1_29
						) , (
							var_1_30
						)
					))
				))
			);
		} else {
			/* 119L) */ if (/* 71L, 70L) */ ((var_1_29) >= (25))) {
				/* 113L) */ if (/* 82L, 81L) */ ((/* 83L, 79L) */ ((0) > (var_1_29))) || (var_1_31))) {
					/* 97L) */ var_1_27 = (
						/* 96L) */ (abs (
							/* 95L) */ (abs (
								-50
							))
						))
					);
				} else {
					/* 111L) */ if (var_1_32) {
						/* 106L) */ var_1_27 = (
							/* 105L) */ ((
								var_1_33
							) - (
								var_1_34
							))
						);
					} else {
						/* 110L) */ var_1_27 = (
							var_1_30
						);
					}
				}
			} else {
				/* 118L) */ var_1_27 = (
					var_1_29
				);
			}
		}
	}


	// From: CodeObject2
	/* 136L) */ var_1_35 = (
		/* 135L) */ (min (
			/* 135L) */ (
				128
			) , (
				/* 134L) */ (max (
					/* 134L) */ (
						var_1_36
					) , (
						/* 133L) */ ((
							-5
						) + (
							var_1_29
						))
					)
				))
			)
		))
	);


	// From: CodeObject3
	/* 162L) */ if (var_1_28) {
		/* 155L) */ var_1_37 = (
			/* 154L) */ ((
				/* 148L) */ (min (
					/* 148L) */ (
						4.2
					) , (
						var_1_38
					)
				))
			) - (
				/* 153L) */ ((
					/* 151L) */ ((
						8.021944736140885E18
					) - (
						var_1_39
					))
				) - (
					16.75
				))
			))
		);
	} else {
		/* 161L) */ var_1_37 = (
			/* 160L) */ (max (
				/* 160L) */ (
					var_1_39
				) , (
					var_1_38
				)
			))
		);
	}


	// From: CodeObject4
	/* 169L) */ var_1_40 = (
		var_1_41
	);


	// From: CodeObject5
	/* 185L) */ if (var_1_32) {
		/* 184L) */ var_1_42 = (
			/* 183L) */ (max (
				/* 183L) */ (
					/* 181L) */ (min (
						/* 181L) */ (
							var_1_30
						) , (
							var_1_41
						)
					))
				) , (
					var_1_33
				)
			))
		);
	}


	// From: CodeObject6
	/* 205L) */ if (/* 194L, 193L) */ ((var_1_35) <= (var_1_40))) {
		/* 204L) */ var_1_43 = (
			/* 203L) */ (abs (
				var_1_44
			))
		);
	}


	// From: CodeObject7
	/* 259L) */ if (/* 213L, 212L) */ ((/* 214L, 210L) */ (! (var_1_28))) || (var_1_32))) {
		/* 224L) */ var_1_45 = (
			var_1_44
		);
	} else {
		/* 257L) */ if (/* 228L, 227L) */ ((var_1_31) || (var_1_28))) {
			/* 237L) */ var_1_45 = (
				var_1_34
			);
		} else {
			/* 255L) */ if (/* 241L, 240L) */ ((4u) >= (var_1_35))) {
				/* 250L) */ var_1_45 = (
					var_1_43
				);
			} else {
				/* 254L) */ var_1_45 = (
					2
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
	assume_abort_if_not(var_1_5 >= -16383);
	assume_abort_if_not(var_1_5 <= 16383);
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= -16383);
	assume_abort_if_not(var_1_6 <= 16383);
	var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 16383);
	var_1_8 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_8 >= -1);
	assume_abort_if_not(var_1_8 <= 32766);
	var_1_9 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 16383);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -127);
	assume_abort_if_not(var_1_11 <= 126);
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 1);
	var_1_20 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 32767);
	var_1_22 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_22 >= 2147483647);
	assume_abort_if_not(var_1_22 <= 4294967294);
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854766000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_25 >= -922337.2036854766000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854766000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 1);
	var_1_29 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_29 >= -32766);
	assume_abort_if_not(var_1_29 <= 32766);
	var_1_30 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_30 >= -32766);
	assume_abort_if_not(var_1_30 <= 32766);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 1);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 1);
	var_1_33 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_33 >= -1);
	assume_abort_if_not(var_1_33 <= 32766);
	var_1_34 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 32766);
	var_1_36 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_36 >= -2147483647);
	assume_abort_if_not(var_1_36 <= 2147483646);
	var_1_38 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854766000e+12F && var_1_38 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 2305843.009213691400e+12F && var_1_39 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_41 >= -127);
	assume_abort_if_not(var_1_41 <= 126);
	var_1_44 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_44 >= -126);
	assume_abort_if_not(var_1_44 <= 126);
}



void updateLastVariables(void) {
	last_1_var_1_23 = var_1_23;
	last_1_var_1_26 = var_1_26;
}

int property(void) {
	if (/* 264L, 6L, 12L, 370L, 395L, 1159L) */ ((var_1_2) || (/* 266L, 5L, 14L, 372L, 397L, 1161L) */ ((var_1_26) > (var_1_12))))) {
	} else {
	}
	if (/* 298L, 63L, 71L, 498L, 519L, 980L, 1193L, 35L) */ ((last_1_var_1_26) >= (/* 301L, 62L, 73L, 500L, 521L, 979L, 1196L, 34L) */ ((last_1_var_1_26) * (/* 304L, 61L, 75L, 502L, 523L, 978L, 1199L, 33L) */ ((last_1_var_1_26) + (last_1_var_1_23))))))) {
	} else {
	}
	if (/* 323L, 104L, 110L, 616L, 635L, 1218L) */ ((var_1_23) <= (/* 325L, 103L, 112L, 618L, 637L, 1220L) */ (min (/* 325L, 103L, 112L, 618L, 637L, 1220L) */ (var_1_26) , (var_1_12)))))) {
		if (/* 329L, 117L, 121L, 622L, 641L, 1224L) */ ((var_1_2) || (var_1_18))) {
		} else {
		}
	}
	if (/* 343L, 145L, 148L, 681L, 694L, 1238L) */ (! (var_1_2))) {
	}
	if (var_1_18) {
	}
	if (/* 367L, 185L, 189L, 795L, 817L, 1262L) */ ((-1) < (var_1_6))) {
	} else {
	}
	if (/* 388L, 218L, 222L, 892L, 919L, 1283L) */ ((var_1_15) > (var_1_12))) {
		if (/* 392L, 231L, 239L, 896L, 923L, 1287L) */ ((/* 393L, 229L, 240L, 897L, 924L, 1288L) */ ((/* 394L, 227L, 241L, 898L, 925L, 1289L) */ ((var_1_20) + (var_1_21))) - (var_1_7))) >= (var_1_19))) {
			if (var_1_2) {
			} else {
			}
		}
	} else {
	}
	return /* 420L) */ ((
	/* 419L) */ ((
		/* 418L) */ ((
			/* 417L) */ ((
				/* 416L) */ ((
					/* 415L) */ ((
						/* 414L) */ ((
							/* 263L, 36L, 369L, 394L, 1158L) */ ((
								/* 264L, 6L, 12L, 370L, 395L, 1159L) */ ((
									var_1_2
								) || (
									/* 266L, 5L, 14L, 372L, 397L, 1161L) */ ((
										var_1_26
									) > (
										var_1_12
									))
								))
							) ? (
								/* 269L, 22L, 375L, 400L, 1164L) */ ((
									var_1_1
								) == (
									/* 269L, 22L, 375L, 400L, 1164L) */ ((signed short int) (
										/* 272L, 21L, 378L, 403L, 1167L) */ ((
											var_1_5
										) + (
											var_1_6
										))
									))
								))
							) : (
								/* 275L, 34L, 381L, 406L, 1170L) */ ((
									var_1_1
								) == (
									/* 275L, 34L, 381L, 406L, 1170L) */ ((signed short int) (
										/* 278L, 33L, 384L, 409L, 1173L) */ ((
											/* 279L, 29L, 385L, 410L, 1174L) */ (min (
												/* 279L, 29L, 385L, 410L, 1174L) */ (
													/* 280L, 27L, 386L, 411L, 1175L) */ ((
														var_1_7
													) + (
														1
													))
												) , (
													var_1_8
												)
											))
										) - (
											/* 284L, 32L, 390L, 415L, 1179L) */ ((
												24762
											) - (
												var_1_9
											))
										))
									))
								))
							))
						) && (
							/* 292L, 44L, 441L, 450L, 1187L) */ ((
								var_1_10
							) == (
								/* 292L, 44L, 441L, 450L, 1187L) */ ((signed char) (
									var_1_11
								))
							))
						))
					) && (
						/* 297L, 91L, 497L, 518L, 993L, 1192L, 48L) */ ((
							/* 298L, 63L, 71L, 498L, 519L, 980L, 1193L, 35L) */ ((
								last_1_var_1_26
							) >= (
								/* 301L, 62L, 73L, 500L, 521L, 979L, 1196L, 34L) */ ((
									last_1_var_1_26
								) * (
									/* 304L, 61L, 75L, 502L, 523L, 978L, 1199L, 33L) */ ((
										last_1_var_1_26
									) + (
										last_1_var_1_23
									))
								))
							))
						) ? (
							/* 309L, 85L, 505L, 526L, 988L, 1204L, 43L) */ ((
								var_1_12
							) == (
								/* 309L, 85L, 505L, 526L, 988L, 1204L, 43L) */ ((double) (
									/* 312L, 84L, 508L, 529L, 987L, 1207L, 42L) */ (min (
										/* 312L, 84L, 508L, 529L, 987L, 1207L, 42L) */ (
											/* 313L, 82L, 509L, 530L, 985L, 1208L, 40L) */ ((
												var_1_15
											) - (
												var_1_16
											))
										) , (
											-0.85
										)
									))
								))
							))
						) : (
							/* 317L, 89L, 513L, 534L, 992L, 1212L, 47L) */ ((
								var_1_12
							) == (
								/* 317L, 89L, 513L, 534L, 992L, 1212L, 47L) */ ((double) (
									var_1_16
								))
							))
						))
					))
				) && (
					/* 322L, 139L, 615L, 634L, 1217L) */ ((
						/* 323L, 104L, 110L, 616L, 635L, 1218L) */ ((
							var_1_23
						) <= (
							/* 325L, 103L, 112L, 618L, 637L, 1220L) */ (min (
								/* 325L, 103L, 112L, 618L, 637L, 1220L) */ (
									var_1_26
								) , (
									var_1_12
								)
							))
						))
					) ? (
						/* 328L, 137L, 621L, 640L, 1223L) */ ((
							/* 329L, 117L, 121L, 622L, 641L, 1224L) */ ((
								var_1_2
							) || (
								var_1_18
							))
						) ? (
							/* 332L, 127L, 625L, 644L, 1227L) */ ((
								var_1_17
							) == (
								/* 332L, 127L, 625L, 644L, 1227L) */ ((signed char) (
									var_1_11
								))
							))
						) : (
							/* 336L, 135L, 629L, 648L, 1231L) */ ((
								var_1_17
							) == (
								/* 336L, 135L, 629L, 648L, 1231L) */ ((signed char) (
									16
								))
							))
						))
					) : (
						1
					))
				))
			) && (
				/* 342L, 159L, 680L, 693L, 1237L) */ ((
					/* 343L, 145L, 148L, 681L, 694L, 1238L) */ (! (
						var_1_2
					))
				) ? (
					/* 345L, 157L, 683L, 696L, 1240L) */ ((
						var_1_19
					) == (
						/* 345L, 157L, 683L, 696L, 1240L) */ ((unsigned short int) (
							/* 348L, 156L, 686L, 699L, 1243L) */ ((
								/* 349L, 154L, 687L, 700L, 1244L) */ (min (
									/* 349L, 154L, 687L, 700L, 1244L) */ (
										var_1_7
									) , (
										var_1_9
									)
								))
							) + (
								var_1_20
							))
						))
					))
				) : (
					1
				))
			))
		) && (
			/* 354L, 178L, 727L, 738L, 1249L) */ ((
				var_1_18
			) ? (
				/* 356L, 176L, 729L, 740L, 1251L) */ ((
					var_1_21
				) == (
					/* 356L, 176L, 729L, 740L, 1251L) */ ((unsigned long int) (
						/* 359L, 175L, 732L, 743L, 1254L) */ ((
							/* 360L, 173L, 733L, 744L, 1255L) */ (max (
								/* 360L, 173L, 733L, 744L, 1255L) */ (
									3346787891u
								) , (
									var_1_22
								)
							))
						) - (
							var_1_7
						))
					))
				))
			) : (
				1
			))
		))
	) && (
		/* 366L, 209L, 794L, 816L, 1261L) */ ((
			/* 367L, 185L, 189L, 795L, 817L, 1262L) */ ((
				-1
			) < (
				var_1_6
			))
		) ? (
			/* 370L, 201L, 798L, 820L, 1265L) */ ((
				var_1_23
			) == (
				/* 370L, 201L, 798L, 820L, 1265L) */ ((float) (
					/* 373L, 200L, 801L, 823L, 1268L) */ (min (
						/* 373L, 200L, 801L, 823L, 1268L) */ (
							/* 374L, 198L, 802L, 824L, 1269L) */ ((
								var_1_16
							) - (
								/* 376L, 197L, 804L, 826L, 1271L) */ (min (
									/* 376L, 197L, 804L, 826L, 1271L) */ (
										var_1_15
									) , (
										var_1_24
									)
								))
							))
						) , (
							var_1_25
						)
					))
				))
			))
		) : (
			/* 380L, 207L, 808L, 830L, 1275L) */ ((
				var_1_23
			) == (
				/* 380L, 207L, 808L, 830L, 1275L) */ ((float) (
					/* 383L, 206L, 811L, 833L, 1278L) */ (min (
						/* 383L, 206L, 811L, 833L, 1278L) */ (
							var_1_15
						) , (
							var_1_25
						)
					))
				))
			))
		))
	))
) && (
	/* 387L, 266L, 891L, 918L, 1282L) */ ((
		/* 388L, 218L, 222L, 892L, 919L, 1283L) */ ((
			var_1_15
		) > (
			var_1_12
		))
	) ? (
		/* 391L, 260L, 895L, 922L, 1286L) */ ((
			/* 392L, 231L, 239L, 896L, 923L, 1287L) */ ((
				/* 393L, 229L, 240L, 897L, 924L, 1288L) */ ((
					/* 394L, 227L, 241L, 898L, 925L, 1289L) */ ((
						var_1_20
					) + (
						var_1_21
					))
				) - (
					var_1_7
				))
			) >= (
				var_1_19
			))
		) ? (
			/* 399L, 258L, 903L, 930L, 1294L) */ ((
				var_1_2
			) ? (
				/* 401L, 252L, 905L, 932L, 1296L) */ ((
					var_1_26
				) == (
					/* 401L, 252L, 905L, 932L, 1296L) */ ((float) (
						var_1_15
					))
				))
			) : (
				/* 405L, 256L, 909L, 936L, 1300L) */ ((
					var_1_26
				) == (
					/* 405L, 256L, 909L, 936L, 1300L) */ ((float) (
						9.999999999999923E13f
					))
				))
			))
		) : (
			1
		))
	) : (
		/* 409L, 264L, 913L, 940L, 1304L) */ ((
			var_1_26
		) == (
			/* 409L, 264L, 913L, 940L, 1304L) */ ((float) (
				var_1_15
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
