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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch60Filler_PE_CO.c", 13, "reach_error"); }
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
signed short int var_1_1 = 32;
float var_1_4 = 7.8;
signed short int var_1_6 = 16;
signed short int var_1_7 = 256;
float var_1_8 = 256.6;
unsigned char var_1_9 = 50;
unsigned char var_1_10 = 5;
unsigned char var_1_11 = 1;
unsigned char var_1_12 = 1;
unsigned char var_1_13 = 64;
unsigned char var_1_14 = 4;
float var_1_15 = 31.05;
float var_1_16 = 31.25;
float var_1_17 = 9.3;
float var_1_18 = 49.5;
float var_1_19 = 7.4;
double var_1_20 = 7.5;
double var_1_21 = 16.5;
double var_1_22 = 127.75;
double var_1_23 = 15.2;
float var_1_24 = 8.71;
unsigned char var_1_25 = 0;
signed long int var_1_26 = 4;
signed long int var_1_27 = 32;
signed long int var_1_28 = 256;
unsigned short int var_1_29 = 5;
signed long int var_1_30 = -128;
unsigned char var_1_31 = 1;
unsigned char var_1_32 = 0;
signed long int var_1_33 = -32;
signed long int var_1_34 = 128;
signed long int var_1_35 = 4;
signed long int var_1_36 = 50;
float var_1_37 = 31.6;
float var_1_38 = 99.85;
float var_1_39 = 49.6;
signed short int var_1_40 = -2;
signed short int var_1_41 = -4;
float var_1_42 = 7.2;
double var_1_43 = 25.25;
signed char var_1_44 = -100;
signed char var_1_45 = 50;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_11 = 1;
float last_1_var_1_24 = 8.71;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch60Filler_PE_CO
	/* 17L, 77L, 391L, 409L, 940L, 991L) */ if (/* 4L, 47L, 48L, 392L, 410L, 927L, 992L) */ ((/* 2L, 45L, 49L, 393L, 411L, 925L, 993L) */ (- (last_1_var_1_24))) <= (var_1_4))) {
		/* 16L, 75L, 396L, 414L, 939L, 997L) */ if (/* 11L, 60L, 61L, 397L, 415L, 934L, 998L) */ ((/* 8L, 58L, 62L, 398L, 416L, 931L, 999L) */ ((last_1_var_1_24) <= (var_1_4))) || (last_1_var_1_11))) {
			/* 15L, 74L, 402L, 420L, 938L, 1005L) */ var_1_8 = (
				3.3f
			);
		}
	}


	// From: Req4Batch60Filler_PE_CO
	/* 1042L, 170L, 624L, 630L) */ var_1_11 = (
		var_1_12
	);


	// From: Req5Batch60Filler_PE_CO
	signed short int stepLocal_2 = var_1_6;
	unsigned char stepLocal_1 = var_1_11;
	/* 1070L, 212L, 647L, 668L) */ if (/* 1054L, 179L, 180L, 648L, 669L) */ ((var_1_7) < (stepLocal_2))) {
		/* 1069L, 210L, 651L, 672L) */ if (var_1_11) {
			/* 1061L, 194L, 653L, 674L) */ var_1_13 = (
				/* 1060L, 193L, 656L, 677L) */ (max (
					/* 1060L, 193L, 656L, 677L) */ (
						var_1_10
					) , (
						var_1_14
					)
				))
			);
		} else {
			/* 1068L, 208L, 659L, 680L) */ if (/* 1063L, 197L, 198L, 660L, 681L) */ ((var_1_12) || (stepLocal_1))) {
				/* 1067L, 207L, 663L, 684L) */ var_1_13 = (
					var_1_14
				);
			}
		}
	}


	// From: Req6Batch60Filler_PE_CO
	/* 1076L, 239L, 732L, 754L) */ if (var_1_11) {
		/* 1078L, 228L, 734L, 756L) */ var_1_15 = (
			/* 1081L, 227L, 737L, 759L) */ ((
				var_1_16
			) + (
				/* 1083L, 226L, 739L, 761L) */ ((
					var_1_17
				) + (
					32.5f
				))
			))
		);
	} else {
		/* 1086L, 238L, 742L, 764L) */ var_1_15 = (
			/* 1089L, 237L, 745L, 767L) */ ((
				/* 1090L, 235L, 746L, 768L) */ ((
					5.064290308105643E18f
				) - (
					/* 1092L, 234L, 748L, 770L) */ ((
						4.4f
					) + (
						var_1_18
					))
				))
			) - (
				var_1_19
			))
		);
	}


	// From: Req7Batch60Filler_PE_CO
	/* 1098L, 256L, 820L, 832L) */ var_1_20 = (
		/* 1101L, 255L, 823L, 835L) */ ((
			var_1_18
		) - (
			/* 1103L, 254L, 825L, 837L) */ ((
				/* 1104L, 252L, 826L, 838L) */ (min (
					/* 1104L, 252L, 826L, 838L) */ (
						var_1_21
					) , (
						var_1_22
					)
				))
			) + (
				var_1_23
			))
		))
	);


	// From: Req8Batch60Filler_PE_CO
	/* 1110L, 287L, 868L, 882L) */ if (/* 1111L, 265L, 266L, 869L, 883L) */ ((var_1_8) == (var_1_19))) {
		/* 1114L, 285L, 872L, 886L) */ if (/* 1115L, 274L, 275L, 873L, 887L) */ ((var_1_13) < (var_1_6))) {
			/* 1118L, 284L, 876L, 890L) */ var_1_24 = (
				var_1_23
			);
		}
	}


	// From: Req1Batch60Filler_PE_CO
	/* 966L, 36L, 294L, 318L) */ if (var_1_11) {
		/* 968L, 30L, 296L, 320L) */ if (/* 969L, 9L, 10L, 297L, 321L) */ ((/* 970L, 7L, 11L, 298L, 322L) */ ((var_1_8) / (var_1_4))) <= (var_1_24))) {
			/* 974L, 25L, 302L, 326L) */ var_1_1 = (
				/* 977L, 24L, 305L, 329L) */ ((
					var_1_6
				) - (
					var_1_7
				))
			);
		} else {
			/* 980L, 29L, 308L, 332L) */ var_1_1 = (
				var_1_6
			);
		}
	} else {
		/* 984L, 35L, 312L, 336L) */ var_1_1 = (
			var_1_7
		);
	}


	// From: Req3Batch60Filler_PE_CO
	signed long int stepLocal_0 = /* 1011L, 104L, 110L, 523L, 550L) */ (min (/* 1011L, 104L, 110L, 523L, 550L) */ (var_1_7) , (var_1_1)));
	/* 1037L, 161L, 515L, 542L) */ if (/* 1019L, 91L, 92L, 516L, 543L) */ ((var_1_8) < (/* 1018L, 90L, 94L, 518L, 545L) */ ((var_1_20) + (var_1_15))))) {
		/* 1032L, 155L, 521L, 548L) */ if (/* 1023L, 108L, 109L, 522L, 549L) */ ((stepLocal_0) > (/* 1022L, 107L, 113L, 526L, 553L) */ ((var_1_6) * (1))))) {
			/* 1027L, 126L, 529L, 556L) */ var_1_9 = (
				var_1_10
			);
		} else {
			/* 1031L, 154L, 533L, 560L) */ var_1_9 = (
				64
			);
		}
	} else {
		/* 1036L, 160L, 537L, 564L) */ var_1_9 = (
			var_1_10
		);
	}


	// From: CodeObject1
	/* 258L, 83L) */ if (/* 259L, 48L, 49L) */ ((var_1_26) <= (/* 261L, 47L, 51L) */ ((var_1_27) + (var_1_28))))) {
		/* 264L, 81L) */ if (/* 265L, 61L, 62L) */ ((var_1_29) < (var_1_26))) {
			/* 268L, 76L) */ var_1_25 = (
				/* 271L, 75L) */ ((
					/* 272L, 73L) */ ((
						var_1_26
					) <= (
						/* 274L, 72L) */ (~ (
							var_1_30
						))
					))
				) || (
					var_1_31
				))
			);
		} else {
			/* 277L, 80L) */ var_1_25 = (
				var_1_32
			);
		}
	}


	// From: CodeObject2
	/* 281L, 106L) */ if (/* 282L, 89L, 90L) */ ((var_1_29) != (var_1_30))) {
		/* 285L, 105L) */ var_1_33 = (
			/* 288L, 104L) */ ((
				/* 289L, 102L) */ ((
					/* 290L, 100L) */ (max (
						/* 290L, 100L) */ (
							var_1_29
						) , (
							var_1_34
						)
					))
				) + (
					var_1_35
				))
			) - (
				var_1_36
			))
		);
	}


	// From: CodeObject3
	/* 295L, 133L) */ if (/* 296L, 112L, 113L) */ ((var_1_32) && (var_1_11))) {
		/* 299L, 126L) */ var_1_37 = (
			/* 302L, 125L) */ ((
				/* 303L, 123L) */ ((
					var_1_38
				) + (
					var_1_39
				))
			) - (
				2.75f
			))
		);
	} else {
		/* 307L, 132L) */ var_1_37 = (
			/* 310L, 131L) */ ((
				var_1_39
			) + (
				var_1_38
			))
		);
	}


	// From: CodeObject4
	/* 314L, 140L) */ var_1_40 = (
		var_1_41
	);


	// From: CodeObject5
	/* 318L, 195L) */ if (var_1_31) {
		/* 320L, 189L) */ if (/* 321L, 151L, 152L) */ ((var_1_26) > (/* 323L, 150L, 154L) */ (abs (var_1_36))))) {
			/* 325L, 164L) */ var_1_42 = (
				/* 328L, 163L) */ (abs (
					var_1_38
				))
			);
		} else {
			/* 330L, 187L) */ if (/* 331L, 168L, 169L) */ ((/* 332L, 166L, 170L) */ (~ (var_1_27))) >= (var_1_36))) {
				/* 335L, 186L) */ var_1_42 = (
					/* 338L, 185L) */ ((
						/* 339L, 183L) */ ((
							/* 340L, 181L) */ (min (
								/* 340L, 181L) */ (
									var_1_38
								) , (
									var_1_39
								)
							))
						) + (
							1.75f
						))
					) - (
						25.5f
					))
				);
			}
		}
	} else {
		/* 345L, 194L) */ var_1_42 = (
			var_1_38
		);
	}


	// From: CodeObject6
	/* 349L, 256L) */ if (/* 350L, 201L, 202L) */ ((var_1_28) >= (var_1_35))) {
		/* 353L, 214L) */ var_1_43 = (
			/* 356L, 213L) */ (max (
				/* 356L, 213L) */ (
					9.99999999999996E13
				) , (
					/* 358L, 212L) */ (abs (
						var_1_39
					))
				)
			))
		);
	} else {
		/* 360L, 254L) */ if (/* 361L, 220L, 221L) */ ((/* 362L, 218L, 222L) */ ((/* 363L, 216L, 223L) */ (abs (var_1_44))) - (var_1_45))) <= (var_1_30))) {
			/* 367L, 248L) */ if (var_1_31) {
				/* 369L, 239L) */ var_1_43 = (
					var_1_38
				);
			} else {
				/* 373L, 247L) */ var_1_43 = (
					var_1_39
				);
			}
		} else {
			/* 377L, 253L) */ var_1_43 = (
				var_1_39
			);
		}
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	assume_abort_if_not(var_1_4 != 0.0F);
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= -1);
	assume_abort_if_not(var_1_6 <= 32766);
	var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 32766);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 254);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 1);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 254);
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= -461168.6018427383000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427383000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= -230584.3009213691400e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 2305843.009213691400e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 2305843.009213691400e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854766000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427383000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427383000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427383000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_26 >= -2147483648);
	assume_abort_if_not(var_1_26 <= 2147483647);
	var_1_27 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_27 >= -2147483648);
	assume_abort_if_not(var_1_27 <= 2147483647);
	var_1_28 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_28 >= -2147483648);
	assume_abort_if_not(var_1_28 <= 2147483647);
	var_1_29 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 65535);
	var_1_30 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_30 >= -2147483648);
	assume_abort_if_not(var_1_30 <= 2147483647);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 1);
	assume_abort_if_not(var_1_31 <= 1);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 0);
	var_1_34 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 1073741823);
	var_1_35 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 1073741823);
	var_1_36 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 2147483646);
	var_1_38 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 4611686.018427383000e+12F && var_1_38 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 4611686.018427383000e+12F && var_1_39 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_41 >= -32767);
	assume_abort_if_not(var_1_41 <= 32766);
	var_1_44 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_44 >= -127);
	assume_abort_if_not(var_1_44 <= 127);
	var_1_45 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 127);
}



void updateLastVariables(void) {
	last_1_var_1_11 = var_1_11;
	last_1_var_1_24 = var_1_24;
}

int property(void) {
	if (var_1_11) {
		if (/* 385L, 9L, 15L, 345L, 369L, 1127L) */ ((/* 386L, 7L, 16L, 346L, 370L, 1128L) */ ((var_1_8) / (var_1_4))) <= (var_1_24))) {
		} else {
		}
	} else {
	}
	if (/* 408L, 47L, 52L, 428L, 446L, 948L, 1150L, 25L) */ ((/* 409L, 45L, 53L, 429L, 447L, 946L, 1151L, 23L) */ (- (last_1_var_1_24))) <= (var_1_4))) {
		if (/* 414L, 60L, 66L, 433L, 451L, 955L, 1156L, 32L) */ ((/* 415L, 58L, 67L, 434L, 452L, 952L, 1157L, 29L) */ ((last_1_var_1_24) <= (var_1_4))) || (last_1_var_1_11))) {
		}
	}
	if (/* 427L, 91L, 97L, 570L, 597L, 1169L) */ ((var_1_8) < (/* 429L, 90L, 99L, 572L, 599L, 1171L) */ ((var_1_20) + (var_1_15))))) {
		if (/* 433L, 108L, 116L, 576L, 603L, 1175L) */ ((/* 434L, 104L, 117L, 577L, 604L, 1176L) */ (min (/* 434L, 104L, 117L, 577L, 604L, 1176L) */ (var_1_7) , (var_1_1)))) > (/* 437L, 107L, 120L, 580L, 607L, 1179L) */ ((var_1_6) * (1))))) {
		} else {
		}
	} else {
	}
	if (/* 460L, 179L, 183L, 690L, 711L, 1202L) */ ((var_1_7) < (var_1_6))) {
		if (var_1_11) {
		} else {
			if (/* 472L, 197L, 201L, 702L, 723L, 1214L) */ ((var_1_12) || (var_1_11))) {
			}
		}
	}
	if (var_1_11) {
	} else {
	}
	if (/* 516L, 265L, 269L, 897L, 911L, 1258L) */ ((var_1_8) == (var_1_19))) {
		if (/* 520L, 274L, 278L, 901L, 915L, 1262L) */ ((var_1_13) < (var_1_6))) {
		}
	}
	return /* 534L) */ ((
	/* 533L) */ ((
		/* 532L) */ ((
			/* 531L) */ ((
				/* 530L) */ ((
					/* 529L) */ ((
						/* 528L) */ ((
							/* 382L, 37L, 342L, 366L, 1124L) */ ((
								var_1_11
							) ? (
								/* 384L, 31L, 344L, 368L, 1126L) */ ((
									/* 385L, 9L, 15L, 345L, 369L, 1127L) */ ((
										/* 386L, 7L, 16L, 346L, 370L, 1128L) */ ((
											var_1_8
										) / (
											var_1_4
										))
									) <= (
										var_1_24
									))
								) ? (
									/* 390L, 25L, 350L, 374L, 1132L) */ ((
										var_1_1
									) == (
										/* 390L, 25L, 350L, 374L, 1132L) */ ((signed short int) (
											/* 393L, 24L, 353L, 377L, 1135L) */ ((
												var_1_6
											) - (
												var_1_7
											))
										))
									))
								) : (
									/* 396L, 29L, 356L, 380L, 1138L) */ ((
										var_1_1
									) == (
										/* 396L, 29L, 356L, 380L, 1138L) */ ((signed short int) (
											var_1_6
										))
									))
								))
							) : (
								/* 400L, 35L, 360L, 384L, 1142L) */ ((
									var_1_1
								) == (
									/* 400L, 35L, 360L, 384L, 1142L) */ ((signed short int) (
										var_1_7
									))
								))
							))
						) && (
							/* 407L, 78L, 427L, 445L, 961L, 1149L, 38L) */ ((
								/* 408L, 47L, 52L, 428L, 446L, 948L, 1150L, 25L) */ ((
									/* 409L, 45L, 53L, 429L, 447L, 946L, 1151L, 23L) */ (- (
										last_1_var_1_24
									))
								) <= (
									var_1_4
								))
							) ? (
								/* 413L, 76L, 432L, 450L, 960L, 1155L, 37L) */ ((
									/* 414L, 60L, 66L, 433L, 451L, 955L, 1156L, 32L) */ ((
										/* 415L, 58L, 67L, 434L, 452L, 952L, 1157L, 29L) */ ((
											last_1_var_1_24
										) <= (
											var_1_4
										))
									) || (
										last_1_var_1_11
									))
								) ? (
									/* 421L, 74L, 438L, 456L, 959L, 1163L, 36L) */ ((
										var_1_8
									) == (
										/* 421L, 74L, 438L, 456L, 959L, 1163L, 36L) */ ((float) (
											3.3f
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
						/* 426L, 162L, 569L, 596L, 1168L) */ ((
							/* 427L, 91L, 97L, 570L, 597L, 1169L) */ ((
								var_1_8
							) < (
								/* 429L, 90L, 99L, 572L, 599L, 1171L) */ ((
									var_1_20
								) + (
									var_1_15
								))
							))
						) ? (
							/* 432L, 156L, 575L, 602L, 1174L) */ ((
								/* 433L, 108L, 116L, 576L, 603L, 1175L) */ ((
									/* 434L, 104L, 117L, 577L, 604L, 1176L) */ (min (
										/* 434L, 104L, 117L, 577L, 604L, 1176L) */ (
											var_1_7
										) , (
											var_1_1
										)
									))
								) > (
									/* 437L, 107L, 120L, 580L, 607L, 1179L) */ ((
										var_1_6
									) * (
										1
									))
								))
							) ? (
								/* 440L, 126L, 583L, 610L, 1182L) */ ((
									var_1_9
								) == (
									/* 440L, 126L, 583L, 610L, 1182L) */ ((unsigned char) (
										var_1_10
									))
								))
							) : (
								/* 444L, 154L, 587L, 614L, 1186L) */ ((
									var_1_9
								) == (
									/* 444L, 154L, 587L, 614L, 1186L) */ ((unsigned char) (
										64
									))
								))
							))
						) : (
							/* 448L, 160L, 591L, 618L, 1190L) */ ((
								var_1_9
							) == (
								/* 448L, 160L, 591L, 618L, 1190L) */ ((unsigned char) (
									var_1_10
								))
							))
						))
					))
				) && (
					/* 454L, 170L, 636L, 642L, 1196L) */ ((
						var_1_11
					) == (
						/* 454L, 170L, 636L, 642L, 1196L) */ ((unsigned char) (
							var_1_12
						))
					))
				))
			) && (
				/* 459L, 213L, 689L, 710L, 1201L) */ ((
					/* 460L, 179L, 183L, 690L, 711L, 1202L) */ ((
						var_1_7
					) < (
						var_1_6
					))
				) ? (
					/* 463L, 211L, 693L, 714L, 1205L) */ ((
						var_1_11
					) ? (
						/* 465L, 194L, 695L, 716L, 1207L) */ ((
							var_1_13
						) == (
							/* 465L, 194L, 695L, 716L, 1207L) */ ((unsigned char) (
								/* 468L, 193L, 698L, 719L, 1210L) */ (max (
									/* 468L, 193L, 698L, 719L, 1210L) */ (
										var_1_10
									) , (
										var_1_14
									)
								))
							))
						))
					) : (
						/* 471L, 209L, 701L, 722L, 1213L) */ ((
							/* 472L, 197L, 201L, 702L, 723L, 1214L) */ ((
								var_1_12
							) || (
								var_1_11
							))
						) ? (
							/* 475L, 207L, 705L, 726L, 1217L) */ ((
								var_1_13
							) == (
								/* 475L, 207L, 705L, 726L, 1217L) */ ((unsigned char) (
									var_1_14
								))
							))
						) : (
							1
						))
					))
				) : (
					1
				))
			))
		) && (
			/* 481L, 240L, 776L, 798L, 1223L) */ ((
				var_1_11
			) ? (
				/* 483L, 228L, 778L, 800L, 1225L) */ ((
					var_1_15
				) == (
					/* 483L, 228L, 778L, 800L, 1225L) */ ((float) (
						/* 486L, 227L, 781L, 803L, 1228L) */ ((
							var_1_16
						) + (
							/* 488L, 226L, 783L, 805L, 1230L) */ ((
								var_1_17
							) + (
								32.5f
							))
						))
					))
				))
			) : (
				/* 491L, 238L, 786L, 808L, 1233L) */ ((
					var_1_15
				) == (
					/* 491L, 238L, 786L, 808L, 1233L) */ ((float) (
						/* 494L, 237L, 789L, 811L, 1236L) */ ((
							/* 495L, 235L, 790L, 812L, 1237L) */ ((
								5.064290308105643E18f
							) - (
								/* 497L, 234L, 792L, 814L, 1239L) */ ((
									4.4f
								) + (
									var_1_18
								))
							))
						) - (
							var_1_19
						))
					))
				))
			))
		))
	) && (
		/* 503L, 256L, 844L, 856L, 1245L) */ ((
			var_1_20
		) == (
			/* 503L, 256L, 844L, 856L, 1245L) */ ((double) (
				/* 506L, 255L, 847L, 859L, 1248L) */ ((
					var_1_18
				) - (
					/* 508L, 254L, 849L, 861L, 1250L) */ ((
						/* 509L, 252L, 850L, 862L, 1251L) */ (min (
							/* 509L, 252L, 850L, 862L, 1251L) */ (
								var_1_21
							) , (
								var_1_22
							)
						))
					) + (
						var_1_23
					))
				))
			))
		))
	))
) && (
	/* 515L, 288L, 896L, 910L, 1257L) */ ((
		/* 516L, 265L, 269L, 897L, 911L, 1258L) */ ((
			var_1_8
		) == (
			var_1_19
		))
	) ? (
		/* 519L, 286L, 900L, 914L, 1261L) */ ((
			/* 520L, 274L, 278L, 901L, 915L, 1262L) */ ((
				var_1_13
			) < (
				var_1_6
			))
		) ? (
			/* 523L, 284L, 904L, 918L, 1265L) */ ((
				var_1_24
			) == (
				/* 523L, 284L, 904L, 918L, 1265L) */ ((float) (
					var_1_23
				))
			))
		) : (
			1
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
