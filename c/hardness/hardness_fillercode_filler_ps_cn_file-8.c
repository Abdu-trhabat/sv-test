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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch8Filler_PS_CN.c", 13, "reach_error"); }
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
float var_1_1 = 999999999.675;
signed long int var_1_4 = -5;
float var_1_5 = 7.875;
float var_1_6 = 99.04;
signed long int var_1_7 = -2;
signed long int var_1_8 = 64;
unsigned long int var_1_9 = 1;
double var_1_10 = 63.25;
unsigned char var_1_11 = 0;
unsigned long int var_1_12 = 16;
float var_1_13 = 24.5;
float var_1_14 = 127.8;
float var_1_15 = 0.5;
float var_1_16 = 7.25;
signed short int var_1_17 = -256;
signed short int var_1_19 = 10;
signed short int var_1_20 = 32;
signed short int var_1_21 = 5;
signed short int var_1_22 = -4;
signed long int var_1_23 = 256;
unsigned char var_1_24 = 0;
unsigned long int var_1_25 = 4;
signed long int var_1_26 = 128;
signed short int var_1_27 = -4;
signed short int var_1_28 = -1;
signed short int var_1_29 = -5;
signed short int var_1_30 = 2;
unsigned char var_1_31 = 1;
signed short int var_1_32 = -256;
unsigned short int var_1_33 = 2;
unsigned short int var_1_34 = 32;
unsigned short int var_1_35 = 25;
signed long int var_1_36 = -1;
unsigned short int var_1_37 = 10;
float var_1_38 = 256.7;
float var_1_39 = 2.2;
unsigned long int var_1_40 = 10;
unsigned long int var_1_41 = 0;
double var_1_42 = 100.5;
double var_1_43 = 16.5;
double var_1_44 = 4.875;
signed char var_1_45 = 8;
signed long int var_1_46 = 25;
signed char var_1_47 = 5;
signed char var_1_48 = 10;
signed char var_1_49 = -50;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_9 = 1;
float last_1_var_1_13 = 24.5;
signed long int last_1_var_1_23 = 256;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	/* 107L) */ if (/* 83L, 82L) */ ((var_1_28) != (/* 85L, 81L) */ ((var_1_29) + (var_1_30))))) {
		/* 101L) */ if (var_1_31) {
			/* 100L) */ var_1_27 = (
				/* 99L) */ (abs (
					var_1_32
				))
			);
		}
	} else {
		/* 106L) */ var_1_27 = (
			var_1_32
		);
	}


	// From: CodeObject2
	/* 120L) */ if (var_1_31) {
		/* 119L) */ var_1_33 = (
			/* 118L) */ (max (
				/* 118L) */ (
					var_1_34
				) , (
					var_1_35
				)
			))
		);
	}


	// From: CodeObject3
	/* 165L) */ if (/* 127L, 126L) */ ((16) < (var_1_27))) {
		/* 163L) */ if (/* 136L, 135L) */ ((var_1_34) <= (var_1_37))) {
			/* 161L) */ if (/* 147L, 146L) */ ((var_1_35) < (/* 149L, 145L) */ ((var_1_30) ^ (var_1_29))))) {
				/* 160L) */ var_1_36 = (
					var_1_28
				);
			}
		}
	}


	// From: CodeObject4
	/* 172L) */ var_1_38 = (
		var_1_39
	);


	// From: CodeObject5
	/* 226L) */ if (/* 180L, 179L) */ ((var_1_32) <= (var_1_28))) {
		/* 224L) */ if (/* 189L, 188L) */ ((var_1_39) < (255.2f))) {
			/* 222L) */ if (/* 202L, 201L) */ ((/* 203L, 197L) */ ((16) <= (var_1_27))) && (/* 206L, 200L) */ ((var_1_32) >= (var_1_30))))) {
				/* 221L) */ var_1_40 = (
					/* 220L) */ (max (
						/* 220L) */ (
							var_1_34
						) , (
							var_1_41
						)
					))
				);
			}
		}
	}


	// From: CodeObject6
	/* 291L) */ if (/* 237L, 236L) */ ((var_1_41) < (/* 239L, 235L) */ (max (/* 239L, 235L) */ (/* 240L, 233L) */ (max (/* 240L, 233L) */ (var_1_34) , (var_1_40)))) , (var_1_35)))))) {
		/* 254L) */ var_1_42 = (
			var_1_39
		);
	} else {
		/* 289L) */ if (/* 258L, 257L) */ ((var_1_38) <= (var_1_39))) {
			/* 269L) */ var_1_42 = (
				/* 268L) */ (abs (
					/* 267L) */ (abs (
						var_1_39
					))
				))
			);
		} else {
			/* 287L) */ if (/* 273L, 272L) */ ((var_1_39) <= (var_1_38))) {
				/* 286L) */ var_1_42 = (
					/* 285L) */ (max (
						/* 285L) */ (
							/* 283L) */ ((
								var_1_43
							) - (
								var_1_44
							))
						) , (
							var_1_39
						)
					))
				);
			}
		}
	}


	// From: CodeObject7
	/* 322L) */ if (/* 300L, 299L) */ ((/* 301L, 297L) */ ((var_1_32) % (var_1_46))) < (var_1_29))) {
		/* 317L) */ var_1_45 = (
			/* 316L) */ ((
				/* 314L) */ ((
					var_1_47
				) - (
					var_1_48
				))
			) + (
				var_1_49
			))
		);
	} else {
		/* 321L) */ var_1_45 = (
			var_1_49
		);
	}


	// From: Req1Batch8Filler_PS_CN
	/* 55L, 23L, 292L, 307L, 945L, 968L) */ if (/* 48L, 6L, 7L, 293L, 308L, 938L, 969L) */ ((last_1_var_1_9) == (/* 47L, 5L, 9L, 295L, 310L, 937L, 972L) */ ((last_1_var_1_23) % (var_1_4))))) {
		/* 54L, 22L, 298L, 313L, 944L, 976L) */ var_1_1 = (
			/* 53L, 21L, 301L, 316L, 943L, 979L) */ ((
				var_1_5
			) - (
				var_1_6
			))
		);
	}


	// From: Req2Batch8Filler_PS_CN
	/* 984L, 47L, 351L, 361L) */ if (/* 985L, 36L, 37L, 352L, 362L) */ ((var_1_1) >= (var_1_6))) {
		/* 988L, 46L, 355L, 365L) */ var_1_7 = (
			var_1_8
		);
	}


	// From: Req3Batch8Filler_PS_CN
	/* 18L, 93L, 391L, 411L, 908L, 994L) */ if (/* 7L, 61L, 62L, 392L, 412L, 897L, 995L) */ ((/* 4L, 59L, 63L, 393L, 413L, 894L, 996L) */ ((/* 2L, 57L, 64L, 394L, 414L, 892L, 997L) */ ((var_1_6) * (var_1_5))) / (var_1_10))) > (last_1_var_1_13))) {
		/* 17L, 91L, 399L, 419L, 907L, 1003L) */ if (var_1_11) {
			/* 12L, 82L, 401L, 421L, 902L, 1005L) */ var_1_9 = (
				var_1_12
			);
		} else {
			/* 16L, 90L, 405L, 425L, 906L, 1009L) */ var_1_9 = (
				0u
			);
		}
	}


	// From: Req5Batch8Filler_PS_CN
	/* 1053L, 207L, 604L, 637L) */ if (/* 1054L, 162L, 163L, 605L, 638L) */ ((/* 1055L, 160L, 164L, 606L, 639L) */ ((var_1_4) * (var_1_9))) < (var_1_12))) {
		/* 1059L, 182L, 610L, 643L) */ var_1_17 = (
			/* 1062L, 181L, 613L, 646L) */ ((
				/* 1063L, 179L, 614L, 647L) */ ((
					var_1_19
				) - (
					/* 1065L, 178L, 616L, 649L) */ ((
						var_1_20
					) + (
						var_1_21
					))
				))
			) + (
				var_1_22
			))
		);
	} else {
		/* 1069L, 205L, 620L, 653L) */ if (/* 1070L, 185L, 186L, 621L, 654L) */ ((var_1_20) >= (32))) {
			/* 1073L, 203L, 624L, 657L) */ if (var_1_11) {
				/* 1075L, 198L, 626L, 659L) */ var_1_17 = (
					100
				);
			} else {
				/* 1079L, 202L, 630L, 663L) */ var_1_17 = (
					var_1_20
				);
			}
		}
	}


	// From: Req7Batch8Filler_PS_CN
	/* 1113L, 265L, 819L, 825L) */ var_1_24 = (
		2
	);


	// From: Req8Batch8Filler_PS_CN
	/* 1119L, 275L, 843L, 849L) */ var_1_25 = (
		var_1_21
	);


	// From: Req9Batch8Filler_PS_CN
	/* 1125L, 285L, 867L, 873L) */ var_1_26 = (
		var_1_8
	);


	// From: Req6Batch8Filler_PS_CN
	signed long int stepLocal_2 = var_1_7;
	unsigned long int stepLocal_1 = var_1_9;
	/* 1107L, 256L, 734L, 755L) */ if (/* 1091L, 219L, 220L, 735L, 756L) */ ((var_1_19) < (stepLocal_2))) {
		/* 1102L, 250L, 738L, 759L) */ if (/* 1093L, 228L, 229L, 739L, 760L) */ ((var_1_25) >= (stepLocal_1))) {
			/* 1101L, 248L, 742L, 763L) */ if (/* 1096L, 237L, 238L, 743L, 764L) */ ((var_1_6) < (var_1_15))) {
				/* 1100L, 247L, 746L, 767L) */ var_1_23 = (
					var_1_21
				);
			}
		}
	} else {
		/* 1106L, 255L, 750L, 771L) */ var_1_23 = (
			var_1_17
		);
	}


	// From: Req4Batch8Filler_PS_CN
	signed long int stepLocal_0 = 128;
	/* 1047L, 152L, 470L, 503L) */ if (/* 1018L, 103L, 104L, 471L, 504L) */ ((stepLocal_0) <= (var_1_23))) {
		/* 1042L, 146L, 474L, 507L) */ if (var_1_11) {
			/* 1029L, 122L, 476L, 509L) */ var_1_13 = (
				/* 1028L, 121L, 479L, 512L) */ ((
					var_1_14
				) + (
					/* 1027L, 120L, 481L, 514L) */ (min (
						/* 1027L, 120L, 481L, 514L) */ (
							/* 1025L, 118L, 482L, 515L) */ (max (
								/* 1025L, 118L, 482L, 515L) */ (
									3.4f
								) , (
									var_1_15
								)
							))
						) , (
							var_1_16
						)
					))
				))
			);
		} else {
			/* 1041L, 144L, 486L, 519L) */ if (/* 1032L, 125L, 126L, 487L, 520L) */ ((var_1_1) < (var_1_16))) {
				/* 1036L, 135L, 490L, 523L) */ var_1_13 = (
					var_1_6
				);
			} else {
				/* 1040L, 143L, 494L, 527L) */ var_1_13 = (
					var_1_15
				);
			}
		}
	} else {
		/* 1046L, 151L, 498L, 531L) */ var_1_13 = (
			var_1_5
		);
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483648);
	assume_abort_if_not(var_1_4 <= 2147483647);
	assume_abort_if_not(var_1_4 != 0);
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -2147483647);
	assume_abort_if_not(var_1_8 <= 2147483646);
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -922337.2036854776000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
	assume_abort_if_not(var_1_10 != 0.0F);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 4294967294);
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= -461168.6018427383000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= -461168.6018427383000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= -461168.6018427383000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427383000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 16383);
	var_1_20 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 8192);
	var_1_21 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 8191);
	var_1_22 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_22 >= -16383);
	assume_abort_if_not(var_1_22 <= 16383);
	var_1_28 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_28 >= -32768);
	assume_abort_if_not(var_1_28 <= 32767);
	var_1_29 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_29 >= -32768);
	assume_abort_if_not(var_1_29 <= 32767);
	var_1_30 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_30 >= -32768);
	assume_abort_if_not(var_1_30 <= 32767);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 1);
	var_1_32 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_32 >= -32766);
	assume_abort_if_not(var_1_32 <= 32766);
	var_1_34 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 65534);
	var_1_35 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 65534);
	var_1_37 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 65535);
	var_1_39 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_39 >= -922337.2036854766000e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854766000e+12F && var_1_39 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 4294967294);
	var_1_43 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_43 >= 0.0F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854766000e+12F && var_1_43 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_44 >= 0.0F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854766000e+12F && var_1_44 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_46 >= -2147483648);
	assume_abort_if_not(var_1_46 <= 2147483647);
	assume_abort_if_not(var_1_46 != 0);
	var_1_47 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 63);
	var_1_48 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_48 >= 0);
	assume_abort_if_not(var_1_48 <= 63);
	var_1_49 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_49 >= -63);
	assume_abort_if_not(var_1_49 <= 63);
}



void updateLastVariables(void) {
	last_1_var_1_9 = var_1_9;
	last_1_var_1_13 = var_1_13;
	last_1_var_1_23 = var_1_23;
}

int property(void) {
	if (/* 329L, 6L, 12L, 323L, 338L, 955L, 1133L, 65L) */ ((last_1_var_1_9) == (/* 332L, 5L, 14L, 325L, 340L, 954L, 1136L, 64L) */ ((last_1_var_1_23) % (var_1_4))))) {
	}
	if (/* 345L, 36L, 40L, 372L, 382L, 1149L) */ ((var_1_1) >= (var_1_6))) {
	}
	if (/* 355L, 61L, 69L, 432L, 452L, 918L, 1159L, 28L) */ ((/* 356L, 59L, 70L, 433L, 453L, 915L, 1160L, 25L) */ ((/* 357L, 57L, 71L, 434L, 454L, 913L, 1161L, 23L) */ ((var_1_6) * (var_1_5))) / (var_1_10))) > (last_1_var_1_13))) {
		if (var_1_11) {
		} else {
		}
	}
	if (/* 375L, 103L, 107L, 537L, 570L, 1179L) */ ((128) <= (var_1_23))) {
		if (var_1_11) {
		} else {
			if (/* 391L, 125L, 129L, 553L, 586L, 1195L) */ ((var_1_1) < (var_1_16))) {
			} else {
			}
		}
	} else {
	}
	if (/* 410L, 162L, 168L, 671L, 704L, 1214L) */ ((/* 411L, 160L, 169L, 672L, 705L, 1215L) */ ((var_1_4) * (var_1_9))) < (var_1_12))) {
	} else {
		if (/* 426L, 185L, 189L, 687L, 720L, 1230L) */ ((var_1_20) >= (32))) {
			if (var_1_11) {
			} else {
			}
		}
	}
	if (/* 441L, 219L, 223L, 777L, 798L, 1245L) */ ((var_1_19) < (var_1_7))) {
		if (/* 445L, 228L, 232L, 781L, 802L, 1249L) */ ((var_1_25) >= (var_1_9))) {
			if (/* 449L, 237L, 241L, 785L, 806L, 1253L) */ ((var_1_6) < (var_1_15))) {
			}
		}
	} else {
	}
	return /* 486L) */ ((
	/* 485L) */ ((
		/* 484L) */ ((
			/* 483L) */ ((
				/* 482L) */ ((
					/* 481L) */ ((
						/* 480L) */ ((
							/* 479L) */ ((
								/* 328L, 24L, 322L, 337L, 962L, 1132L, 72L) */ ((
									/* 329L, 6L, 12L, 323L, 338L, 955L, 1133L, 65L) */ ((
										last_1_var_1_9
									) == (
										/* 332L, 5L, 14L, 325L, 340L, 954L, 1136L, 64L) */ ((
											last_1_var_1_23
										) % (
											var_1_4
										))
									))
								) ? (
									/* 336L, 22L, 328L, 343L, 961L, 1140L, 71L) */ ((
										var_1_1
									) == (
										/* 336L, 22L, 328L, 343L, 961L, 1140L, 71L) */ ((float) (
											/* 339L, 21L, 331L, 346L, 960L, 1143L, 70L) */ ((
												var_1_5
											) - (
												var_1_6
											))
										))
									))
								) : (
									1
								))
							) && (
								/* 344L, 48L, 371L, 381L, 1148L) */ ((
									/* 345L, 36L, 40L, 372L, 382L, 1149L) */ ((
										var_1_1
									) >= (
										var_1_6
									))
								) ? (
									/* 348L, 46L, 375L, 385L, 1152L) */ ((
										var_1_7
									) == (
										/* 348L, 46L, 375L, 385L, 1152L) */ ((signed long int) (
											var_1_8
										))
									))
								) : (
									1
								))
							))
						) && (
							/* 354L, 94L, 431L, 451L, 929L, 1158L, 39L) */ ((
								/* 355L, 61L, 69L, 432L, 452L, 918L, 1159L, 28L) */ ((
									/* 356L, 59L, 70L, 433L, 453L, 915L, 1160L, 25L) */ ((
										/* 357L, 57L, 71L, 434L, 454L, 913L, 1161L, 23L) */ ((
											var_1_6
										) * (
											var_1_5
										))
									) / (
										var_1_10
									))
								) > (
									last_1_var_1_13
								))
							) ? (
								/* 363L, 92L, 439L, 459L, 928L, 1167L, 38L) */ ((
									var_1_11
								) ? (
									/* 365L, 82L, 441L, 461L, 923L, 1169L, 33L) */ ((
										var_1_9
									) == (
										/* 365L, 82L, 441L, 461L, 923L, 1169L, 33L) */ ((unsigned long int) (
											var_1_12
										))
									))
								) : (
									/* 369L, 90L, 445L, 465L, 927L, 1173L, 37L) */ ((
										var_1_9
									) == (
										/* 369L, 90L, 445L, 465L, 927L, 1173L, 37L) */ ((unsigned long int) (
											0u
										))
									))
								))
							) : (
								1
							))
						))
					) && (
						/* 374L, 153L, 536L, 569L, 1178L) */ ((
							/* 375L, 103L, 107L, 537L, 570L, 1179L) */ ((
								128
							) <= (
								var_1_23
							))
						) ? (
							/* 378L, 147L, 540L, 573L, 1182L) */ ((
								var_1_11
							) ? (
								/* 380L, 122L, 542L, 575L, 1184L) */ ((
									var_1_13
								) == (
									/* 380L, 122L, 542L, 575L, 1184L) */ ((float) (
										/* 383L, 121L, 545L, 578L, 1187L) */ ((
											var_1_14
										) + (
											/* 385L, 120L, 547L, 580L, 1189L) */ (min (
												/* 385L, 120L, 547L, 580L, 1189L) */ (
													/* 386L, 118L, 548L, 581L, 1190L) */ (max (
														/* 386L, 118L, 548L, 581L, 1190L) */ (
															3.4f
														) , (
															var_1_15
														)
													))
												) , (
													var_1_16
												)
											))
										))
									))
								))
							) : (
								/* 390L, 145L, 552L, 585L, 1194L) */ ((
									/* 391L, 125L, 129L, 553L, 586L, 1195L) */ ((
										var_1_1
									) < (
										var_1_16
									))
								) ? (
									/* 394L, 135L, 556L, 589L, 1198L) */ ((
										var_1_13
									) == (
										/* 394L, 135L, 556L, 589L, 1198L) */ ((float) (
											var_1_6
										))
									))
								) : (
									/* 398L, 143L, 560L, 593L, 1202L) */ ((
										var_1_13
									) == (
										/* 398L, 143L, 560L, 593L, 1202L) */ ((float) (
											var_1_15
										))
									))
								))
							))
						) : (
							/* 402L, 151L, 564L, 597L, 1206L) */ ((
								var_1_13
							) == (
								/* 402L, 151L, 564L, 597L, 1206L) */ ((float) (
									var_1_5
								))
							))
						))
					))
				) && (
					/* 409L, 208L, 670L, 703L, 1213L) */ ((
						/* 410L, 162L, 168L, 671L, 704L, 1214L) */ ((
							/* 411L, 160L, 169L, 672L, 705L, 1215L) */ ((
								var_1_4
							) * (
								var_1_9
							))
						) < (
							var_1_12
						))
					) ? (
						/* 415L, 182L, 676L, 709L, 1219L) */ ((
							var_1_17
						) == (
							/* 415L, 182L, 676L, 709L, 1219L) */ ((signed short int) (
								/* 418L, 181L, 679L, 712L, 1222L) */ ((
									/* 419L, 179L, 680L, 713L, 1223L) */ ((
										var_1_19
									) - (
										/* 421L, 178L, 682L, 715L, 1225L) */ ((
											var_1_20
										) + (
											var_1_21
										))
									))
								) + (
									var_1_22
								))
							))
						))
					) : (
						/* 425L, 206L, 686L, 719L, 1229L) */ ((
							/* 426L, 185L, 189L, 687L, 720L, 1230L) */ ((
								var_1_20
							) >= (
								32
							))
						) ? (
							/* 429L, 204L, 690L, 723L, 1233L) */ ((
								var_1_11
							) ? (
								/* 431L, 198L, 692L, 725L, 1235L) */ ((
									var_1_17
								) == (
									/* 431L, 198L, 692L, 725L, 1235L) */ ((signed short int) (
										100
									))
								))
							) : (
								/* 435L, 202L, 696L, 729L, 1239L) */ ((
									var_1_17
								) == (
									/* 435L, 202L, 696L, 729L, 1239L) */ ((signed short int) (
										var_1_20
									))
								))
							))
						) : (
							1
						))
					))
				))
			) && (
				/* 440L, 257L, 776L, 797L, 1244L) */ ((
					/* 441L, 219L, 223L, 777L, 798L, 1245L) */ ((
						var_1_19
					) < (
						var_1_7
					))
				) ? (
					/* 444L, 251L, 780L, 801L, 1248L) */ ((
						/* 445L, 228L, 232L, 781L, 802L, 1249L) */ ((
							var_1_25
						) >= (
							var_1_9
						))
					) ? (
						/* 448L, 249L, 784L, 805L, 1252L) */ ((
							/* 449L, 237L, 241L, 785L, 806L, 1253L) */ ((
								var_1_6
							) < (
								var_1_15
							))
						) ? (
							/* 452L, 247L, 788L, 809L, 1256L) */ ((
								var_1_23
							) == (
								/* 452L, 247L, 788L, 809L, 1256L) */ ((signed long int) (
									var_1_21
								))
							))
						) : (
							1
						))
					) : (
						1
					))
				) : (
					/* 456L, 255L, 792L, 813L, 1260L) */ ((
						var_1_23
					) == (
						/* 456L, 255L, 792L, 813L, 1260L) */ ((signed long int) (
							var_1_17
						))
					))
				))
			))
		) && (
			/* 462L, 265L, 831L, 837L, 1266L) */ ((
				var_1_24
			) == (
				/* 462L, 265L, 831L, 837L, 1266L) */ ((unsigned char) (
					2
				))
			))
		))
	) && (
		/* 468L, 275L, 855L, 861L, 1272L) */ ((
			var_1_25
		) == (
			/* 468L, 275L, 855L, 861L, 1272L) */ ((unsigned long int) (
				var_1_21
			))
		))
	))
) && (
	/* 474L, 285L, 879L, 885L, 1278L) */ ((
		var_1_26
	) == (
		/* 474L, 285L, 879L, 885L, 1278L) */ ((signed long int) (
			var_1_8
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
