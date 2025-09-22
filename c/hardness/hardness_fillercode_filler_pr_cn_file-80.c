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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch80Filler_PR_CN.c", 13, "reach_error"); }
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
signed short int var_1_1 = 128;
double var_1_2 = 24.25;
double var_1_3 = 128.5;
signed short int var_1_6 = -16;
signed short int var_1_7 = -2;
signed short int var_1_8 = 5;
signed short int var_1_9 = -25;
unsigned char var_1_10 = 200;
unsigned char var_1_11 = 1;
unsigned char var_1_12 = 1;
double var_1_13 = 128.375;
unsigned short int var_1_14 = 0;
float var_1_15 = 0.0;
float var_1_16 = 4.87;
float var_1_17 = 8.875;
signed char var_1_18 = -16;
double var_1_19 = 4.9;
double var_1_20 = 63.5;
double var_1_21 = 64.8;
double var_1_22 = 100.675;
double var_1_23 = 7.75;
double var_1_24 = 1.8;
float var_1_25 = 9999999999.375;
unsigned short int var_1_26 = 0;
unsigned short int var_1_27 = 10;
float var_1_28 = 128.75;
double var_1_29 = 9.25;
double var_1_30 = 0.0;
double var_1_31 = 127.6;
double var_1_32 = 64.75;
unsigned long int var_1_33 = 128;
unsigned char var_1_34 = 1;
unsigned long int var_1_35 = 1089279310;
unsigned long int var_1_36 = 1307137784;
unsigned long int var_1_37 = 1417807175;
unsigned long int var_1_38 = 256;
unsigned long int var_1_39 = 2;
unsigned long int var_1_40 = 2676616107;
unsigned short int var_1_41 = 5;
unsigned short int var_1_42 = 200;
unsigned short int var_1_43 = 16;
unsigned short int var_1_44 = 8;
unsigned char var_1_45 = 5;
unsigned char var_1_46 = 4;
unsigned char var_1_47 = 16;

// Calibration values

// Last'ed variables
double last_1_var_1_19 = 4.9;
double last_1_var_1_24 = 1.8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch80Filler_PR_CN
	/* 65L, 37L, 267L, 290L, 842L, 911L) */ if (/* 50L, 8L, 9L, 268L, 291L, 827L, 912L) */ ((/* 47L, 6L, 10L, 269L, 292L, 824L, 913L) */ ((/* 44L, 4L, 11L, 270L, 293L, 821L, 914L) */ ((var_1_2) - (var_1_3))) * (last_1_var_1_24))) < (last_1_var_1_24))) {
		/* 60L, 32L, 275L, 298L, 837L, 921L) */ var_1_1 = (
			/* 59L, 31L, 278L, 301L, 836L, 924L) */ (min (
				/* 59L, 31L, 278L, 301L, 836L, 924L) */ (
					-8
				) , (
					/* 58L, 30L, 280L, 303L, 835L, 926L) */ ((
						var_1_6
					) + (
						/* 57L, 29L, 282L, 305L, 834L, 928L) */ (min (
							/* 57L, 29L, 282L, 305L, 834L, 928L) */ (
								var_1_7
							) , (
								var_1_8
							)
						))
					))
				)
			))
		);
	} else {
		/* 64L, 36L, 285L, 308L, 841L, 931L) */ var_1_1 = (
			var_1_6
		);
	}


	// From: CodeObject3
	/* 150L) */ if (var_1_34) {
		/* 149L) */ var_1_33 = (
			/* 148L) */ ((
				/* 140L) */ ((
					var_1_35
				) + (
					/* 139L) */ (min (
						/* 139L) */ (
							var_1_36
						) , (
							var_1_37
						)
					))
				))
			) - (
				/* 147L) */ ((
					/* 143L) */ ((
						var_1_26
					) + (
						var_1_27
					))
				) + (
					/* 146L) */ (min (
						/* 146L) */ (
							1000000000u
						) , (
							var_1_38
						)
					))
				))
			))
		);
	}


	// From: Req7Batch80Filler_PR_CN
	/* 1045L, 261L, 772L, 784L) */ if (/* 1046L, 246L, 247L, 773L, 785L) */ ((/* 1047L, 244L, 248L, 774L, 786L) */ ((32) + (var_1_12))) != (var_1_1))) {
		/* 1051L, 260L, 778L, 790L) */ var_1_24 = (
			var_1_21
		);
	}


	// From: CodeObject6
	/* 301L) */ if (/* 279L, 278L) */ ((-32) < (/* 281L, 277L) */ ((var_1_42) & (var_1_41))))) {
		/* 296L) */ var_1_45 = (
			/* 295L) */ (min (
				/* 295L) */ (
					var_1_46
				) , (
					/* 294L) */ ((
						var_1_47
					) + (
						10
					))
				)
			))
		);
	} else {
		/* 300L) */ var_1_45 = (
			10
		);
	}


	// From: Req3Batch80Filler_PR_CN
	/* 19L, 103L, 427L, 447L, 888L, 957L) */ if (var_1_11) {
		/* 6L, 78L, 429L, 449L, 875L, 959L) */ var_1_10 = (
			/* 5L, 77L, 432L, 452L, 874L, 962L) */ (min (
				/* 5L, 77L, 432L, 452L, 874L, 962L) */ (
					0
				) , (
					var_1_12
				)
			))
		);
	} else {
		/* 18L, 101L, 435L, 455L, 887L, 965L) */ if (/* 13L, 84L, 85L, 436L, 456L, 882L, 966L) */ (! (/* 12L, 83L, 86L, 437L, 457L, 881L, 967L) */ ((last_1_var_1_19) > (/* 11L, 82L, 88L, 439L, 459L, 880L, 970L) */ ((255.9) / (var_1_13))))))) {
			/* 17L, 100L, 442L, 462L, 886L, 973L) */ var_1_10 = (
				var_1_12
			);
		}
	}


	// From: CodeObject2
	/* 126L) */ var_1_29 = (
		/* 125L) */ ((
			/* 123L) */ ((
				8.18603254193775E18
			) - (
				/* 122L) */ ((
					var_1_30
				) - (
					var_1_31
				))
			))
		) - (
			var_1_32
		))
	);


	// From: Req4Batch80Filler_PR_CN
	/* 980L, 150L, 509L, 531L) */ if (/* 981L, 110L, 111L, 510L, 532L) */ (! (var_1_11))) {
		/* 983L, 148L, 512L, 534L) */ if (/* 984L, 121L, 122L, 513L, 535L) */ ((/* 985L, 119L, 123L, 514L, 536L) */ ((/* 986L, 117L, 124L, 515L, 537L) */ ((var_1_15) - (var_1_16))) - (var_1_17))) <= (var_1_13))) {
			/* 991L, 139L, 520L, 542L) */ var_1_14 = (
				var_1_10
			);
		} else {
			/* 995L, 147L, 524L, 546L) */ var_1_14 = (
				128
			);
		}
	}


	// From: CodeObject1
	/* 113L) */ if (/* 99L, 98L) */ ((/* 100L, 96L) */ ((var_1_26) & (var_1_27))) >= (-2))) {
		/* 112L) */ var_1_25 = (
			var_1_28
		);
	}


	// From: Req6Batch80Filler_PR_CN
	/* 1019L, 230L, 662L, 690L) */ if (/* 1020L, 201L, 202L, 663L, 691L) */ ((var_1_12) < (/* 1022L, 200L, 204L, 665L, 693L) */ ((1) + (var_1_14))))) {
		/* 1025L, 223L, 668L, 696L) */ var_1_19 = (
			/* 1028L, 222L, 671L, 699L) */ ((
				var_1_20
			) + (
				/* 1030L, 221L, 673L, 701L) */ (max (
					/* 1030L, 221L, 673L, 701L) */ (
						/* 1031L, 217L, 674L, 702L) */ ((
							199.5
						) + (
							var_1_21
						))
					) , (
						/* 1034L, 220L, 677L, 705L) */ (max (
							/* 1034L, 220L, 677L, 705L) */ (
								var_1_22
							) , (
								var_1_23
							)
						))
					)
				))
			))
		);
	} else {
		/* 1037L, 229L, 680L, 708L) */ var_1_19 = (
			/* 1040L, 228L, 683L, 711L) */ ((
				var_1_22
			) + (
				var_1_20
			))
		);
	}


	// From: CodeObject5
	/* 270L) */ if (/* 231L, 230L) */ ((/* 232L, 227L) */ (min (/* 232L, 227L) */ (/* 233L, 225L) */ ((var_1_30) * (var_1_32))) , (var_1_29)))) >= (/* 237L, 229L) */ (- (var_1_28))))) {
		/* 268L) */ if (/* 250L, 249L) */ ((var_1_35) > (var_1_40))) {
			/* 263L) */ var_1_41 = (
				/* 262L) */ ((
					8
				) + (
					/* 261L) */ (min (
						/* 261L) */ (
							var_1_42
						) , (
							var_1_43
						)
					))
				))
			);
		} else {
			/* 267L) */ var_1_41 = (
				var_1_44
			);
		}
	}


	// From: Req2Batch80Filler_PR_CN
	signed short int stepLocal_0 = var_1_8;
	/* 953L, 64L, 359L, 376L) */ if (/* 940L, 45L, 46L, 360L, 377L) */ ((stepLocal_0) >= (var_1_7))) {
		/* 946L, 57L, 363L, 380L) */ var_1_9 = (
			/* 945L, 56L, 366L, 383L) */ ((
				-256
			) + (
				var_1_6
			))
		);
	} else {
		/* 952L, 63L, 369L, 386L) */ var_1_9 = (
			/* 951L, 62L, 372L, 389L) */ ((
				var_1_7
			) + (
				var_1_6
			))
		);
	}


	// From: CodeObject4
	/* 219L) */ if (/* 163L, 162L) */ ((/* 164L, 160L) */ ((var_1_33) | (var_1_38))) > (var_1_26))) {
		/* 217L) */ if (/* 177L, 176L) */ ((var_1_29) <= (/* 179L, 175L) */ (abs (var_1_25))))) {
			/* 193L) */ var_1_39 = (
				/* 192L) */ (min (
					/* 192L) */ (
						var_1_36
					) , (
						/* 191L) */ ((
							/* 189L) */ (abs (
								var_1_40
							))
						) - (
							var_1_27
						))
					)
				))
			);
		} else {
			/* 215L) */ if (/* 198L, 197L) */ ((var_1_27) > (/* 200L, 196L) */ (abs (var_1_33))))) {
				/* 209L) */ var_1_39 = (
					var_1_38
				);
			} else {
				/* 214L) */ var_1_39 = (
					/* 213L) */ (abs (
						var_1_27
					))
				);
			}
		}
	}


	// From: Req5Batch80Filler_PR_CN
	/* 1003L, 185L, 598L, 614L) */ if (/* 1004L, 166L, 167L, 599L, 615L) */ ((/* 1005L, 164L, 168L, 600L, 616L) */ ((2935136887u) - (/* 1007L, 163L, 170L, 602L, 618L) */ ((var_1_12) + (var_1_10))))) <= (var_1_14))) {
		/* 1011L, 184L, 606L, 622L) */ var_1_18 = (
			32
		);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= 0.0F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= -16383);
	assume_abort_if_not(var_1_6 <= 16383);
	var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_7 >= -16383);
	assume_abort_if_not(var_1_7 <= 16383);
	var_1_8 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_8 >= -16383);
	assume_abort_if_not(var_1_8 <= 16383);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 254);
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
	assume_abort_if_not(var_1_13 != 0.0F);
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= 4611686.018427388000e+12F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427388000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= -461168.6018427383000e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427383000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= -230584.3009213691400e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 2305843.009213691400e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= -461168.6018427383000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427383000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_23 >= -461168.6018427383000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427383000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 65535);
	var_1_27 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 65535);
	var_1_28 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_28 >= -922337.2036854766000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854766000e+12F && var_1_28 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= 2305843.009213691400e+12F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 4611686.018427383000e+12F && var_1_30 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_31 >= 0.0F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 2305843.009213691400e+12F && var_1_31 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854766000e+12F && var_1_32 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 1);
	var_1_35 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_35 >= 1073741823);
	assume_abort_if_not(var_1_35 <= 2147483647);
	var_1_36 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_36 >= 1073741824);
	assume_abort_if_not(var_1_36 <= 2147483647);
	var_1_37 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_37 >= 1073741824);
	assume_abort_if_not(var_1_37 <= 2147483647);
	var_1_38 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 1073741823);
	var_1_40 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_40 >= 2147483647);
	assume_abort_if_not(var_1_40 <= 4294967294);
	var_1_42 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 32767);
	var_1_43 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 32767);
	var_1_44 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 65534);
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 254);
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 127);
}



void updateLastVariables(void) {
	last_1_var_1_19 = var_1_19;
	last_1_var_1_24 = var_1_24;
}

int property(void) {
	if (/* 304L, 8L, 16L, 314L, 337L, 852L, 1057L, 75L) */ ((/* 305L, 6L, 17L, 315L, 338L, 849L, 1058L, 72L) */ ((/* 306L, 4L, 18L, 316L, 339L, 846L, 1059L, 69L) */ ((var_1_2) - (var_1_3))) * (last_1_var_1_24))) < (last_1_var_1_24))) {
	} else {
	}
	if (/* 329L, 45L, 49L, 394L, 411L, 1082L) */ ((var_1_8) >= (var_1_7))) {
	} else {
	}
	if (var_1_11) {
	} else {
		if (/* 354L, 84L, 91L, 476L, 496L, 903L, 1107L, 34L) */ (! (/* 355L, 83L, 92L, 477L, 497L, 902L, 1108L, 33L) */ ((last_1_var_1_19) > (/* 358L, 82L, 94L, 479L, 499L, 901L, 1111L, 32L) */ ((255.9) / (var_1_13))))))) {
		}
	}
	if (/* 369L, 110L, 113L, 554L, 576L, 1122L) */ (! (var_1_11))) {
		if (/* 372L, 121L, 129L, 557L, 579L, 1125L) */ ((/* 373L, 119L, 130L, 558L, 580L, 1126L) */ ((/* 374L, 117L, 131L, 559L, 581L, 1127L) */ ((var_1_15) - (var_1_16))) - (var_1_17))) <= (var_1_13))) {
		} else {
		}
	}
	if (/* 392L, 166L, 174L, 631L, 647L, 1145L) */ ((/* 393L, 164L, 175L, 632L, 648L, 1146L) */ ((2935136887u) - (/* 395L, 163L, 177L, 634L, 650L, 1148L) */ ((var_1_12) + (var_1_10))))) <= (var_1_14))) {
	}
	if (/* 408L, 201L, 207L, 719L, 747L, 1161L) */ ((var_1_12) < (/* 410L, 200L, 209L, 721L, 749L, 1163L) */ ((1) + (var_1_14))))) {
	} else {
	}
	if (/* 434L, 246L, 252L, 797L, 809L, 1187L) */ ((/* 435L, 244L, 253L, 798L, 810L, 1188L) */ ((32) + (var_1_12))) != (var_1_1))) {
	}
	return /* 449L) */ ((
	/* 448L) */ ((
		/* 447L) */ ((
			/* 446L) */ ((
				/* 445L) */ ((
					/* 444L) */ ((
						/* 303L, 38L, 313L, 336L, 867L, 1056L, 90L) */ ((
							/* 304L, 8L, 16L, 314L, 337L, 852L, 1057L, 75L) */ ((
								/* 305L, 6L, 17L, 315L, 338L, 849L, 1058L, 72L) */ ((
									/* 306L, 4L, 18L, 316L, 339L, 846L, 1059L, 69L) */ ((
										var_1_2
									) - (
										var_1_3
									))
								) * (
									last_1_var_1_24
								))
							) < (
								last_1_var_1_24
							))
						) ? (
							/* 313L, 32L, 321L, 344L, 862L, 1066L, 85L) */ ((
								var_1_1
							) == (
								/* 313L, 32L, 321L, 344L, 862L, 1066L, 85L) */ ((signed short int) (
									/* 316L, 31L, 324L, 347L, 861L, 1069L, 84L) */ (min (
										/* 316L, 31L, 324L, 347L, 861L, 1069L, 84L) */ (
											-8
										) , (
											/* 318L, 30L, 326L, 349L, 860L, 1071L, 83L) */ ((
												var_1_6
											) + (
												/* 320L, 29L, 328L, 351L, 859L, 1073L, 82L) */ (min (
													/* 320L, 29L, 328L, 351L, 859L, 1073L, 82L) */ (
														var_1_7
													) , (
														var_1_8
													)
												))
											))
										)
									))
								))
							))
						) : (
							/* 323L, 36L, 331L, 354L, 866L, 1076L, 89L) */ ((
								var_1_1
							) == (
								/* 323L, 36L, 331L, 354L, 866L, 1076L, 89L) */ ((signed short int) (
									var_1_6
								))
							))
						))
					) && (
						/* 328L, 65L, 393L, 410L, 1081L) */ ((
							/* 329L, 45L, 49L, 394L, 411L, 1082L) */ ((
								var_1_8
							) >= (
								var_1_7
							))
						) ? (
							/* 332L, 57L, 397L, 414L, 1085L) */ ((
								var_1_9
							) == (
								/* 332L, 57L, 397L, 414L, 1085L) */ ((signed short int) (
									/* 335L, 56L, 400L, 417L, 1088L) */ ((
										-256
									) + (
										var_1_6
									))
								))
							))
						) : (
							/* 338L, 63L, 403L, 420L, 1091L) */ ((
								var_1_9
							) == (
								/* 338L, 63L, 403L, 420L, 1091L) */ ((signed short int) (
									/* 341L, 62L, 406L, 423L, 1094L) */ ((
										var_1_7
									) + (
										var_1_6
									))
								))
							))
						))
					))
				) && (
					/* 345L, 104L, 467L, 487L, 909L, 1098L, 40L) */ ((
						var_1_11
					) ? (
						/* 347L, 78L, 469L, 489L, 896L, 1100L, 27L) */ ((
							var_1_10
						) == (
							/* 347L, 78L, 469L, 489L, 896L, 1100L, 27L) */ ((unsigned char) (
								/* 350L, 77L, 472L, 492L, 895L, 1103L, 26L) */ (min (
									/* 350L, 77L, 472L, 492L, 895L, 1103L, 26L) */ (
										0
									) , (
										var_1_12
									)
								))
							))
						))
					) : (
						/* 353L, 102L, 475L, 495L, 908L, 1106L, 39L) */ ((
							/* 354L, 84L, 91L, 476L, 496L, 903L, 1107L, 34L) */ (! (
								/* 355L, 83L, 92L, 477L, 497L, 902L, 1108L, 33L) */ ((
									last_1_var_1_19
								) > (
									/* 358L, 82L, 94L, 479L, 499L, 901L, 1111L, 32L) */ ((
										255.9
									) / (
										var_1_13
									))
								))
							))
						) ? (
							/* 361L, 100L, 482L, 502L, 907L, 1114L, 38L) */ ((
								var_1_10
							) == (
								/* 361L, 100L, 482L, 502L, 907L, 1114L, 38L) */ ((unsigned char) (
									var_1_12
								))
							))
						) : (
							1
						))
					))
				))
			) && (
				/* 368L, 151L, 553L, 575L, 1121L) */ ((
					/* 369L, 110L, 113L, 554L, 576L, 1122L) */ (! (
						var_1_11
					))
				) ? (
					/* 371L, 149L, 556L, 578L, 1124L) */ ((
						/* 372L, 121L, 129L, 557L, 579L, 1125L) */ ((
							/* 373L, 119L, 130L, 558L, 580L, 1126L) */ ((
								/* 374L, 117L, 131L, 559L, 581L, 1127L) */ ((
									var_1_15
								) - (
									var_1_16
								))
							) - (
								var_1_17
							))
						) <= (
							var_1_13
						))
					) ? (
						/* 379L, 139L, 564L, 586L, 1132L) */ ((
							var_1_14
						) == (
							/* 379L, 139L, 564L, 586L, 1132L) */ ((unsigned short int) (
								var_1_10
							))
						))
					) : (
						/* 383L, 147L, 568L, 590L, 1136L) */ ((
							var_1_14
						) == (
							/* 383L, 147L, 568L, 590L, 1136L) */ ((unsigned short int) (
								128
							))
						))
					))
				) : (
					1
				))
			))
		) && (
			/* 391L, 186L, 630L, 646L, 1144L) */ ((
				/* 392L, 166L, 174L, 631L, 647L, 1145L) */ ((
					/* 393L, 164L, 175L, 632L, 648L, 1146L) */ ((
						2935136887u
					) - (
						/* 395L, 163L, 177L, 634L, 650L, 1148L) */ ((
							var_1_12
						) + (
							var_1_10
						))
					))
				) <= (
					var_1_14
				))
			) ? (
				/* 399L, 184L, 638L, 654L, 1152L) */ ((
					var_1_18
				) == (
					/* 399L, 184L, 638L, 654L, 1152L) */ ((signed char) (
						32
					))
				))
			) : (
				1
			))
		))
	) && (
		/* 407L, 231L, 718L, 746L, 1160L) */ ((
			/* 408L, 201L, 207L, 719L, 747L, 1161L) */ ((
				var_1_12
			) < (
				/* 410L, 200L, 209L, 721L, 749L, 1163L) */ ((
					1
				) + (
					var_1_14
				))
			))
		) ? (
			/* 413L, 223L, 724L, 752L, 1166L) */ ((
				var_1_19
			) == (
				/* 413L, 223L, 724L, 752L, 1166L) */ ((double) (
					/* 416L, 222L, 727L, 755L, 1169L) */ ((
						var_1_20
					) + (
						/* 418L, 221L, 729L, 757L, 1171L) */ (max (
							/* 418L, 221L, 729L, 757L, 1171L) */ (
								/* 419L, 217L, 730L, 758L, 1172L) */ ((
									199.5
								) + (
									var_1_21
								))
							) , (
								/* 422L, 220L, 733L, 761L, 1175L) */ (max (
									/* 422L, 220L, 733L, 761L, 1175L) */ (
										var_1_22
									) , (
										var_1_23
									)
								))
							)
						))
					))
				))
			))
		) : (
			/* 425L, 229L, 736L, 764L, 1178L) */ ((
				var_1_19
			) == (
				/* 425L, 229L, 736L, 764L, 1178L) */ ((double) (
					/* 428L, 228L, 739L, 767L, 1181L) */ ((
						var_1_22
					) + (
						var_1_20
					))
				))
			))
		))
	))
) && (
	/* 433L, 262L, 796L, 808L, 1186L) */ ((
		/* 434L, 246L, 252L, 797L, 809L, 1187L) */ ((
			/* 435L, 244L, 253L, 798L, 810L, 1188L) */ ((
				32
			) + (
				var_1_12
			))
		) != (
			var_1_1
		))
	) ? (
		/* 439L, 260L, 802L, 814L, 1192L) */ ((
			var_1_24
		) == (
			/* 439L, 260L, 802L, 814L, 1192L) */ ((double) (
				var_1_21
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
