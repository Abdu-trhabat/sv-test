// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2025 Jana Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch92Filler_PE_CN.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 100;
float var_1_4 = 15.4;
float var_1_5 = 8.35;
unsigned short int var_1_8 = 10;
unsigned short int var_1_9 = 0;
unsigned short int var_1_10 = 53946;
unsigned short int var_1_11 = 1;
unsigned long int var_1_12 = 8;
signed short int var_1_13 = 8;
unsigned long int var_1_14 = 10000;
float var_1_15 = 255.5;
signed short int var_1_16 = -100;
signed short int var_1_17 = 10000;
signed short int var_1_18 = 500;
signed short int var_1_19 = 10000;
signed short int var_1_20 = 10;
unsigned char var_1_21 = 1;
unsigned char var_1_22 = 0;
unsigned long int var_1_23 = 128;
signed long int var_1_24 = -200;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 4;
signed short int var_1_27 = 128;
signed short int var_1_28 = 128;
unsigned char var_1_29 = 0;
unsigned char var_1_30 = 5;
unsigned char var_1_31 = 1;
unsigned char var_1_32 = 1;
unsigned long int var_1_33 = 25;
unsigned char var_1_34 = 5;
unsigned long int var_1_35 = 2897958869;
unsigned char var_1_36 = 0;
unsigned char var_1_37 = 16;
unsigned char var_1_38 = 128;
signed char var_1_39 = 32;
signed char var_1_40 = 5;
double var_1_41 = 0.25;
double var_1_42 = 5.75;
signed long int var_1_43 = -32;
unsigned char var_1_44 = 0;
unsigned char var_1_45 = 0;
unsigned char var_1_46 = 0;
unsigned char var_1_47 = 0;
float var_1_48 = 100.5;
unsigned char var_1_49 = 0;
unsigned long int last_1_var_1_12 = 8;
void initially(void) {
}
void step(void) {
                              if ( (( (( ((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)))) >> (var_1_13))) >= ( (((((last_1_var_1_12)) > ((var_1_9))) ? ((last_1_var_1_12)) : ((var_1_9))))))) {
                               var_1_12 = (
   var_1_8
  );
 }
                               var_1_23 = (
  var_1_13
 );
                                var_1_24 = (
  var_1_8
 );
                                var_1_25 = (
  var_1_22
 );
 unsigned char stepLocal_2 = ((1.00000000000005E13f) == (var_1_15));
                               if ( ((stepLocal_2) || (var_1_25))) {
                                if ( ((var_1_4) > ( (((((var_1_5)) > ((var_1_15))) ? ((var_1_5)) : ((var_1_15))))))) {
                                 var_1_21 = (
    var_1_22
   );
  } else {
                                 var_1_21 = (
    1
   );
  }
 } else {
                                var_1_21 = (
   0
  );
 }
 unsigned char stepLocal_0 = ((var_1_4) >= (var_1_5));
                              if ( (( ((var_1_12) == (var_1_23))) && (stepLocal_0))) {
                               if (var_1_21) {
                                if (var_1_21) {
                                 var_1_1 = (
                                  ((((( var_1_8 )) < (( var_1_9 ))) ? (( var_1_8 )) : (( var_1_9 ))))
    );
   } else {
                                 var_1_1 = (
                                  ((((( var_1_9 )) > (( var_1_8 ))) ? (( var_1_9 )) : (( var_1_8 ))))
    );
   }
  } else {
                                var_1_1 = (
                                 ((
                                  ((((( 46167 )) > (( var_1_10 ))) ? (( 46167 )) : (( var_1_10 ))))
    ) - (
     var_1_11
    ))
   );
  }
 } else {
                               var_1_1 = (
   var_1_10
  );
 }
 unsigned short int stepLocal_1 = var_1_11;
                               if ( ((var_1_13) >= (stepLocal_1))) {
                                var_1_14 = (
                                 ((
    var_1_13
   ) + (
    var_1_11
   ))
  );
 } else {
                                if ( ((var_1_5) != ( ((var_1_4) / (var_1_15))))) {
                                 if (var_1_21) {
                                  var_1_14 = (
     var_1_11
    );
   } else {
                                  var_1_14 = (
     var_1_10
    );
   }
  } else {
                                 var_1_14 = (
    var_1_11
   );
  }
 }
                               if (var_1_21) {
                                var_1_16 = (
                                 ((
    var_1_13
   ) - (
                                  ((
                                   ((
      var_1_17
     ) - (
      var_1_18
     ))
    ) + (
                                   ((
      var_1_19
     ) - (
      var_1_20
     ))
    ))
   ))
  );
 } else {
                                var_1_16 = (
   var_1_18
  );
 }
            if ( (( ((var_1_27) + (var_1_28))) > (16))) {
             var_1_26 = (
              ((
               ((
     var_1_29
    ) + (
     2
    ))
   ) + (
    var_1_30
   ))
  );
 } else {
             if ( (( (~ (var_1_28))) <= (var_1_27))) {
              var_1_26 = (
    var_1_30
   );
  } else {
              var_1_26 = (
    var_1_29
   );
  }
 }
            var_1_31 = (
  var_1_32
 );
            if ( ((var_1_30) > ( ((var_1_29) % (var_1_34))))) {
             var_1_33 = (
              ((((( var_1_34 )) < (( (( var_1_35 ) - ( var_1_26 )) ))) ? (( var_1_34 )) : (( (( var_1_35 ) - ( var_1_26 )) ))))
  );
 } else {
             var_1_33 = (
   var_1_30
  );
 }
             if ( (( (( ((var_1_37) ^ (var_1_29))) & (var_1_38))) < ( (~ (var_1_27))))) {
              var_1_36 = (
   var_1_32
  );
 }
             if ( ((var_1_35) > (var_1_26))) {
              var_1_39 = (
               ((
    -16
   ) + (
    var_1_40
   ))
  );
 }
             if ( ((var_1_39) >= (var_1_29))) {
              if ( ((var_1_39) > ( (( (((((var_1_37)) < ((-64))) ? ((var_1_37)) : ((-64))))) | (var_1_28))))) {
               var_1_41 = (
                ((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42)))
   );
  }
 }
             if ( (( (( ((var_1_37) - (var_1_30))) > (var_1_39))) && (var_1_32))) {
              var_1_43 = (
               ((((( var_1_28 )) < (( 64 ))) ? (( var_1_28 )) : (( 64 ))))
  );
 }
             if (var_1_32) {
              var_1_44 = (
               ((
    var_1_45
   ) || (
                ((
     var_1_46
    ) || (
                 (! (
      var_1_47
     ))
    ))
   ))
  );
 }
             var_1_48 = (
  var_1_42
 );
             var_1_49 = (
  var_1_45
 );
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= -922337.2036854776000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 65534);
 var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 65534);
 var_1_10 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_10 >= 32767);
 assume_abort_if_not(var_1_10 <= 65534);
 var_1_11 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 32767);
 var_1_13 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_13 >= 1);
 assume_abort_if_not(var_1_13 <= 30);
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= -922337.2036854776000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
 assume_abort_if_not(var_1_15 != 0.0F);
 var_1_17 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_17 >= 8191);
 assume_abort_if_not(var_1_17 <= 16383);
 var_1_18 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 8191);
 var_1_19 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_19 >= 8191);
 assume_abort_if_not(var_1_19 <= 16383);
 var_1_20 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 8191);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 0);
 var_1_27 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_27 >= -32768);
 assume_abort_if_not(var_1_27 <= 32767);
 var_1_28 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_28 >= -32768);
 assume_abort_if_not(var_1_28 <= 32767);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 64);
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 127);
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 1);
 assume_abort_if_not(var_1_32 <= 1);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 255);
 assume_abort_if_not(var_1_34 != 0);
 var_1_35 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_35 >= 2147483647);
 assume_abort_if_not(var_1_35 <= 4294967294);
 var_1_37 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 255);
 var_1_38 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_38 >= 0);
 assume_abort_if_not(var_1_38 <= 255);
 var_1_40 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_40 >= -63);
 assume_abort_if_not(var_1_40 <= 63);
 var_1_42 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_42 >= -922337.2036854766000e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854766000e+12F && var_1_42 >= 1.0e-20F ));
 var_1_45 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_45 >= 0);
 assume_abort_if_not(var_1_45 <= 0);
 var_1_46 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_46 >= 0);
 assume_abort_if_not(var_1_46 <= 0);
 var_1_47 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_47 >= 1);
 assume_abort_if_not(var_1_47 <= 1);
}
void updateLastVariables(void) {
 last_1_var_1_12 = var_1_12;
}
int property(void) {
 if ( (( ((var_1_12) == (var_1_23))) && ( ((var_1_4) >= (var_1_5))))) {
  if (var_1_21) {
   if (var_1_21) {
   } else {
   }
  } else {
  }
 } else {
 }
 if ( (( (( ((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)))) >> (var_1_13))) >= ( (((((last_1_var_1_12)) > ((var_1_9))) ? ((last_1_var_1_12)) : ((var_1_9))))))) {
 }
 if ( ((var_1_13) >= (var_1_11))) {
 } else {
  if ( ((var_1_5) != ( ((var_1_4) / (var_1_15))))) {
   if (var_1_21) {
   } else {
   }
  } else {
  }
 }
 if (var_1_21) {
 } else {
 }
 if ( (( ((1.00000000000005E13f) == (var_1_15))) || (var_1_25))) {
  if ( ((var_1_4) > ( (((((var_1_5)) > ((var_1_15))) ? ((var_1_5)) : ((var_1_15))))))) {
  } else {
  }
 } else {
 }
 return ((
             ((
              ((
               ((
                ((
                 ((
                  ((
                                           ((
                                                ((
                                                 ((
          var_1_12
         ) == (
          var_1_23
         ))
        ) && (
                                                 ((
          var_1_4
         ) >= (
          var_1_5
         ))
        ))
       ) ? (
                                            ((
         var_1_21
        ) ? (
                                             ((
          var_1_21
         ) ? (
                                              ((
           var_1_1
          ) == (
                                               ((unsigned short int) (
                                                ((((( var_1_8 )) < (( var_1_9 ))) ? (( var_1_8 )) : (( var_1_9 ))))
           ))
          ))
         ) : (
                                              ((
           var_1_1
          ) == (
                                               ((unsigned short int) (
                                                ((((( var_1_9 )) > (( var_1_8 ))) ? (( var_1_9 )) : (( var_1_8 ))))
           ))
          ))
         ))
        ) : (
                                             ((
          var_1_1
         ) == (
                                              ((unsigned short int) (
                                               ((
                                                ((((( 46167 )) > (( var_1_10 ))) ? (( 46167 )) : (( var_1_10 ))))
           ) - (
            var_1_11
           ))
          ))
         ))
        ))
       ) : (
                                            ((
         var_1_1
        ) == (
                                             ((unsigned short int) (
          var_1_10
         ))
        ))
       ))
      ) && (
                                           ((
                                                 ((
                                                  ((
                                                   ((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)))
         ) >> (
          var_1_13
         ))
        ) >= (
                                                  ((((( last_1_var_1_12 )) > (( var_1_9 ))) ? (( last_1_var_1_12 )) : (( var_1_9 ))))
        ))
       ) ? (
                                            ((
         var_1_12
        ) == (
                                             ((unsigned long int) (
          var_1_8
         ))
        ))
       ) : (
        1
       ))
      ))
     ) && (
                                           ((
                                                  ((
        var_1_13
       ) >= (
        var_1_11
       ))
      ) ? (
                                            ((
        var_1_14
       ) == (
                                             ((unsigned long int) (
                                              ((
          var_1_13
         ) + (
          var_1_11
         ))
        ))
       ))
      ) : (
                                            ((
                                                   ((
         var_1_5
        ) != (
                                                    ((
          var_1_4
         ) / (
          var_1_15
         ))
        ))
       ) ? (
                                             ((
         var_1_21
        ) ? (
                                              ((
          var_1_14
         ) == (
                                               ((unsigned long int) (
           var_1_11
          ))
         ))
        ) : (
                                              ((
          var_1_14
         ) == (
                                               ((unsigned long int) (
           var_1_10
          ))
         ))
        ))
       ) : (
                                             ((
         var_1_14
        ) == (
                                              ((unsigned long int) (
          var_1_11
         ))
        ))
       ))
      ))
     ))
    ) && (
                                          ((
      var_1_21
     ) ? (
                                           ((
       var_1_16
      ) == (
                                            ((signed short int) (
                                             ((
         var_1_13
        ) - (
                                              ((
                                               ((
           var_1_17
          ) - (
           var_1_18
          ))
         ) + (
                                               ((
           var_1_19
          ) - (
           var_1_20
          ))
         ))
        ))
       ))
      ))
     ) : (
                                           ((
       var_1_16
      ) == (
                                            ((signed short int) (
        var_1_18
       ))
      ))
     ))
    ))
   ) && (
                                         ((
                                                ((
                                                 ((
       1.00000000000005E13f
      ) == (
       var_1_15
      ))
     ) || (
      var_1_25
     ))
    ) ? (
                                          ((
                                                 ((
       var_1_4
      ) > (
                                                  ((((( var_1_5 )) > (( var_1_15 ))) ? (( var_1_5 )) : (( var_1_15 ))))
      ))
     ) ? (
                                           ((
       var_1_21
      ) == (
                                            ((unsigned char) (
        var_1_22
       ))
      ))
     ) : (
                                           ((
       var_1_21
      ) == (
                                            ((unsigned char) (
        1
       ))
      ))
     ))
    ) : (
                                          ((
      var_1_21
     ) == (
                                           ((unsigned char) (
       0
      ))
     ))
    ))
   ))
  ) && (
                                        ((
    var_1_23
   ) == (
                                         ((unsigned long int) (
     var_1_13
    ))
   ))
  ))
 ) && (
                                       ((
   var_1_24
  ) == (
                                        ((signed long int) (
    var_1_8
   ))
  ))
 ))
) && (
                                      ((
  var_1_25
 ) == (
                                       ((unsigned char) (
   var_1_22
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
