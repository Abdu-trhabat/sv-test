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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch87Filler_PE_CN.c", 13, "reach_error"); }
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
signed long int var_1_2 = 5;
signed long int var_1_3 = 5;
unsigned char var_1_4 = 1;
signed long int var_1_5 = 10;
signed long int var_1_6 = 256;
signed long int var_1_7 = 16;
unsigned char var_1_8 = 1;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 0;
double var_1_11 = 500.25;
double var_1_12 = 4.75;
double var_1_13 = 25.25;
double var_1_14 = 256.82;
double var_1_15 = 1.375;
signed long int var_1_16 = -256;
signed short int var_1_17 = 256;
signed long int var_1_18 = -5;
signed long int var_1_19 = 32;
signed long int var_1_20 = 64;
float var_1_21 = 2.375;
double var_1_22 = 256.75;
double var_1_23 = 255.1;
signed long int var_1_24 = 500;
signed short int var_1_25 = -128;
signed short int var_1_26 = 1;
signed short int var_1_27 = 16;
signed short int var_1_28 = 128;
double var_1_29 = 9.5;
double var_1_30 = 999.5;
unsigned char var_1_31 = 0;
unsigned char var_1_32 = 32;
signed short int var_1_33 = 25;
signed char var_1_34 = -4;
unsigned long int var_1_35 = 1;
unsigned long int var_1_36 = 25;
unsigned char var_1_37 = 0;
unsigned char var_1_38 = 0;
signed long int var_1_39 = 10;
unsigned char var_1_40 = 10;
signed long int var_1_41 = -64;
unsigned char var_1_42 = 4;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch87Filler_PE_CN
	signed long int stepLocal_0 = /* 826L, 11L, 17L, 266L, 287L) */ ((var_1_5) - (/* 828L, 10L, 19L, 268L, 289L) */ (min (/* 828L, 10L, 19L, 268L, 289L) */ (var_1_6) , (var_1_7)))));
	/* 846L, 41L, 261L, 282L) */ if (/* 835L, 12L, 13L, 262L, 283L) */ ((/* 834L, 4L, 14L, 263L, 284L) */ ((var_1_2) - (var_1_3))) >= (stepLocal_0))) {
		/* 845L, 40L, 271L, 292L) */ var_1_1 = (
			/* 844L, 39L, 274L, 295L) */ ((
				/* 842L, 37L, 275L, 296L) */ ((
					/* 840L, 35L, 276L, 297L) */ ((
						var_1_4
					) || (
						var_1_8
					))
				) && (
					var_1_9
				))
			) || (
				var_1_10
			))
		);
	}


	// From: Req2Batch87Filler_PE_CN
	/* 853L, 58L, 348L, 364L) */ var_1_11 = (
		/* 856L, 57L, 351L, 367L) */ (max (
			/* 856L, 57L, 351L, 367L) */ (
				/* 857L, 51L, 352L, 368L) */ (max (
					/* 857L, 51L, 352L, 368L) */ (
						var_1_12
					) , (
						var_1_13
					)
				))
			) , (
				/* 860L, 56L, 355L, 371L) */ ((
					var_1_14
				) - (
					/* 862L, 55L, 357L, 373L) */ ((
						5.86478081602821E18
					) - (
						var_1_15
					))
				))
			)
		))
	);


	// From: Req3Batch87Filler_PE_CN
	/* 867L, 111L, 410L, 438L) */ if (/* 868L, 73L, 74L, 411L, 439L) */ ((/* 869L, 71L, 75L, 412L, 440L) */ ((var_1_3) % (var_1_17))) >= (var_1_2))) {
		/* 873L, 93L, 416L, 444L) */ var_1_16 = (
			/* 876L, 92L, 419L, 447L) */ ((
				/* 877L, 88L, 420L, 448L) */ ((
					var_1_17
				) + (
					var_1_18
				))
			) + (
				/* 880L, 91L, 423L, 451L) */ ((
					var_1_19
				) - (
					var_1_20
				))
			))
		);
	} else {
		/* 883L, 109L, 426L, 454L) */ if (var_1_1) {
			/* 885L, 100L, 428L, 456L) */ var_1_16 = (
				var_1_17
			);
		} else {
			/* 889L, 108L, 432L, 460L) */ var_1_16 = (
				var_1_19
			);
		}
	}


	// From: Req4Batch87Filler_PE_CN
	/* 900L, 132L, 527L, 542L) */ if (/* 901L, 121L, 122L, 528L, 543L) */ ((var_1_3) < (var_1_5))) {
		/* 904L, 131L, 531L, 546L) */ var_1_21 = (
			var_1_14
		);
	}


	// From: Req5Batch87Filler_PE_CN
	signed short int stepLocal_1 = var_1_17;
	/* 938L, 193L, 581L, 610L) */ if (/* 914L, 152L, 153L, 582L, 611L) */ ((var_1_21) <= (var_1_15))) {
		/* 920L, 164L, 585L, 614L) */ var_1_22 = (
			/* 919L, 163L, 588L, 617L) */ (max (
				/* 919L, 163L, 588L, 617L) */ (
					var_1_13
				) , (
					255.75
				)
			))
		);
	} else {
		/* 937L, 191L, 591L, 620L) */ if (/* 922L, 167L, 168L, 592L, 621L) */ ((var_1_19) > (stepLocal_1))) {
			/* 932L, 185L, 595L, 624L) */ if (var_1_1) {
				/* 927L, 180L, 597L, 626L) */ var_1_22 = (
					var_1_15
				);
			} else {
				/* 931L, 184L, 601L, 630L) */ var_1_22 = (
					var_1_14
				);
			}
		} else {
			/* 936L, 190L, 605L, 634L) */ var_1_22 = (
				var_1_12
			);
		}
	}


	// From: Req6Batch87Filler_PE_CN
	/* 943L, 255L, 698L, 730L) */ if (/* 944L, 205L, 206L, 699L, 731L) */ ((/* 945L, 203L, 207L, 700L, 732L) */ ((/* 946L, 201L, 208L, 701L, 733L) */ ((64) + (var_1_19))) - (var_1_24))) <= (-128))) {
		/* 951L, 226L, 706L, 738L) */ var_1_23 = (
			/* 954L, 225L, 709L, 741L) */ (min (
				/* 954L, 225L, 709L, 741L) */ (
					var_1_14
				) , (
					/* 956L, 224L, 711L, 743L) */ (abs (
						var_1_12
					))
				)
			))
		);
	} else {
		/* 958L, 253L, 713L, 745L) */ if (/* 959L, 232L, 233L, 714L, 746L) */ ((/* 960L, 229L, 234L, 715L, 747L) */ ((var_1_18) / (var_1_17))) <= (/* 963L, 231L, 237L, 718L, 750L) */ (~ (var_1_6))))) {
			/* 965L, 248L, 720L, 752L) */ var_1_23 = (
				var_1_13
			);
		} else {
			/* 969L, 252L, 724L, 756L) */ var_1_23 = (
				0.725
			);
		}
	}


	// From: CodeObject1
	/* 23L) */ if (/* 7L, 6L) */ ((var_1_26) > (/* 9L, 5L) */ ((-100) ^ (var_1_27))))) {
		/* 22L) */ var_1_25 = (
			/* 21L) */ (min (
				/* 21L) */ (
					1
				) , (
					var_1_28
				)
			))
		);
	}


	// From: CodeObject2
	/* 32L) */ var_1_29 = (
		var_1_30
	);


	// From: CodeObject3
	/* 40L) */ var_1_31 = (
		var_1_32
	);


	// From: CodeObject4
	/* 144L) */ if (/* 48L, 47L) */ ((var_1_29) > (var_1_30))) {
		/* 57L) */ var_1_33 = (
			var_1_32
		);
	} else {
		/* 142L) */ if (/* 61L, 60L) */ ((var_1_29) >= (var_1_30))) {
			/* 136L) */ if (/* 74L, 73L) */ ((/* 75L, 69L) */ ((var_1_27) % (var_1_34))) > (/* 78L, 72L) */ ((var_1_31) + (var_1_32))))) {
				/* 93L) */ var_1_33 = (
					/* 92L) */ (abs (
						/* 91L) */ (abs (
							2
						))
					))
				);
			} else {
				/* 134L) */ if (/* 104L, 103L) */ ((/* 105L, 99L) */ ((var_1_27) & (var_1_34))) <= (/* 108L, 102L) */ (min (/* 108L, 102L) */ (var_1_31) , (var_1_28)))))) {
					/* 121L) */ var_1_33 = (
						var_1_32
					);
				} else {
					/* 133L) */ var_1_33 = (
						var_1_31
					);
				}
			}
		} else {
			/* 141L) */ var_1_33 = (
				var_1_28
			);
		}
	}


	// From: CodeObject5
	/* 172L) */ if (/* 154L, 153L) */ ((var_1_31) > (/* 156L, 152L) */ ((/* 157L, 150L) */ (abs (var_1_34))) << (var_1_25))))) {
		/* 171L) */ var_1_35 = (
			/* 170L) */ ((
				var_1_32
			) + (
				var_1_31
			))
		);
	}


	// From: CodeObject6
	/* 204L) */ if (/* 185L, 184L) */ ((var_1_26) == (var_1_34))) {
		/* 196L) */ var_1_36 = (
			/* 195L) */ (max (
				/* 195L) */ (
					var_1_31
				) , (
					var_1_32
				)
			))
		);
	} else {
		/* 203L) */ var_1_36 = (
			/* 202L) */ (min (
				/* 202L) */ (
					var_1_32
				) , (
					/* 201L) */ (abs (
						var_1_31
					))
				)
			))
		);
	}


	// From: CodeObject7
	/* 245L) */ if (var_1_38) {
		/* 215L) */ var_1_37 = (
			/* 214L) */ (abs (
				var_1_32
			))
		);
	} else {
		/* 243L) */ if (/* 223L, 222L) */ ((/* 224L, 220L) */ ((/* 225L, 218L) */ ((var_1_36) + (var_1_32))) >> (var_1_39))) > (var_1_31))) {
			/* 242L) */ var_1_37 = (
				/* 241L) */ ((
					var_1_39
				) + (
					var_1_40
				))
			);
		}
	}


	// From: CodeObject8
	/* 252L) */ var_1_41 = (
		var_1_31
	);


	// From: CodeObject9
	/* 260L) */ var_1_42 = (
		var_1_39
	);
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -1);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -1);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 2147483647);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 2147483647);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 1);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= -922337.2036854766000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= -922337.2036854766000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_17 >= -32768);
	assume_abort_if_not(var_1_17 <= 32767);
	assume_abort_if_not(var_1_17 != 0);
	var_1_18 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_18 >= -536870911);
	assume_abort_if_not(var_1_18 <= 536870911);
	var_1_19 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 1073741823);
	var_1_20 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 1073741823);
	var_1_24 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 2147483647);
	var_1_26 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_26 >= -32768);
	assume_abort_if_not(var_1_26 <= 32767);
	var_1_27 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_27 >= -32768);
	assume_abort_if_not(var_1_27 <= 32767);
	var_1_28 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_28 >= -32767);
	assume_abort_if_not(var_1_28 <= 32766);
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= -922337.2036854766000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854766000e+12F && var_1_30 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 254);
	var_1_34 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_34 >= -128);
	assume_abort_if_not(var_1_34 <= 127);
	assume_abort_if_not(var_1_34 != 0);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 1);
	var_1_39 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_39 >= 1);
	assume_abort_if_not(var_1_39 <= 31);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 127);
}



void updateLastVariables(void) {
}

int property(void) {
	if (/* 264L, 12L, 22L, 304L, 325L, 975L) */ ((/* 265L, 4L, 23L, 305L, 326L, 976L) */ ((var_1_2) - (var_1_3))) >= (/* 268L, 11L, 26L, 308L, 329L, 979L) */ ((var_1_5) - (/* 270L, 10L, 28L, 310L, 331L, 981L) */ (min (/* 270L, 10L, 28L, 310L, 331L, 981L) */ (var_1_6) , (var_1_7)))))))) {
	}
	if (/* 302L, 73L, 79L, 467L, 495L, 1013L) */ ((/* 303L, 71L, 80L, 468L, 496L, 1014L) */ ((var_1_3) % (var_1_17))) >= (var_1_2))) {
	} else {
		if (var_1_1) {
		} else {
		}
	}
	if (/* 335L, 121L, 125L, 558L, 573L, 1046L) */ ((var_1_3) < (var_1_5))) {
	}
	if (/* 344L, 152L, 156L, 640L, 669L, 1055L) */ ((var_1_21) <= (var_1_15))) {
	} else {
		if (/* 354L, 167L, 171L, 650L, 679L, 1065L) */ ((var_1_19) > (var_1_17))) {
			if (var_1_1) {
			} else {
			}
		} else {
		}
	}
	if (/* 374L, 205L, 213L, 763L, 795L, 1085L) */ ((/* 375L, 203L, 214L, 764L, 796L, 1086L) */ ((/* 376L, 201L, 215L, 765L, 797L, 1087L) */ ((64) + (var_1_19))) - (var_1_24))) <= (-128))) {
	} else {
		if (/* 389L, 232L, 239L, 778L, 810L, 1100L) */ ((/* 390L, 229L, 240L, 779L, 811L, 1101L) */ ((var_1_18) / (var_1_17))) <= (/* 393L, 231L, 243L, 782L, 814L, 1104L) */ (~ (var_1_6))))) {
		} else {
		}
	}
	return /* 408L) */ ((
	/* 407L) */ ((
		/* 406L) */ ((
			/* 405L) */ ((
				/* 404L) */ ((
					/* 263L, 42L, 303L, 324L, 974L) */ ((
						/* 264L, 12L, 22L, 304L, 325L, 975L) */ ((
							/* 265L, 4L, 23L, 305L, 326L, 976L) */ ((
								var_1_2
							) - (
								var_1_3
							))
						) >= (
							/* 268L, 11L, 26L, 308L, 329L, 979L) */ ((
								var_1_5
							) - (
								/* 270L, 10L, 28L, 310L, 331L, 981L) */ (min (
									/* 270L, 10L, 28L, 310L, 331L, 981L) */ (
										var_1_6
									) , (
										var_1_7
									)
								))
							))
						))
					) ? (
						/* 273L, 40L, 313L, 334L, 984L) */ ((
							var_1_1
						) == (
							/* 273L, 40L, 313L, 334L, 984L) */ ((unsigned char) (
								/* 276L, 39L, 316L, 337L, 987L) */ ((
									/* 277L, 37L, 317L, 338L, 988L) */ ((
										/* 278L, 35L, 318L, 339L, 989L) */ ((
											var_1_4
										) || (
											var_1_8
										))
									) && (
										var_1_9
									))
								) || (
									var_1_10
								))
							))
						))
					) : (
						1
					))
				) && (
					/* 287L, 58L, 380L, 396L, 998L) */ ((
						var_1_11
					) == (
						/* 287L, 58L, 380L, 396L, 998L) */ ((double) (
							/* 290L, 57L, 383L, 399L, 1001L) */ (max (
								/* 290L, 57L, 383L, 399L, 1001L) */ (
									/* 291L, 51L, 384L, 400L, 1002L) */ (max (
										/* 291L, 51L, 384L, 400L, 1002L) */ (
											var_1_12
										) , (
											var_1_13
										)
									))
								) , (
									/* 294L, 56L, 387L, 403L, 1005L) */ ((
										var_1_14
									) - (
										/* 296L, 55L, 389L, 405L, 1007L) */ ((
											5.86478081602821E18
										) - (
											var_1_15
										))
									))
								)
							))
						))
					))
				))
			) && (
				/* 301L, 112L, 466L, 494L, 1012L) */ ((
					/* 302L, 73L, 79L, 467L, 495L, 1013L) */ ((
						/* 303L, 71L, 80L, 468L, 496L, 1014L) */ ((
							var_1_3
						) % (
							var_1_17
						))
					) >= (
						var_1_2
					))
				) ? (
					/* 307L, 93L, 472L, 500L, 1018L) */ ((
						var_1_16
					) == (
						/* 307L, 93L, 472L, 500L, 1018L) */ ((signed long int) (
							/* 310L, 92L, 475L, 503L, 1021L) */ ((
								/* 311L, 88L, 476L, 504L, 1022L) */ ((
									var_1_17
								) + (
									var_1_18
								))
							) + (
								/* 314L, 91L, 479L, 507L, 1025L) */ ((
									var_1_19
								) - (
									var_1_20
								))
							))
						))
					))
				) : (
					/* 317L, 110L, 482L, 510L, 1028L) */ ((
						var_1_1
					) ? (
						/* 319L, 100L, 484L, 512L, 1030L) */ ((
							var_1_16
						) == (
							/* 319L, 100L, 484L, 512L, 1030L) */ ((signed long int) (
								var_1_17
							))
						))
					) : (
						/* 323L, 108L, 488L, 516L, 1034L) */ ((
							var_1_16
						) == (
							/* 323L, 108L, 488L, 516L, 1034L) */ ((signed long int) (
								var_1_19
							))
						))
					))
				))
			))
		) && (
			/* 334L, 133L, 557L, 572L, 1045L) */ ((
				/* 335L, 121L, 125L, 558L, 573L, 1046L) */ ((
					var_1_3
				) < (
					var_1_5
				))
			) ? (
				/* 338L, 131L, 561L, 576L, 1049L) */ ((
					var_1_21
				) == (
					/* 338L, 131L, 561L, 576L, 1049L) */ ((float) (
						var_1_14
					))
				))
			) : (
				1
			))
		))
	) && (
		/* 343L, 194L, 639L, 668L, 1054L) */ ((
			/* 344L, 152L, 156L, 640L, 669L, 1055L) */ ((
				var_1_21
			) <= (
				var_1_15
			))
		) ? (
			/* 347L, 164L, 643L, 672L, 1058L) */ ((
				var_1_22
			) == (
				/* 347L, 164L, 643L, 672L, 1058L) */ ((double) (
					/* 350L, 163L, 646L, 675L, 1061L) */ (max (
						/* 350L, 163L, 646L, 675L, 1061L) */ (
							var_1_13
						) , (
							255.75
						)
					))
				))
			))
		) : (
			/* 353L, 192L, 649L, 678L, 1064L) */ ((
				/* 354L, 167L, 171L, 650L, 679L, 1065L) */ ((
					var_1_19
				) > (
					var_1_17
				))
			) ? (
				/* 357L, 186L, 653L, 682L, 1068L) */ ((
					var_1_1
				) ? (
					/* 359L, 180L, 655L, 684L, 1070L) */ ((
						var_1_22
					) == (
						/* 359L, 180L, 655L, 684L, 1070L) */ ((double) (
							var_1_15
						))
					))
				) : (
					/* 363L, 184L, 659L, 688L, 1074L) */ ((
						var_1_22
					) == (
						/* 363L, 184L, 659L, 688L, 1074L) */ ((double) (
							var_1_14
						))
					))
				))
			) : (
				/* 367L, 190L, 663L, 692L, 1078L) */ ((
					var_1_22
				) == (
					/* 367L, 190L, 663L, 692L, 1078L) */ ((double) (
						var_1_12
					))
				))
			))
		))
	))
) && (
	/* 373L, 256L, 762L, 794L, 1084L) */ ((
		/* 374L, 205L, 213L, 763L, 795L, 1085L) */ ((
			/* 375L, 203L, 214L, 764L, 796L, 1086L) */ ((
				/* 376L, 201L, 215L, 765L, 797L, 1087L) */ ((
					64
				) + (
					var_1_19
				))
			) - (
				var_1_24
			))
		) <= (
			-128
		))
	) ? (
		/* 381L, 226L, 770L, 802L, 1092L) */ ((
			var_1_23
		) == (
			/* 381L, 226L, 770L, 802L, 1092L) */ ((double) (
				/* 384L, 225L, 773L, 805L, 1095L) */ (min (
					/* 384L, 225L, 773L, 805L, 1095L) */ (
						var_1_14
					) , (
						/* 386L, 224L, 775L, 807L, 1097L) */ (abs (
							var_1_12
						))
					)
				))
			))
		))
	) : (
		/* 388L, 254L, 777L, 809L, 1099L) */ ((
			/* 389L, 232L, 239L, 778L, 810L, 1100L) */ ((
				/* 390L, 229L, 240L, 779L, 811L, 1101L) */ ((
					var_1_18
				) / (
					var_1_17
				))
			) <= (
				/* 393L, 231L, 243L, 782L, 814L, 1104L) */ (~ (
					var_1_6
				))
			))
		) ? (
			/* 395L, 248L, 784L, 816L, 1106L) */ ((
				var_1_23
			) == (
				/* 395L, 248L, 784L, 816L, 1106L) */ ((double) (
					var_1_13
				))
			))
		) : (
			/* 399L, 252L, 788L, 820L, 1110L) */ ((
				var_1_23
			) == (
				/* 399L, 252L, 788L, 820L, 1110L) */ ((double) (
					0.725
				))
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
