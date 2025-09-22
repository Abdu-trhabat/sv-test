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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch124Filler_PS_CN.c", 13, "reach_error"); }
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
signed short int var_1_1 = 8;
signed long int var_1_2 = -4;
signed long int var_1_3 = 2;
signed long int var_1_4 = 16;
signed long int var_1_5 = -16;
signed long int var_1_6 = 8;
signed long int var_1_7 = 128;
signed long int var_1_8 = 16;
signed short int var_1_9 = 2;
signed short int var_1_10 = 10;
signed short int var_1_12 = 128;
signed short int var_1_13 = 256;
signed short int var_1_14 = -10;
signed long int var_1_15 = 16;
signed char var_1_16 = -16;
signed char var_1_17 = 32;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 0;
unsigned char var_1_21 = 0;
signed short int var_1_22 = 0;
signed short int var_1_23 = 10;
signed short int var_1_24 = 32;
unsigned long int var_1_25 = 200;
unsigned long int var_1_26 = 32;
unsigned long int var_1_27 = 0;
unsigned short int var_1_28 = 2;
double var_1_29 = 10.35;
unsigned char var_1_30 = 1;
double var_1_31 = 3.75;
unsigned short int var_1_32 = 2;
unsigned short int var_1_33 = 50;
signed long int var_1_34 = 100000;
unsigned char var_1_35 = 1;
signed long int var_1_36 = 16;
unsigned long int var_1_37 = 10;
unsigned long int var_1_38 = 0;
double var_1_39 = 0.3;
double var_1_40 = 4.5;
unsigned long int var_1_41 = 0;
unsigned char var_1_42 = 64;
unsigned char var_1_43 = 64;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_10 = 10;
signed long int last_1_var_1_15 = 16;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	/* 50L) */ var_1_25 = (
		/* 49L) */ ((
			16u
		) + (
			/* 48L) */ (abs (
				/* 47L) */ ((
					var_1_26
				) + (
					var_1_27
				))
			))
		))
	);


	// From: CodeObject2
	/* 84L) */ if (/* 58L, 57L) */ ((var_1_25) <= (var_1_26))) {
		/* 82L) */ if (/* 67L, 66L) */ ((-25) <= (var_1_25))) {
			/* 77L) */ var_1_28 = (
				/* 76L) */ (abs (
					32
				))
			);
		} else {
			/* 81L) */ var_1_28 = (
				50
			);
		}
	}


	// From: CodeObject3
	/* 127L) */ if (var_1_30) {
		/* 125L) */ if (/* 96L, 95L) */ ((var_1_26) <= (/* 98L, 94L) */ (max (/* 98L, 94L) */ (var_1_25) , (var_1_28)))))) {
			/* 119L) */ if (/* 109L, 108L) */ ((var_1_25) <= (var_1_27))) {
				/* 118L) */ var_1_29 = (
					var_1_31
				);
			}
		} else {
			/* 124L) */ var_1_29 = (
				var_1_31
			);
		}
	}


	// From: CodeObject4
	/* 169L) */ if (/* 137L, 136L) */ ((/* 138L, 134L) */ (- (var_1_29))) == (var_1_31))) {
		/* 149L) */ var_1_32 = (
			/* 148L) */ (abs (
				var_1_33
			))
		);
	} else {
		/* 167L) */ if (/* 154L, 153L) */ ((/* 155L, 151L) */ (abs (128))) >= (var_1_33))) {
			/* 166L) */ var_1_32 = (
				/* 165L) */ (abs (
					var_1_33
				))
			);
		}
	}


	// From: CodeObject5
	/* 229L) */ if (var_1_30) {
		/* 227L) */ if (var_1_35) {
			/* 184L) */ var_1_34 = (
				/* 183L) */ (max (
					/* 183L) */ (
						var_1_26
					) , (
						var_1_32
					)
				))
			);
		} else {
			/* 225L) */ if (/* 201L, 200L) */ ((/* 202L, 196L) */ ((/* 203L, 192L) */ (abs (var_1_26))) - (/* 205L, 195L) */ (max (/* 205L, 195L) */ (var_1_27) , (var_1_32)))))) > (/* 208L, 199L) */ ((5u) % (var_1_37))))) {
				/* 224L) */ var_1_34 = (
					var_1_36
				);
			}
		}
	}


	// From: CodeObject6
	/* 263L) */ if (/* 240L, 239L) */ ((/* 241L, 237L) */ ((/* 242L, 235L) */ ((var_1_39) - (var_1_40))) + (var_1_31))) >= (var_1_29))) {
		/* 262L) */ var_1_38 = (
			/* 261L) */ (abs (
				/* 260L) */ ((
					/* 258L) */ ((
						3426058817u
					) - (
						var_1_27
					))
				) - (
					var_1_28
				))
			))
		);
	}


	// From: CodeObject7
	/* 272L) */ var_1_41 = (
		var_1_33
	);


	// From: CodeObject8
	/* 280L) */ var_1_42 = (
		var_1_43
	);


	// From: Req6Batch124Filler_PS_CN
	signed long int stepLocal_3 = last_1_var_1_10;
	/* 19L, 292L, 848L, 864L, 1036L, 1182L) */ if (/* 9L, 272L, 273L, 849L, 865L, 1026L, 1172L) */ ((stepLocal_3) == (/* 8L, 271L, 275L, 851L, 867L, 1025L, 1171L) */ ((last_1_var_1_15) ^ (var_1_4))))) {
		/* 18L, 291L, 854L, 870L, 1035L, 1181L) */ var_1_18 = (
			/* 17L, 290L, 857L, 873L, 1034L, 1180L) */ ((
				/* 15L, 288L, 858L, 874L, 1032L, 1178L) */ (! (
					/* 14L, 287L, 859L, 875L, 1031L, 1177L) */ ((
						var_1_19
					) || (
						var_1_20
					))
				))
			) && (
				var_1_21
			))
		);
	}


	// From: Req7Batch124Filler_PS_CN
	/* 1186L, 328L, 912L, 939L) */ if (var_1_18) {
		/* 1188L, 310L, 914L, 941L) */ var_1_22 = (
			/* 1191L, 309L, 917L, 944L) */ ((
				var_1_12
			) - (
				/* 1193L, 308L, 919L, 946L) */ ((
					var_1_23
				) + (
					/* 1195L, 307L, 921L, 948L) */ ((
						8
					) + (
						var_1_24
					))
				))
			))
		);
	} else {
		/* 1198L, 326L, 924L, 951L) */ if (var_1_18) {
			/* 1200L, 321L, 926L, 953L) */ var_1_22 = (
				/* 1203L, 320L, 929L, 956L) */ ((
					/* 1204L, 318L, 930L, 957L) */ ((
						var_1_23
					) + (
						4
					))
				) - (
					var_1_24
				))
			);
		} else {
			/* 1208L, 325L, 934L, 961L) */ var_1_22 = (
				var_1_23
			);
		}
	}


	// From: Req2Batch124Filler_PS_CN
	/* 1113L, 190L, 609L, 623L) */ if (/* 1114L, 172L, 173L, 610L, 624L) */ ((var_1_22) <= (var_1_3))) {
		/* 1117L, 188L, 613L, 627L) */ if (var_1_18) {
			/* 1119L, 187L, 615L, 629L) */ var_1_10 = (
				/* 1122L, 186L, 618L, 632L) */ ((
					var_1_12
				) - (
					var_1_13
				))
			);
		}
	}


	// From: Req4Batch124Filler_PS_CN
	/* 1141L, 237L, 718L, 731L) */ var_1_15 = (
		/* 1144L, 236L, 721L, 734L) */ (max (
			/* 1144L, 236L, 721L, 734L) */ (
				var_1_22
			) , (
				/* 1146L, 235L, 723L, 736L) */ (min (
					/* 1146L, 235L, 723L, 736L) */ (
						var_1_12
					) , (
						/* 1148L, 234L, 725L, 738L) */ ((
							var_1_13
						) - (
							1
						))
					)
				))
			)
		))
	);


	// From: Req1Batch124Filler_PS_CN
	signed long int stepLocal_2 = /* 1065L, 37L, 47L, 441L, 487L) */ ((/* 1066L, 35L, 48L, 442L, 488L) */ (max (/* 1066L, 35L, 48L, 442L, 488L) */ (var_1_6) , (var_1_7)))) - (var_1_8));
	signed long int stepLocal_1 = /* 1060L, 70L, 75L, 450L, 496L) */ ((-10) * (var_1_5));
	signed long int stepLocal_0 = -32;
	/* 1106L, 164L, 424L, 470L) */ if (/* 1076L, 8L, 9L, 425L, 471L) */ ((stepLocal_0) >= (/* 1075L, 7L, 11L, 427L, 473L) */ ((/* 1073L, 5L, 12L, 428L, 474L) */ ((var_1_2) / (var_1_3))) ^ (var_1_4))))) {
		/* 1101L, 158L, 432L, 478L) */ if (/* 1084L, 38L, 39L, 433L, 479L) */ ((/* 1083L, 29L, 40L, 434L, 480L) */ ((/* 1079L, 25L, 41L, 435L, 481L) */ ((var_1_4) * (var_1_3))) + (/* 1082L, 28L, 44L, 438L, 484L) */ ((var_1_2) + (var_1_5))))) >= (stepLocal_2))) {
			/* 1096L, 152L, 446L, 492L) */ if (/* 1087L, 71L, 72L, 447L, 493L) */ ((/* 1086L, 66L, 73L, 448L, 494L) */ (- (var_1_2))) > (stepLocal_1))) {
				/* 1091L, 87L, 453L, 499L) */ var_1_1 = (
					var_1_9
				);
			} else {
				/* 1095L, 151L, 457L, 503L) */ var_1_1 = (
					-16
				);
			}
		} else {
			/* 1100L, 157L, 461L, 507L) */ var_1_1 = (
				var_1_9
			);
		}
	} else {
		/* 1105L, 163L, 465L, 511L) */ var_1_1 = (
			var_1_9
		);
	}


	// From: Req3Batch124Filler_PS_CN
	/* 1127L, 220L, 665L, 678L) */ if (/* 1128L, 203L, 204L, 666L, 679L) */ ((/* 1129L, 199L, 205L, 667L, 680L) */ (~ (var_1_7))) != (/* 1131L, 202L, 207L, 669L, 682L) */ ((var_1_15) ^ (var_1_3))))) {
		/* 1134L, 219L, 672L, 685L) */ var_1_14 = (
			var_1_9
		);
	}


	// From: Req5Batch124Filler_PS_CN
	/* 1159L, 249L, 775L, 787L) */ var_1_16 = (
		var_1_17
	);
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -2147483648);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483648);
	assume_abort_if_not(var_1_3 <= 2147483647);
	assume_abort_if_not(var_1_3 != 0);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483648);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -2147483648);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 2147483647);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 2147483647);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 2147483647);
	var_1_9 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_9 >= -32767);
	assume_abort_if_not(var_1_9 <= 32766);
	var_1_12 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_12 >= -1);
	assume_abort_if_not(var_1_12 <= 32766);
	var_1_13 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 32766);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= -127);
	assume_abort_if_not(var_1_17 <= 126);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 0);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 0);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 1);
	assume_abort_if_not(var_1_21 <= 1);
	var_1_23 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 16383);
	var_1_24 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 8191);
	var_1_26 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 1073741824);
	var_1_27 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 1073741823);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 1);
	var_1_31 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_31 >= -922337.2036854766000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854766000e+12F && var_1_31 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 65534);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 1);
	var_1_36 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_36 >= -1073741823);
	assume_abort_if_not(var_1_36 <= 1073741823);
	var_1_37 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 4294967295);
	assume_abort_if_not(var_1_37 != 0);
	var_1_39 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854776000e+12F && var_1_39 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854776000e+12F && var_1_40 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 254);
}



void updateLastVariables(void) {
	last_1_var_1_10 = var_1_10;
	last_1_var_1_15 = var_1_15;
}

int property(void) {
	if (/* 284L, 8L, 16L, 517L, 563L, 1214L) */ ((-32) >= (/* 286L, 7L, 18L, 519L, 565L, 1216L) */ ((/* 287L, 5L, 19L, 520L, 566L, 1217L) */ ((var_1_2) / (var_1_3))) ^ (var_1_4))))) {
		if (/* 292L, 38L, 52L, 525L, 571L, 1222L) */ ((/* 293L, 29L, 53L, 526L, 572L, 1223L) */ ((/* 294L, 25L, 54L, 527L, 573L, 1224L) */ ((var_1_4) * (var_1_3))) + (/* 297L, 28L, 57L, 530L, 576L, 1227L) */ ((var_1_2) + (var_1_5))))) >= (/* 300L, 37L, 60L, 533L, 579L, 1230L) */ ((/* 301L, 35L, 61L, 534L, 580L, 1231L) */ (max (/* 301L, 35L, 61L, 534L, 580L, 1231L) */ (var_1_6) , (var_1_7)))) - (var_1_8))))) {
			if (/* 306L, 71L, 78L, 539L, 585L, 1236L) */ ((/* 307L, 66L, 79L, 540L, 586L, 1237L) */ (- (var_1_2))) > (/* 309L, 70L, 81L, 542L, 588L, 1239L) */ ((-10) * (var_1_5))))) {
			} else {
			}
		} else {
		}
	} else {
	}
	if (/* 331L, 172L, 176L, 638L, 652L, 1261L) */ ((var_1_22) <= (var_1_3))) {
		if (var_1_18) {
		}
	}
	if (/* 345L, 203L, 210L, 692L, 705L, 1275L) */ ((/* 346L, 199L, 211L, 693L, 706L, 1276L) */ (~ (var_1_7))) != (/* 348L, 202L, 213L, 695L, 708L, 1278L) */ ((var_1_15) ^ (var_1_3))))) {
	}
	if (/* 382L, 272L, 278L, 881L, 897L, 1044L, 1312L, 28L) */ ((last_1_var_1_10) == (/* 385L, 271L, 280L, 883L, 899L, 1043L, 1315L, 27L) */ ((last_1_var_1_15) ^ (var_1_4))))) {
	}
	if (var_1_18) {
	} else {
		if (var_1_18) {
		} else {
		}
	}
	return /* 431L) */ ((
	/* 430L) */ ((
		/* 429L) */ ((
			/* 428L) */ ((
				/* 427L) */ ((
					/* 426L) */ ((
						/* 283L, 165L, 516L, 562L, 1213L) */ ((
							/* 284L, 8L, 16L, 517L, 563L, 1214L) */ ((
								-32
							) >= (
								/* 286L, 7L, 18L, 519L, 565L, 1216L) */ ((
									/* 287L, 5L, 19L, 520L, 566L, 1217L) */ ((
										var_1_2
									) / (
										var_1_3
									))
								) ^ (
									var_1_4
								))
							))
						) ? (
							/* 291L, 159L, 524L, 570L, 1221L) */ ((
								/* 292L, 38L, 52L, 525L, 571L, 1222L) */ ((
									/* 293L, 29L, 53L, 526L, 572L, 1223L) */ ((
										/* 294L, 25L, 54L, 527L, 573L, 1224L) */ ((
											var_1_4
										) * (
											var_1_3
										))
									) + (
										/* 297L, 28L, 57L, 530L, 576L, 1227L) */ ((
											var_1_2
										) + (
											var_1_5
										))
									))
								) >= (
									/* 300L, 37L, 60L, 533L, 579L, 1230L) */ ((
										/* 301L, 35L, 61L, 534L, 580L, 1231L) */ (max (
											/* 301L, 35L, 61L, 534L, 580L, 1231L) */ (
												var_1_6
											) , (
												var_1_7
											)
										))
									) - (
										var_1_8
									))
								))
							) ? (
								/* 305L, 153L, 538L, 584L, 1235L) */ ((
									/* 306L, 71L, 78L, 539L, 585L, 1236L) */ ((
										/* 307L, 66L, 79L, 540L, 586L, 1237L) */ (- (
											var_1_2
										))
									) > (
										/* 309L, 70L, 81L, 542L, 588L, 1239L) */ ((
											-10
										) * (
											var_1_5
										))
									))
								) ? (
									/* 312L, 87L, 545L, 591L, 1242L) */ ((
										var_1_1
									) == (
										/* 312L, 87L, 545L, 591L, 1242L) */ ((signed short int) (
											var_1_9
										))
									))
								) : (
									/* 316L, 151L, 549L, 595L, 1246L) */ ((
										var_1_1
									) == (
										/* 316L, 151L, 549L, 595L, 1246L) */ ((signed short int) (
											-16
										))
									))
								))
							) : (
								/* 320L, 157L, 553L, 599L, 1250L) */ ((
									var_1_1
								) == (
									/* 320L, 157L, 553L, 599L, 1250L) */ ((signed short int) (
										var_1_9
									))
								))
							))
						) : (
							/* 324L, 163L, 557L, 603L, 1254L) */ ((
								var_1_1
							) == (
								/* 324L, 163L, 557L, 603L, 1254L) */ ((signed short int) (
									var_1_9
								))
							))
						))
					) && (
						/* 330L, 191L, 637L, 651L, 1260L) */ ((
							/* 331L, 172L, 176L, 638L, 652L, 1261L) */ ((
								var_1_22
							) <= (
								var_1_3
							))
						) ? (
							/* 334L, 189L, 641L, 655L, 1264L) */ ((
								var_1_18
							) ? (
								/* 336L, 187L, 643L, 657L, 1266L) */ ((
									var_1_10
								) == (
									/* 336L, 187L, 643L, 657L, 1266L) */ ((signed short int) (
										/* 339L, 186L, 646L, 660L, 1269L) */ ((
											var_1_12
										) - (
											var_1_13
										))
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
					/* 344L, 221L, 691L, 704L, 1274L) */ ((
						/* 345L, 203L, 210L, 692L, 705L, 1275L) */ ((
							/* 346L, 199L, 211L, 693L, 706L, 1276L) */ (~ (
								var_1_7
							))
						) != (
							/* 348L, 202L, 213L, 695L, 708L, 1278L) */ ((
								var_1_15
							) ^ (
								var_1_3
							))
						))
					) ? (
						/* 351L, 219L, 698L, 711L, 1281L) */ ((
							var_1_14
						) == (
							/* 351L, 219L, 698L, 711L, 1281L) */ ((signed short int) (
								var_1_9
							))
						))
					) : (
						1
					))
				))
			) && (
				/* 358L, 237L, 744L, 757L, 1288L) */ ((
					var_1_15
				) == (
					/* 358L, 237L, 744L, 757L, 1288L) */ ((signed long int) (
						/* 361L, 236L, 747L, 760L, 1291L) */ (max (
							/* 361L, 236L, 747L, 760L, 1291L) */ (
								var_1_22
							) , (
								/* 363L, 235L, 749L, 762L, 1293L) */ (min (
									/* 363L, 235L, 749L, 762L, 1293L) */ (
										var_1_12
									) , (
										/* 365L, 234L, 751L, 764L, 1295L) */ ((
											var_1_13
										) - (
											1
										))
									)
								))
							)
						))
					))
				))
			))
		) && (
			/* 376L, 249L, 799L, 811L, 1306L) */ ((
				var_1_16
			) == (
				/* 376L, 249L, 799L, 811L, 1306L) */ ((signed char) (
					var_1_17
				))
			))
		))
	) && (
		/* 381L, 293L, 880L, 896L, 1054L, 1311L, 38L) */ ((
			/* 382L, 272L, 278L, 881L, 897L, 1044L, 1312L, 28L) */ ((
				last_1_var_1_10
			) == (
				/* 385L, 271L, 280L, 883L, 899L, 1043L, 1315L, 27L) */ ((
					last_1_var_1_15
				) ^ (
					var_1_4
				))
			))
		) ? (
			/* 389L, 291L, 886L, 902L, 1053L, 1319L, 37L) */ ((
				var_1_18
			) == (
				/* 389L, 291L, 886L, 902L, 1053L, 1319L, 37L) */ ((unsigned char) (
					/* 392L, 290L, 889L, 905L, 1052L, 1322L, 36L) */ ((
						/* 393L, 288L, 890L, 906L, 1050L, 1323L, 34L) */ (! (
							/* 394L, 287L, 891L, 907L, 1049L, 1324L, 33L) */ ((
								var_1_19
							) || (
								var_1_20
							))
						))
					) && (
						var_1_21
					))
				))
			))
		) : (
			1
		))
	))
) && (
	/* 399L, 329L, 966L, 993L, 1329L) */ ((
		var_1_18
	) ? (
		/* 401L, 310L, 968L, 995L, 1331L) */ ((
			var_1_22
		) == (
			/* 401L, 310L, 968L, 995L, 1331L) */ ((signed short int) (
				/* 404L, 309L, 971L, 998L, 1334L) */ ((
					var_1_12
				) - (
					/* 406L, 308L, 973L, 1000L, 1336L) */ ((
						var_1_23
					) + (
						/* 408L, 307L, 975L, 1002L, 1338L) */ ((
							8
						) + (
							var_1_24
						))
					))
				))
			))
		))
	) : (
		/* 411L, 327L, 978L, 1005L, 1341L) */ ((
			var_1_18
		) ? (
			/* 413L, 321L, 980L, 1007L, 1343L) */ ((
				var_1_22
			) == (
				/* 413L, 321L, 980L, 1007L, 1343L) */ ((signed short int) (
					/* 416L, 320L, 983L, 1010L, 1346L) */ ((
						/* 417L, 318L, 984L, 1011L, 1347L) */ ((
							var_1_23
						) + (
							4
						))
					) - (
						var_1_24
					))
				))
			))
		) : (
			/* 421L, 325L, 988L, 1015L, 1351L) */ ((
				var_1_22
			) == (
				/* 421L, 325L, 988L, 1015L, 1351L) */ ((signed short int) (
					var_1_23
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
