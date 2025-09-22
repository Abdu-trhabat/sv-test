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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch123Filler_PE_CN.c", 13, "reach_error"); }
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
unsigned long int var_1_1 = 16;
unsigned long int var_1_2 = 3375952581;
unsigned long int var_1_3 = 16;
unsigned long int var_1_4 = 5;
unsigned long int var_1_5 = 2;
unsigned char var_1_6 = 0;
signed char var_1_7 = -1;
signed char var_1_8 = -32;
signed char var_1_9 = 64;
signed char var_1_10 = 0;
unsigned short int var_1_11 = 2;
unsigned short int var_1_12 = 5;
unsigned short int var_1_13 = 50;
float var_1_16 = 8.75;
float var_1_17 = 9.75;
float var_1_18 = 4.2;
float var_1_19 = 0.0;
float var_1_20 = 100.25;
float var_1_21 = 8.1;
signed short int var_1_22 = 64;
signed short int var_1_23 = -8;
signed char var_1_24 = 16;
signed short int var_1_25 = 100;
signed char var_1_26 = -25;
signed char var_1_27 = 10;
unsigned char var_1_28 = 1;
unsigned char var_1_29 = 0;
signed char var_1_30 = 1;
signed char var_1_31 = 16;
unsigned long int var_1_32 = 50;
unsigned long int var_1_33 = 1891520580;
unsigned long int var_1_34 = 1720392339;
unsigned long int var_1_35 = 32;
unsigned short int var_1_36 = 2;
unsigned short int var_1_37 = 60368;
unsigned char var_1_38 = 0;
unsigned char var_1_39 = 1;
unsigned char var_1_40 = 1;
unsigned char var_1_41 = 1;
float var_1_42 = 4.75;
float var_1_43 = 0.7;
float var_1_44 = 63.4;
float var_1_45 = 255.5;
unsigned short int var_1_46 = 10000;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_1 = 16;
float last_1_var_1_16 = 8.75;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req5Batch123Filler_PE_CN
	/* 27L, 207L, 595L, 622L, 951L, 1071L) */ if (/* 3L, 170L, 171L, 596L, 623L, 927L, 1072L) */ ((var_1_2) <= (last_1_var_1_1))) {
		/* 9L, 182L, 599L, 626L, 933L, 1076L) */ var_1_11 = (
			/* 8L, 181L, 602L, 629L, 932L, 1079L) */ (max (
				/* 8L, 181L, 602L, 629L, 932L, 1079L) */ (
					var_1_12
				) , (
					var_1_13
				)
			))
		);
	} else {
		/* 26L, 205L, 605L, 632L, 950L, 1082L) */ if (/* 15L, 186L, 187L, 606L, 633L, 939L, 1083L) */ ((/* 12L, 184L, 188L, 607L, 634L, 936L, 1084L) */ (- (last_1_var_1_16))) <= (last_1_var_1_16))) {
			/* 21L, 200L, 610L, 637L, 945L, 1089L) */ var_1_11 = (
				/* 20L, 199L, 613L, 640L, 944L, 1092L) */ (max (
					/* 20L, 199L, 613L, 640L, 944L, 1092L) */ (
						var_1_13
					) , (
						var_1_12
					)
				))
			);
		} else {
			/* 25L, 204L, 616L, 643L, 949L, 1095L) */ var_1_11 = (
				4
			);
		}
	}


	// From: Req1Batch123Filler_PE_CN
	/* 985L, 40L, 279L, 303L) */ if (/* 986L, 8L, 9L, 280L, 304L) */ ((/* 987L, 4L, 10L, 281L, 305L) */ ((var_1_2) - (var_1_3))) != (/* 990L, 7L, 13L, 284L, 308L) */ ((var_1_4) / (var_1_5))))) {
		/* 993L, 34L, 287L, 311L) */ if (var_1_6) {
			/* 995L, 29L, 289L, 313L) */ var_1_1 = (
				var_1_3
			);
		} else {
			/* 999L, 33L, 293L, 317L) */ var_1_1 = (
				16u
			);
		}
	} else {
		/* 1003L, 39L, 297L, 321L) */ var_1_1 = (
			var_1_3
		);
	}


	// From: Req2Batch123Filler_PE_CN
	/* 1010L, 55L, 376L, 385L) */ if (var_1_6) {
		/* 1012L, 54L, 378L, 387L) */ var_1_7 = (
			var_1_8
		);
	}


	// From: Req3Batch123Filler_PE_CN
	signed long int stepLocal_1 = 8;
	unsigned long int stepLocal_0 = var_1_1;
	/* 1051L, 129L, 410L, 442L) */ if (/* 1024L, 67L, 68L, 411L, 443L) */ ((stepLocal_1) == (var_1_3))) {
		/* 1046L, 123L, 414L, 446L) */ if (/* 1026L, 76L, 77L, 415L, 447L) */ ((stepLocal_0) >= (var_1_3))) {
			/* 1041L, 117L, 418L, 450L) */ if (/* 1032L, 88L, 89L, 419L, 451L) */ (! (/* 1031L, 87L, 90L, 420L, 452L) */ ((var_1_3) > (/* 1030L, 86L, 92L, 422L, 454L) */ ((var_1_5) / (var_1_2))))))) {
				/* 1036L, 104L, 425L, 457L) */ var_1_9 = (
					var_1_8
				);
			} else {
				/* 1040L, 116L, 429L, 461L) */ var_1_9 = (
					0
				);
			}
		} else {
			/* 1045L, 122L, 433L, 465L) */ var_1_9 = (
				var_1_8
			);
		}
	} else {
		/* 1050L, 128L, 437L, 469L) */ var_1_9 = (
			-50
		);
	}


	// From: Req4Batch123Filler_PE_CN
	/* 1057L, 160L, 539L, 553L) */ if (/* 1058L, 141L, 142L, 540L, 554L) */ ((/* 1059L, 137L, 143L, 541L, 555L) */ ((var_1_3) == (32u))) || (/* 1062L, 140L, 146L, 544L, 558L) */ ((var_1_5) == (var_1_1))))) {
		/* 1065L, 159L, 547L, 561L) */ var_1_10 = (
			var_1_8
		);
	}


	// From: Req6Batch123Filler_PE_CN
	unsigned short int stepLocal_4 = var_1_11;
	unsigned short int stepLocal_3 = var_1_12;
	unsigned short int stepLocal_2 = var_1_11;
	/* 1141L, 274L, 776L, 813L) */ if (/* 1110L, 217L, 218L, 777L, 814L) */ ((var_1_4) > (stepLocal_2))) {
		/* 1136L, 268L, 780L, 817L) */ if (/* 1112L, 226L, 227L, 781L, 818L) */ ((stepLocal_4) <= (var_1_13))) {
			/* 1131L, 262L, 784L, 821L) */ if (/* 1116L, 237L, 238L, 785L, 822L) */ ((/* 1115L, 235L, 239L, 786L, 823L) */ ((var_1_1) / (var_1_5))) > (stepLocal_3))) {
				/* 1120L, 251L, 790L, 827L) */ var_1_16 = (
					var_1_17
				);
			} else {
				/* 1130L, 261L, 794L, 831L) */ var_1_16 = (
					/* 1129L, 260L, 797L, 834L) */ ((
						var_1_18
					) - (
						/* 1128L, 259L, 799L, 836L) */ (max (
							/* 1128L, 259L, 799L, 836L) */ (
								/* 1126L, 257L, 800L, 837L) */ ((
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
			}
		} else {
			/* 1135L, 267L, 804L, 841L) */ var_1_16 = (
				var_1_18
			);
		}
	} else {
		/* 1140L, 273L, 808L, 845L) */ var_1_16 = (
			var_1_18
		);
	}


	// From: CodeObject1
	/* 65L) */ var_1_22 = (
		var_1_23
	);


	// From: CodeObject2
	/* 94L) */ if (/* 76L, 75L) */ ((var_1_22) <= (/* 78L, 74L) */ ((var_1_25) - (/* 80L, 73L) */ (abs (var_1_23))))))) {
		/* 93L) */ var_1_24 = (
			/* 92L) */ (min (
				/* 92L) */ (
					var_1_26
				) , (
					-2
				)
			))
		);
	}


	// From: CodeObject3
	/* 116L) */ if (/* 101L, 100L) */ ((var_1_28) && (var_1_29))) {
		/* 115L) */ var_1_27 = (
			/* 114L) */ (abs (
				/* 113L) */ ((
					var_1_30
				) - (
					/* 112L) */ (min (
						/* 112L) */ (
							var_1_31
						) , (
							100
						)
					))
				))
			))
		);
	}


	// From: CodeObject4
	/* 152L) */ if (/* 123L, 122L) */ ((-5) > (var_1_24))) {
		/* 143L) */ var_1_32 = (
			/* 142L) */ ((
				/* 137L) */ ((
					/* 133L) */ ((
						var_1_33
					) - (
						var_1_31
					))
				) + (
					/* 136L) */ ((
						var_1_34
					) - (
						var_1_30
					))
				))
			) - (
				/* 141L) */ (abs (
					/* 140L) */ ((
						200u
					) + (
						var_1_35
					))
				))
			))
		);
	} else {
		/* 151L) */ var_1_32 = (
			/* 150L) */ (min (
				/* 150L) */ (
					/* 148L) */ (max (
						/* 148L) */ (
							var_1_30
						) , (
							var_1_31
						)
					))
				) , (
					var_1_33
				)
			))
		);
	}


	// From: CodeObject5
	/* 207L) */ if (/* 164L, 163L) */ ((var_1_22) < (/* 166L, 162L) */ (~ (var_1_35))))) {
		/* 178L) */ var_1_36 = (
			/* 177L) */ ((
				/* 175L) */ (abs (
					var_1_37
				))
			) - (
				var_1_30
			))
		);
	} else {
		/* 205L) */ if (/* 182L, 181L) */ ((var_1_25) >= (var_1_34))) {
			/* 199L) */ if (var_1_28) {
				/* 194L) */ var_1_36 = (
					var_1_31
				);
			} else {
				/* 198L) */ var_1_36 = (
					var_1_37
				);
			}
		} else {
			/* 204L) */ var_1_36 = (
				var_1_31
			);
		}
	}


	// From: CodeObject6
	/* 236L) */ if (var_1_28) {
		/* 225L) */ var_1_38 = (
			/* 224L) */ ((
				var_1_39
			) && (
				/* 223L) */ ((
					var_1_29
				) || (
					var_1_40
				))
			))
		);
	} else {
		/* 235L) */ var_1_38 = (
			/* 234L) */ ((
				/* 230L) */ ((
					var_1_29
				) || (
					var_1_40
				))
			) && (
				/* 233L) */ ((
					var_1_39
				) || (
					var_1_41
				))
			))
		);
	}


	// From: CodeObject7
	/* 251L) */ if (var_1_40) {
		/* 250L) */ var_1_42 = (
			/* 249L) */ (min (
				/* 249L) */ (
					var_1_43
				) , (
					/* 248L) */ (max (
						/* 248L) */ (
							var_1_44
						) , (
							var_1_45
						)
					))
				)
			))
		);
	}


	// From: CodeObject8
	/* 258L) */ var_1_46 = (
		5
	);
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_2 >= 2147483647);
	assume_abort_if_not(var_1_2 <= 4294967295);
	var_1_3 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 4294967295);
	var_1_5 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 4294967295);
	assume_abort_if_not(var_1_5 != 0);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_8 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_8 >= -127);
	assume_abort_if_not(var_1_8 <= 126);
	var_1_12 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 65534);
	var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 65534);
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= -922337.2036854766000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= 4611686.018427383000e+12F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854766000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427383000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854766000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_23 >= -32767);
	assume_abort_if_not(var_1_23 <= 32766);
	var_1_25 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_25 >= -1);
	assume_abort_if_not(var_1_25 <= 32767);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= -127);
	assume_abort_if_not(var_1_26 <= 126);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 1);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 1);
	var_1_30 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 126);
	var_1_31 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 126);
	var_1_33 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_33 >= 1610612735);
	assume_abort_if_not(var_1_33 <= 2147483647);
	var_1_34 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_34 >= 1610612735);
	assume_abort_if_not(var_1_34 <= 2147483647);
	var_1_35 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 1073741823);
	var_1_37 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_37 >= 32767);
	assume_abort_if_not(var_1_37 <= 65534);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 1);
	assume_abort_if_not(var_1_39 <= 1);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 1);
	assume_abort_if_not(var_1_40 <= 1);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 1);
	assume_abort_if_not(var_1_41 <= 1);
	var_1_43 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_43 >= -922337.2036854766000e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854766000e+12F && var_1_43 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_44 >= -922337.2036854766000e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854766000e+12F && var_1_44 >= 1.0e-20F ));
	var_1_45 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_45 >= -922337.2036854766000e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 9223372.036854766000e+12F && var_1_45 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_16 = var_1_16;
}

int property(void) {
	if (/* 263L, 8L, 16L, 328L, 352L, 1149L) */ ((/* 264L, 4L, 17L, 329L, 353L, 1150L) */ ((var_1_2) - (var_1_3))) != (/* 267L, 7L, 20L, 332L, 356L, 1153L) */ ((var_1_4) / (var_1_5))))) {
		if (var_1_6) {
		} else {
		}
	} else {
	}
	if (var_1_6) {
	}
	if (/* 295L, 67L, 71L, 475L, 507L, 1181L) */ ((8) == (var_1_3))) {
		if (/* 299L, 76L, 80L, 479L, 511L, 1185L) */ ((var_1_1) >= (var_1_3))) {
			if (/* 303L, 88L, 95L, 483L, 515L, 1189L) */ (! (/* 304L, 87L, 96L, 484L, 516L, 1190L) */ ((var_1_3) > (/* 306L, 86L, 98L, 486L, 518L, 1192L) */ ((var_1_5) / (var_1_2))))))) {
			} else {
			}
		} else {
		}
	} else {
	}
	if (/* 328L, 141L, 149L, 568L, 582L, 1214L) */ ((/* 329L, 137L, 150L, 569L, 583L, 1215L) */ ((var_1_3) == (32u))) || (/* 332L, 140L, 153L, 572L, 586L, 1218L) */ ((var_1_5) == (var_1_1))))) {
	}
	if (/* 342L, 170L, 174L, 650L, 677L, 957L, 1228L, 33L) */ ((var_1_2) <= (last_1_var_1_1))) {
	} else {
		if (/* 353L, 186L, 191L, 660L, 687L, 969L, 1239L, 45L) */ ((/* 354L, 184L, 192L, 661L, 688L, 966L, 1240L, 42L) */ (- (last_1_var_1_16))) <= (last_1_var_1_16))) {
		} else {
		}
	}
	if (/* 371L, 217L, 221L, 851L, 888L, 1257L) */ ((var_1_4) > (var_1_11))) {
		if (/* 375L, 226L, 230L, 855L, 892L, 1261L) */ ((var_1_11) <= (var_1_13))) {
			if (/* 379L, 237L, 243L, 859L, 896L, 1265L) */ ((/* 380L, 235L, 244L, 860L, 897L, 1266L) */ ((var_1_1) / (var_1_5))) > (var_1_12))) {
			} else {
			}
		} else {
		}
	} else {
	}
	return /* 411L) */ ((
	/* 410L) */ ((
		/* 409L) */ ((
			/* 408L) */ ((
				/* 407L) */ ((
					/* 262L, 41L, 327L, 351L, 1148L) */ ((
						/* 263L, 8L, 16L, 328L, 352L, 1149L) */ ((
							/* 264L, 4L, 17L, 329L, 353L, 1150L) */ ((
								var_1_2
							) - (
								var_1_3
							))
						) != (
							/* 267L, 7L, 20L, 332L, 356L, 1153L) */ ((
								var_1_4
							) / (
								var_1_5
							))
						))
					) ? (
						/* 270L, 35L, 335L, 359L, 1156L) */ ((
							var_1_6
						) ? (
							/* 272L, 29L, 337L, 361L, 1158L) */ ((
								var_1_1
							) == (
								/* 272L, 29L, 337L, 361L, 1158L) */ ((unsigned long int) (
									var_1_3
								))
							))
						) : (
							/* 276L, 33L, 341L, 365L, 1162L) */ ((
								var_1_1
							) == (
								/* 276L, 33L, 341L, 365L, 1162L) */ ((unsigned long int) (
									16u
								))
							))
						))
					) : (
						/* 280L, 39L, 345L, 369L, 1166L) */ ((
							var_1_1
						) == (
							/* 280L, 39L, 345L, 369L, 1166L) */ ((unsigned long int) (
								var_1_3
							))
						))
					))
				) && (
					/* 287L, 56L, 394L, 403L, 1173L) */ ((
						var_1_6
					) ? (
						/* 289L, 54L, 396L, 405L, 1175L) */ ((
							var_1_7
						) == (
							/* 289L, 54L, 396L, 405L, 1175L) */ ((signed char) (
								var_1_8
							))
						))
					) : (
						1
					))
				))
			) && (
				/* 294L, 130L, 474L, 506L, 1180L) */ ((
					/* 295L, 67L, 71L, 475L, 507L, 1181L) */ ((
						8
					) == (
						var_1_3
					))
				) ? (
					/* 298L, 124L, 478L, 510L, 1184L) */ ((
						/* 299L, 76L, 80L, 479L, 511L, 1185L) */ ((
							var_1_1
						) >= (
							var_1_3
						))
					) ? (
						/* 302L, 118L, 482L, 514L, 1188L) */ ((
							/* 303L, 88L, 95L, 483L, 515L, 1189L) */ (! (
								/* 304L, 87L, 96L, 484L, 516L, 1190L) */ ((
									var_1_3
								) > (
									/* 306L, 86L, 98L, 486L, 518L, 1192L) */ ((
										var_1_5
									) / (
										var_1_2
									))
								))
							))
						) ? (
							/* 309L, 104L, 489L, 521L, 1195L) */ ((
								var_1_9
							) == (
								/* 309L, 104L, 489L, 521L, 1195L) */ ((signed char) (
									var_1_8
								))
							))
						) : (
							/* 313L, 116L, 493L, 525L, 1199L) */ ((
								var_1_9
							) == (
								/* 313L, 116L, 493L, 525L, 1199L) */ ((signed char) (
									0
								))
							))
						))
					) : (
						/* 317L, 122L, 497L, 529L, 1203L) */ ((
							var_1_9
						) == (
							/* 317L, 122L, 497L, 529L, 1203L) */ ((signed char) (
								var_1_8
							))
						))
					))
				) : (
					/* 321L, 128L, 501L, 533L, 1207L) */ ((
						var_1_9
					) == (
						/* 321L, 128L, 501L, 533L, 1207L) */ ((signed char) (
							-50
						))
					))
				))
			))
		) && (
			/* 327L, 161L, 567L, 581L, 1213L) */ ((
				/* 328L, 141L, 149L, 568L, 582L, 1214L) */ ((
					/* 329L, 137L, 150L, 569L, 583L, 1215L) */ ((
						var_1_3
					) == (
						32u
					))
				) || (
					/* 332L, 140L, 153L, 572L, 586L, 1218L) */ ((
						var_1_5
					) == (
						var_1_1
					))
				))
			) ? (
				/* 335L, 159L, 575L, 589L, 1221L) */ ((
					var_1_10
				) == (
					/* 335L, 159L, 575L, 589L, 1221L) */ ((signed char) (
						var_1_8
					))
				))
			) : (
				1
			))
		))
	) && (
		/* 341L, 208L, 649L, 676L, 981L, 1227L, 57L) */ ((
			/* 342L, 170L, 174L, 650L, 677L, 957L, 1228L, 33L) */ ((
				var_1_2
			) <= (
				last_1_var_1_1
			))
		) ? (
			/* 346L, 182L, 653L, 680L, 963L, 1232L, 39L) */ ((
				var_1_11
			) == (
				/* 346L, 182L, 653L, 680L, 963L, 1232L, 39L) */ ((unsigned short int) (
					/* 349L, 181L, 656L, 683L, 962L, 1235L, 38L) */ (max (
						/* 349L, 181L, 656L, 683L, 962L, 1235L, 38L) */ (
							var_1_12
						) , (
							var_1_13
						)
					))
				))
			))
		) : (
			/* 352L, 206L, 659L, 686L, 980L, 1238L, 56L) */ ((
				/* 353L, 186L, 191L, 660L, 687L, 969L, 1239L, 45L) */ ((
					/* 354L, 184L, 192L, 661L, 688L, 966L, 1240L, 42L) */ (- (
						last_1_var_1_16
					))
				) <= (
					last_1_var_1_16
				))
			) ? (
				/* 359L, 200L, 664L, 691L, 975L, 1245L, 51L) */ ((
					var_1_11
				) == (
					/* 359L, 200L, 664L, 691L, 975L, 1245L, 51L) */ ((unsigned short int) (
						/* 362L, 199L, 667L, 694L, 974L, 1248L, 50L) */ (max (
							/* 362L, 199L, 667L, 694L, 974L, 1248L, 50L) */ (
								var_1_13
							) , (
								var_1_12
							)
						))
					))
				))
			) : (
				/* 365L, 204L, 670L, 697L, 979L, 1251L, 55L) */ ((
					var_1_11
				) == (
					/* 365L, 204L, 670L, 697L, 979L, 1251L, 55L) */ ((unsigned short int) (
						4
					))
				))
			))
		))
	))
) && (
	/* 370L, 275L, 850L, 887L, 1256L) */ ((
		/* 371L, 217L, 221L, 851L, 888L, 1257L) */ ((
			var_1_4
		) > (
			var_1_11
		))
	) ? (
		/* 374L, 269L, 854L, 891L, 1260L) */ ((
			/* 375L, 226L, 230L, 855L, 892L, 1261L) */ ((
				var_1_11
			) <= (
				var_1_13
			))
		) ? (
			/* 378L, 263L, 858L, 895L, 1264L) */ ((
				/* 379L, 237L, 243L, 859L, 896L, 1265L) */ ((
					/* 380L, 235L, 244L, 860L, 897L, 1266L) */ ((
						var_1_1
					) / (
						var_1_5
					))
				) > (
					var_1_12
				))
			) ? (
				/* 384L, 251L, 864L, 901L, 1270L) */ ((
					var_1_16
				) == (
					/* 384L, 251L, 864L, 901L, 1270L) */ ((float) (
						var_1_17
					))
				))
			) : (
				/* 388L, 261L, 868L, 905L, 1274L) */ ((
					var_1_16
				) == (
					/* 388L, 261L, 868L, 905L, 1274L) */ ((float) (
						/* 391L, 260L, 871L, 908L, 1277L) */ ((
							var_1_18
						) - (
							/* 393L, 259L, 873L, 910L, 1279L) */ (max (
								/* 393L, 259L, 873L, 910L, 1279L) */ (
									/* 394L, 257L, 874L, 911L, 1280L) */ ((
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
			))
		) : (
			/* 398L, 267L, 878L, 915L, 1284L) */ ((
				var_1_16
			) == (
				/* 398L, 267L, 878L, 915L, 1284L) */ ((float) (
					var_1_18
				))
			))
		))
	) : (
		/* 402L, 273L, 882L, 919L, 1288L) */ ((
			var_1_16
		) == (
			/* 402L, 273L, 882L, 919L, 1288L) */ ((float) (
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
