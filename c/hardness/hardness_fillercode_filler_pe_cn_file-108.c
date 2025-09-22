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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch108Filler_PE_CN.c", 13, "reach_error"); }
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
float var_1_1 = 31.625;
float var_1_5 = 1.25;
float var_1_6 = 10000000000.8;
unsigned short int var_1_7 = 256;
unsigned short int var_1_9 = 10000;
unsigned short int var_1_10 = 10000;
unsigned short int var_1_11 = 256;
unsigned short int var_1_12 = 55248;
signed long int var_1_13 = 0;
unsigned char var_1_14 = 0;
unsigned char var_1_15 = 0;
signed long int var_1_16 = 4;
unsigned short int var_1_17 = 4;
unsigned short int var_1_19 = 28085;
unsigned char var_1_20 = 50;
unsigned char var_1_21 = 16;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 128;
unsigned char var_1_24 = 128;
unsigned char var_1_25 = 0;
signed short int var_1_26 = 1;
signed long int var_1_27 = 64;
unsigned char var_1_28 = 1;
float var_1_29 = 64.875;
float var_1_30 = 128.5;
signed long int var_1_31 = 64;
signed long int var_1_32 = 5;
double var_1_33 = 256.4;
double var_1_34 = 0.8;
float var_1_35 = 1000000000.5;
float var_1_36 = 499.5;
float var_1_37 = 3.8;
signed long int var_1_38 = 128;
unsigned short int var_1_39 = 50;
unsigned short int var_1_40 = 0;
unsigned char var_1_41 = 1;
unsigned char var_1_42 = 1;
unsigned char var_1_43 = 0;
unsigned char var_1_44 = 1;
unsigned char var_1_45 = 0;
unsigned char var_1_46 = 1;
unsigned char var_1_47 = 4;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_13 = 0;
unsigned char last_1_var_1_20 = 50;
unsigned char last_1_var_1_22 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch108Filler_PE_CN
	signed long int stepLocal_1 = /* 4L, 41L, 47L, 417L, 442L, 882L, 959L) */ ((last_1_var_1_13) | (32));
	/* 29L, 76L, 415L, 440L, 905L, 986L) */ if (/* 12L, 45L, 46L, 416L, 441L, 888L, 969L) */ ((stepLocal_1) > (/* 11L, 44L, 50L, 420L, 445L, 887L, 968L) */ ((last_1_var_1_20) + (last_1_var_1_22))))) {
		/* 22L, 69L, 423L, 448L, 898L, 979L) */ var_1_7 = (
			/* 21L, 68L, 426L, 451L, 897L, 978L) */ ((
				256
			) + (
				/* 20L, 67L, 428L, 453L, 896L, 977L) */ ((
					/* 18L, 65L, 429L, 454L, 894L, 975L) */ ((
						var_1_9
					) + (
						var_1_10
					))
				) - (
					var_1_11
				))
			))
		);
	} else {
		/* 28L, 75L, 433L, 458L, 904L, 985L) */ var_1_7 = (
			/* 27L, 74L, 436L, 461L, 903L, 984L) */ ((
				var_1_12
			) - (
				var_1_9
			))
		);
	}


	// From: Req3Batch108Filler_PE_CN
	/* 991L, 100L, 516L, 532L) */ if (var_1_14) {
		/* 993L, 88L, 518L, 534L) */ var_1_13 = (
			var_1_9
		);
	} else {
		/* 997L, 98L, 522L, 538L) */ if (var_1_15) {
			/* 999L, 97L, 524L, 540L) */ var_1_13 = (
				/* 1002L, 96L, 527L, 543L) */ ((
					var_1_7
				) - (
					var_1_16
				))
			);
		}
	}


	// From: Req4Batch108Filler_PE_CN
	signed long int stepLocal_2 = /* 1007L, 114L, 120L, 584L, 608L) */ (abs (/* 1008L, 113L, 121L, 585L, 609L) */ ((var_1_7) + (var_1_10))));
	/* 1030L, 146L, 579L, 603L) */ if (/* 1015L, 115L, 116L, 580L, 604L) */ ((/* 1014L, 110L, 117L, 581L, 605L) */ ((var_1_7) + (var_1_13))) >= (stepLocal_2))) {
		/* 1025L, 141L, 588L, 612L) */ var_1_17 = (
			/* 1024L, 140L, 591L, 615L) */ ((
				/* 1022L, 138L, 592L, 616L) */ ((
					/* 1020L, 136L, 593L, 617L) */ ((
						var_1_10
					) + (
						10000
					))
				) + (
					var_1_19
				))
			) - (
				var_1_9
			))
		);
	} else {
		/* 1029L, 145L, 598L, 622L) */ var_1_17 = (
			var_1_11
		);
	}


	// From: Req5Batch108Filler_PE_CN
	/* 1035L, 176L, 676L, 690L) */ if (/* 1036L, 154L, 155L, 677L, 691L) */ ((var_1_9) < (var_1_19))) {
		/* 1039L, 174L, 680L, 694L) */ if (/* 1040L, 163L, 164L, 681L, 695L) */ ((var_1_17) >= (0))) {
			/* 1043L, 173L, 684L, 698L) */ var_1_20 = (
				var_1_21
			);
		}
	}


	// From: Req1Batch108Filler_PE_CN
	signed long int stepLocal_0 = /* 936L, 6L, 10L, 241L, 260L) */ ((var_1_7) * (/* 938L, 5L, 12L, 243L, 262L) */ (max (/* 938L, 5L, 12L, 243L, 262L) */ (var_1_7) , (var_1_17)))));
	/* 954L, 33L, 239L, 258L) */ if (/* 943L, 8L, 9L, 240L, 259L) */ ((stepLocal_0) != (4))) {
		/* 949L, 28L, 247L, 266L) */ var_1_1 = (
			/* 948L, 27L, 250L, 269L) */ ((
				var_1_5
			) + (
				var_1_6
			))
		);
	} else {
		/* 953L, 32L, 253L, 272L) */ var_1_1 = (
			var_1_5
		);
	}


	// From: Req6Batch108Filler_PE_CN
	/* 1048L, 195L, 731L, 742L) */ if (var_1_15) {
		/* 1050L, 194L, 733L, 744L) */ var_1_22 = (
			/* 1053L, 193L, 736L, 747L) */ ((
				/* 1054L, 191L, 737L, 748L) */ (max (
					/* 1054L, 191L, 737L, 748L) */ (
						var_1_23
					) , (
						var_1_24
					)
				))
			) - (
				var_1_25
			))
		);
	}


	// From: Req7Batch108Filler_PE_CN
	/* 1060L, 233L, 776L, 802L) */ if (var_1_15) {
		/* 1062L, 225L, 778L, 804L) */ if (/* 1063L, 206L, 207L, 779L, 805L) */ ((var_1_21) >= (2))) {
			/* 1066L, 216L, 782L, 808L) */ var_1_26 = (
				var_1_10
			);
		} else {
			/* 1070L, 224L, 786L, 812L) */ var_1_26 = (
				/* 1073L, 223L, 789L, 815L) */ ((
					4
				) + (
					/* 1075L, 222L, 791L, 817L) */ ((
						16
					) + (
						var_1_13
					))
				))
			);
		}
	} else {
		/* 1078L, 232L, 794L, 820L) */ var_1_26 = (
			/* 1081L, 231L, 797L, 823L) */ ((
				var_1_21
			) - (
				var_1_13
			))
		);
	}


	// From: CodeObject1
	/* 110L) */ if (/* 68L, 67L) */ ((/* 69L, 63L) */ (! (var_1_28))) || (/* 71L, 66L) */ ((var_1_29) < (var_1_30))))) {
		/* 84L) */ var_1_27 = (
			/* 83L) */ (abs (
				var_1_31
			))
		);
	} else {
		/* 108L) */ if (/* 90L, 89L) */ ((/* 91L, 87L) */ ((var_1_31) + (2))) >= (var_1_32))) {
			/* 103L) */ var_1_27 = (
				500
			);
		} else {
			/* 107L) */ var_1_27 = (
				var_1_31
			);
		}
	}


	// From: CodeObject2
	/* 121L) */ if (var_1_28) {
		/* 120L) */ var_1_33 = (
			var_1_34
		);
	}


	// From: CodeObject3
	/* 174L) */ if (/* 131L, 130L) */ ((var_1_29) <= (/* 133L, 129L) */ ((/* 134L, 127L) */ (abs (var_1_33))) - (var_1_36))))) {
		/* 168L) */ if (/* 146L, 145L) */ ((var_1_37) < (8.5f))) {
			/* 155L) */ var_1_35 = (
				var_1_34
			);
		} else {
			/* 167L) */ var_1_35 = (
				1.625f
			);
		}
	} else {
		/* 173L) */ var_1_35 = (
			9.9999999999925E11f
		);
	}


	// From: CodeObject4
	/* 196L) */ if (/* 183L, 182L) */ ((var_1_36) >= (var_1_34))) {
		/* 195L) */ var_1_38 = (
			/* 194L) */ ((
				-1
			) - (
				/* 193L) */ (abs (
					var_1_31
				))
			))
		);
	}


	// From: CodeObject5
	/* 205L) */ var_1_39 = (
		/* 204L) */ (min (
			/* 204L) */ (
				64
			) , (
				var_1_40
			)
		))
	);


	// From: CodeObject6
	/* 272L) */ if (var_1_42) {
		/* 221L) */ var_1_41 = (
			/* 220L) */ ((
				var_1_28
			) && (
				/* 219L) */ ((
					var_1_43
				) || (
					/* 218L) */ (! (
						var_1_44
					))
				))
			))
		);
	} else {
		/* 270L) */ if (/* 231L, 230L) */ ((var_1_40) > (/* 233L, 229L) */ (min (/* 233L, 229L) */ (/* 234L, 225L) */ ((16) % (50))) , (/* 237L, 228L) */ (max (/* 237L, 228L) */ (var_1_32) , (var_1_27))))))))) {
			/* 258L) */ var_1_41 = (
				/* 257L) */ ((
					/* 255L) */ ((
						/* 253L) */ ((
							var_1_31
						) < (
							var_1_32
						))
					) || (
						var_1_44
					))
				) && (
					var_1_45
				))
			);
		} else {
			/* 269L) */ var_1_41 = (
				/* 268L) */ ((
					/* 266L) */ (! (
						var_1_43
					))
				) && (
					var_1_44
				))
			);
		}
	}


	// From: CodeObject7
	/* 298L) */ if (/* 282L, 281L) */ ((-32) >= (/* 284L, 280L) */ ((/* 285L, 278L) */ (abs (var_1_31))) - (var_1_39))))) {
		/* 297L) */ var_1_46 = (
			var_1_47
		);
	}
}



void updateVariables(void) {
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= -461168.6018427383000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= -461168.6018427383000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 8191);
	assume_abort_if_not(var_1_9 <= 16384);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 8192);
	assume_abort_if_not(var_1_10 <= 16383);
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 16383);
	var_1_12 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_12 >= 32767);
	assume_abort_if_not(var_1_12 <= 65534);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 1);
	var_1_16 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 2147483646);
	var_1_19 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_19 >= 16384);
	assume_abort_if_not(var_1_19 <= 32767);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 254);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 127);
	assume_abort_if_not(var_1_23 <= 254);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 127);
	assume_abort_if_not(var_1_24 <= 254);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 127);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 1);
	var_1_29 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_29 >= -922337.2036854776000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854776000e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_30 >= -922337.2036854776000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854776000e+12F && var_1_30 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_31 >= -2147483646);
	assume_abort_if_not(var_1_31 <= 2147483646);
	var_1_32 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_32 >= -2147483648);
	assume_abort_if_not(var_1_32 <= 2147483647);
	var_1_34 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_34 >= -922337.2036854766000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854766000e+12F && var_1_34 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854776000e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= -922337.2036854776000e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854776000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 65534);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 1);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 0);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 1);
	assume_abort_if_not(var_1_44 <= 1);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 1);
	assume_abort_if_not(var_1_45 <= 1);
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 254);
}



void updateLastVariables(void) {
	last_1_var_1_13 = var_1_13;
	last_1_var_1_20 = var_1_20;
	last_1_var_1_22 = var_1_22;
}

int property(void) {
	if (/* 301L, 8L, 16L, 278L, 297L, 1086L) */ ((/* 302L, 6L, 17L, 279L, 298L, 1087L) */ ((var_1_7) * (/* 304L, 5L, 19L, 281L, 300L, 1089L) */ (max (/* 304L, 5L, 19L, 281L, 300L, 1089L) */ (var_1_7) , (var_1_17)))))) != (4))) {
	} else {
	}
	if (/* 320L, 45L, 53L, 466L, 491L, 916L, 1105L, 41L) */ ((/* 321L, 41L, 54L, 467L, 492L, 910L, 1106L, 35L) */ ((last_1_var_1_13) | (32))) > (/* 325L, 44L, 57L, 470L, 495L, 915L, 1110L, 40L) */ ((last_1_var_1_20) + (last_1_var_1_22))))) {
	} else {
	}
	if (var_1_14) {
	} else {
		if (var_1_15) {
		}
	}
	if (/* 364L, 115L, 124L, 628L, 652L, 1149L) */ ((/* 365L, 110L, 125L, 629L, 653L, 1150L) */ ((var_1_7) + (var_1_13))) >= (/* 368L, 114L, 128L, 632L, 656L, 1153L) */ (abs (/* 369L, 113L, 129L, 633L, 657L, 1154L) */ ((var_1_7) + (var_1_10))))))) {
	} else {
	}
	if (/* 389L, 154L, 158L, 705L, 719L, 1174L) */ ((var_1_9) < (var_1_19))) {
		if (/* 393L, 163L, 167L, 709L, 723L, 1178L) */ ((var_1_17) >= (0))) {
		}
	}
	if (var_1_15) {
	}
	if (var_1_15) {
		if (/* 416L, 206L, 210L, 831L, 857L, 1201L) */ ((var_1_21) >= (2))) {
		} else {
		}
	} else {
	}
	return /* 443L) */ ((
	/* 442L) */ ((
		/* 441L) */ ((
			/* 440L) */ ((
				/* 439L) */ ((
					/* 438L) */ ((
						/* 300L, 34L, 277L, 296L, 1085L) */ ((
							/* 301L, 8L, 16L, 278L, 297L, 1086L) */ ((
								/* 302L, 6L, 17L, 279L, 298L, 1087L) */ ((
									var_1_7
								) * (
									/* 304L, 5L, 19L, 281L, 300L, 1089L) */ (max (
										/* 304L, 5L, 19L, 281L, 300L, 1089L) */ (
											var_1_7
										) , (
											var_1_17
										)
									))
								))
							) != (
								4
							))
						) ? (
							/* 308L, 28L, 285L, 304L, 1093L) */ ((
								var_1_1
							) == (
								/* 308L, 28L, 285L, 304L, 1093L) */ ((float) (
									/* 311L, 27L, 288L, 307L, 1096L) */ ((
										var_1_5
									) + (
										var_1_6
									))
								))
							))
						) : (
							/* 314L, 32L, 291L, 310L, 1099L) */ ((
								var_1_1
							) == (
								/* 314L, 32L, 291L, 310L, 1099L) */ ((float) (
									var_1_5
								))
							))
						))
					) && (
						/* 319L, 77L, 465L, 490L, 933L, 1104L, 58L) */ ((
							/* 320L, 45L, 53L, 466L, 491L, 916L, 1105L, 41L) */ ((
								/* 321L, 41L, 54L, 467L, 492L, 910L, 1106L, 35L) */ ((
									last_1_var_1_13
								) | (
									32
								))
							) > (
								/* 325L, 44L, 57L, 470L, 495L, 915L, 1110L, 40L) */ ((
									last_1_var_1_20
								) + (
									last_1_var_1_22
								))
							))
						) ? (
							/* 330L, 69L, 473L, 498L, 926L, 1115L, 51L) */ ((
								var_1_7
							) == (
								/* 330L, 69L, 473L, 498L, 926L, 1115L, 51L) */ ((unsigned short int) (
									/* 333L, 68L, 476L, 501L, 925L, 1118L, 50L) */ ((
										256
									) + (
										/* 335L, 67L, 478L, 503L, 924L, 1120L, 49L) */ ((
											/* 336L, 65L, 479L, 504L, 922L, 1121L, 47L) */ ((
												var_1_9
											) + (
												var_1_10
											))
										) - (
											var_1_11
										))
									))
								))
							))
						) : (
							/* 340L, 75L, 483L, 508L, 932L, 1125L, 57L) */ ((
								var_1_7
							) == (
								/* 340L, 75L, 483L, 508L, 932L, 1125L, 57L) */ ((unsigned short int) (
									/* 343L, 74L, 486L, 511L, 931L, 1128L, 56L) */ ((
										var_1_12
									) - (
										var_1_9
									))
								))
							))
						))
					))
				) && (
					/* 348L, 101L, 548L, 564L, 1133L) */ ((
						var_1_14
					) ? (
						/* 350L, 88L, 550L, 566L, 1135L) */ ((
							var_1_13
						) == (
							/* 350L, 88L, 550L, 566L, 1135L) */ ((signed long int) (
								var_1_9
							))
						))
					) : (
						/* 354L, 99L, 554L, 570L, 1139L) */ ((
							var_1_15
						) ? (
							/* 356L, 97L, 556L, 572L, 1141L) */ ((
								var_1_13
							) == (
								/* 356L, 97L, 556L, 572L, 1141L) */ ((signed long int) (
									/* 359L, 96L, 559L, 575L, 1144L) */ ((
										var_1_7
									) - (
										var_1_16
									))
								))
							))
						) : (
							1
						))
					))
				))
			) && (
				/* 363L, 147L, 627L, 651L, 1148L) */ ((
					/* 364L, 115L, 124L, 628L, 652L, 1149L) */ ((
						/* 365L, 110L, 125L, 629L, 653L, 1150L) */ ((
							var_1_7
						) + (
							var_1_13
						))
					) >= (
						/* 368L, 114L, 128L, 632L, 656L, 1153L) */ (abs (
							/* 369L, 113L, 129L, 633L, 657L, 1154L) */ ((
								var_1_7
							) + (
								var_1_10
							))
						))
					))
				) ? (
					/* 372L, 141L, 636L, 660L, 1157L) */ ((
						var_1_17
					) == (
						/* 372L, 141L, 636L, 660L, 1157L) */ ((unsigned short int) (
							/* 375L, 140L, 639L, 663L, 1160L) */ ((
								/* 376L, 138L, 640L, 664L, 1161L) */ ((
									/* 377L, 136L, 641L, 665L, 1162L) */ ((
										var_1_10
									) + (
										10000
									))
								) + (
									var_1_19
								))
							) - (
								var_1_9
							))
						))
					))
				) : (
					/* 382L, 145L, 646L, 670L, 1167L) */ ((
						var_1_17
					) == (
						/* 382L, 145L, 646L, 670L, 1167L) */ ((unsigned short int) (
							var_1_11
						))
					))
				))
			))
		) && (
			/* 388L, 177L, 704L, 718L, 1173L) */ ((
				/* 389L, 154L, 158L, 705L, 719L, 1174L) */ ((
					var_1_9
				) < (
					var_1_19
				))
			) ? (
				/* 392L, 175L, 708L, 722L, 1177L) */ ((
					/* 393L, 163L, 167L, 709L, 723L, 1178L) */ ((
						var_1_17
					) >= (
						0
					))
				) ? (
					/* 396L, 173L, 712L, 726L, 1181L) */ ((
						var_1_20
					) == (
						/* 396L, 173L, 712L, 726L, 1181L) */ ((unsigned char) (
							var_1_21
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
		/* 401L, 196L, 753L, 764L, 1186L) */ ((
			var_1_15
		) ? (
			/* 403L, 194L, 755L, 766L, 1188L) */ ((
				var_1_22
			) == (
				/* 403L, 194L, 755L, 766L, 1188L) */ ((unsigned char) (
					/* 406L, 193L, 758L, 769L, 1191L) */ ((
						/* 407L, 191L, 759L, 770L, 1192L) */ (max (
							/* 407L, 191L, 759L, 770L, 1192L) */ (
								var_1_23
							) , (
								var_1_24
							)
						))
					) - (
						var_1_25
					))
				))
			))
		) : (
			1
		))
	))
) && (
	/* 413L, 234L, 828L, 854L, 1198L) */ ((
		var_1_15
	) ? (
		/* 415L, 226L, 830L, 856L, 1200L) */ ((
			/* 416L, 206L, 210L, 831L, 857L, 1201L) */ ((
				var_1_21
			) >= (
				2
			))
		) ? (
			/* 419L, 216L, 834L, 860L, 1204L) */ ((
				var_1_26
			) == (
				/* 419L, 216L, 834L, 860L, 1204L) */ ((signed short int) (
					var_1_10
				))
			))
		) : (
			/* 423L, 224L, 838L, 864L, 1208L) */ ((
				var_1_26
			) == (
				/* 423L, 224L, 838L, 864L, 1208L) */ ((signed short int) (
					/* 426L, 223L, 841L, 867L, 1211L) */ ((
						4
					) + (
						/* 428L, 222L, 843L, 869L, 1213L) */ ((
							16
						) + (
							var_1_13
						))
					))
				))
			))
		))
	) : (
		/* 431L, 232L, 846L, 872L, 1216L) */ ((
			var_1_26
		) == (
			/* 431L, 232L, 846L, 872L, 1216L) */ ((signed short int) (
				/* 434L, 231L, 849L, 875L, 1219L) */ ((
					var_1_21
				) - (
					var_1_13
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
