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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch157Filler_PR_CO.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = -256;
double var_1_2 = 3.75;
double var_1_3 = 0.6;
signed long int var_1_4 = 200;
signed long int var_1_5 = 100;
signed char var_1_6 = -4;
unsigned char var_1_7 = 1;
unsigned char var_1_8 = 1;
signed char var_1_9 = 1;
unsigned char var_1_10 = 8;
double var_1_11 = 10.925;
float var_1_12 = 25.25;
signed short int var_1_13 = 64;
signed short int var_1_14 = 4;
signed char var_1_15 = -4;
signed char var_1_16 = -50;
signed char var_1_17 = 10;
signed char var_1_18 = 32;
signed char var_1_19 = 32;
signed char var_1_20 = 5;
signed long int var_1_21 = -8;
unsigned long int var_1_22 = 4;
signed short int var_1_23 = -2;
signed short int var_1_24 = -25;
signed short int var_1_25 = 128;
unsigned long int var_1_26 = 8;
unsigned long int var_1_27 = 8;
unsigned long int var_1_28 = 128;
unsigned long int var_1_29 = 1;
signed long int var_1_30 = 128;
float var_1_31 = 0.6;
float var_1_32 = 64.75;
float var_1_33 = 64.2;
signed long int var_1_34 = -16;
unsigned char var_1_35 = 0;
signed long int var_1_36 = 1166829650;
signed long int var_1_37 = 50;
unsigned short int var_1_38 = 128;
unsigned short int var_1_39 = 10;
unsigned short int var_1_40 = 50;
double var_1_41 = 99.8;
double var_1_42 = 0.75;
double var_1_43 = 16.4;
signed short int var_1_44 = -200;
signed short int var_1_45 = -256;
signed short int var_1_46 = -128;
unsigned short int var_1_47 = 32;
unsigned char var_1_48 = 10;
unsigned char var_1_49 = 1;
unsigned char var_1_50 = 5;
signed long int last_1_var_1_21 = -8;
void initially(void) {
}
void step(void) {
                              if ( ((var_1_2) < (var_1_3))) {
                               if ( ((var_1_3) <= (var_1_2))) {
                                var_1_1 = (
                                 ((
                                  ((((( 1 )) > (( var_1_4 ))) ? (( 1 )) : (( var_1_4 ))))
    ) - (
     var_1_5
    ))
   );
  } else {
                                var_1_1 = (
    var_1_4
   );
  }
 } else {
                               var_1_1 = (
   var_1_4
  );
 }
                   if ( (( (((((var_1_31)) > ((var_1_32))) ? ((var_1_31)) : ((var_1_32))))) <= ( (((((64.3f)) > ((var_1_33))) ? ((64.3f)) : ((var_1_33))))))) {
                    if ( (( ((var_1_23) & ( ((var_1_26) ^ (var_1_28))))) == (var_1_29))) {
                     var_1_30 = (
                      ((
                       ((((( var_1_24 )) < (( var_1_23 ))) ? (( var_1_24 )) : (( var_1_23 ))))
    ) + (
                       ((
      var_1_25
     ) + (
      -1
     ))
    ))
   );
  } else {
                     var_1_30 = (
                      ((((( var_1_23 )) > (( var_1_25 ))) ? (( var_1_23 )) : (( var_1_25 ))))
   );
  }
 }
                                if ( (( (( ((var_1_5) / (var_1_10))) < (var_1_1))) && (var_1_7))) {
                                 var_1_9 = (
   32
  );
 }
                                var_1_11 = (
  199.4
 );
                   if ( (! (var_1_35))) {
                    var_1_34 = (
                     ((
                      ((
     var_1_36
    ) - (
     256
    ))
   ) - (
    var_1_37
   ))
  );
 }
                   if ( ((var_1_31) < ( (((((var_1_33)) < ((var_1_32))) ? ((var_1_33)) : ((var_1_32))))))) {
                    var_1_38 = (
                     ((((( 50 )) > (( var_1_39 ))) ? (( 50 )) : (( var_1_39 ))))
  );
 } else {
                    var_1_38 = (
                     ((((( var_1_39 )) > (( var_1_40 ))) ? (( var_1_39 )) : (( var_1_40 ))))
  );
 }
                   var_1_50 = (
  var_1_49
 );
 unsigned char stepLocal_2 = (( ((var_1_5) * (var_1_14))) <= ( (~ (100000000))));
 signed long int stepLocal_1 = ((var_1_10) - (10));
                                if ( ((var_1_8) || (stepLocal_2))) {
                                 if ( ((var_1_14) >= (stepLocal_1))) {
                                  if ( (! (var_1_8))) {
                                   var_1_15 = (
     var_1_16
    );
   }
  }
 } else {
                                 var_1_15 = (
                                  ((
    var_1_17
   ) - (
                                   ((
                                    ((
      var_1_18
     ) + (
      var_1_19
     ))
    ) - (
     var_1_20
    ))
   ))
  );
 }
                 var_1_23 = (
  var_1_24
 );
                   var_1_48 = (
  var_1_49
 );
                                var_1_21 = (
  last_1_var_1_21
 );
                   if ( ((var_1_27) >= ( (( ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)))) % (var_1_36))))) {
                    var_1_44 = (
                     (((((( ((((( -10 )) > (( var_1_45 ))) ? (( -10 )) : (( var_1_45 )))) ) + ( var_1_46 ))) < 0 ) ? -((( ((((( -10 )) > (( var_1_45 ))) ? (( -10 )) : (( var_1_45 )))) ) + ( var_1_46 ))) : ((( ((((( -10 )) > (( var_1_45 ))) ? (( -10 )) : (( var_1_45 )))) ) + ( var_1_46 )))))
  );
 }
                                var_1_22 = (
  var_1_18
 );
                   var_1_41 = (
                    ((((( var_1_42 )) > (( var_1_43 ))) ? (( var_1_42 )) : (( var_1_43 ))))
 );
                              if ( ((32.5) >= (var_1_11))) {
                               if ( ((var_1_7) && (var_1_8))) {
                                var_1_6 = (
    -4
   );
  }
 }
                   var_1_47 = (
  16
 );
 unsigned char stepLocal_0 = (( ((var_1_11) * (var_1_3))) > (var_1_2));
                                if ( ((stepLocal_0) && ( ((var_1_10) != (var_1_21))))) {
                                 var_1_12 = (
   32.75f
  );
 }
                  var_1_25 = (
  var_1_24
 );
                  if ( (( ((4) * (var_1_13))) >= (var_1_24))) {
                   if ( ((var_1_13) >= ( ((var_1_24) + (var_1_13))))) {
                    var_1_26 = (
    var_1_27
   );
  }
 } else {
                   var_1_26 = (
                    ((
    var_1_28
   ) + (
    var_1_29
   ))
  );
 }
                                if ( (( (- (16.75))) <= (var_1_11))) {
                                 var_1_13 = (
                                  ((
    var_1_10
   ) - (
    var_1_14
   ))
  );
 } else {
                                 var_1_13 = (
                                  ((((( var_1_21 )) > (( var_1_10 ))) ? (( var_1_21 )) : (( var_1_10 ))))
  );
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -1);
 assume_abort_if_not(var_1_4 <= 2147483646);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 2147483646);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 1);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 255);
 assume_abort_if_not(var_1_10 != 0);
 var_1_14 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 32766);
 var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_16 >= -127);
 assume_abort_if_not(var_1_16 <= 126);
 var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_17 >= -1);
 assume_abort_if_not(var_1_17 <= 126);
 var_1_18 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_18 >= 31);
 assume_abort_if_not(var_1_18 <= 63);
 var_1_19 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_19 >= 32);
 assume_abort_if_not(var_1_19 <= 63);
 var_1_20 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 63);
 var_1_24 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_24 >= -32767);
 assume_abort_if_not(var_1_24 <= 32766);
 var_1_27 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 4294967294);
 var_1_28 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 2147483647);
 var_1_29 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 2147483647);
 var_1_31 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_31 >= -922337.2036854776000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854776000e+12F && var_1_31 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_32 >= -922337.2036854776000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854776000e+12F && var_1_32 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_33 >= -922337.2036854776000e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854776000e+12F && var_1_33 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 1);
 var_1_36 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_36 >= 1073741822);
 assume_abort_if_not(var_1_36 <= 2147483646);
 var_1_37 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 2147483646);
 var_1_39 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_39 >= 0);
 assume_abort_if_not(var_1_39 <= 65534);
 var_1_40 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 65534);
 var_1_42 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_42 >= -922337.2036854766000e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854766000e+12F && var_1_42 >= 1.0e-20F ));
 var_1_43 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_43 >= -922337.2036854766000e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854766000e+12F && var_1_43 >= 1.0e-20F ));
 var_1_45 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_45 >= -16383);
 assume_abort_if_not(var_1_45 <= 16383);
 var_1_46 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_46 >= -16383);
 assume_abort_if_not(var_1_46 <= 16383);
 var_1_49 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_49 >= 0);
 assume_abort_if_not(var_1_49 <= 254);
}
void updateLastVariables(void) {
 last_1_var_1_21 = var_1_21;
}
int property(void) {
 if ( ((var_1_2) < (var_1_3))) {
  if ( ((var_1_3) <= (var_1_2))) {
  } else {
  }
 } else {
 }
 if ( ((32.5) >= (var_1_11))) {
  if ( ((var_1_7) && (var_1_8))) {
  }
 }
 if ( (( (( ((var_1_5) / (var_1_10))) < (var_1_1))) && (var_1_7))) {
 }
 if ( (( (( ((var_1_11) * (var_1_3))) > (var_1_2))) && ( ((var_1_10) != (var_1_21))))) {
 }
 if ( (( (- (16.75))) <= (var_1_11))) {
 } else {
 }
 if ( ((var_1_8) || ( (( ((var_1_5) * (var_1_14))) <= ( (~ (100000000))))))) {
  if ( ((var_1_14) >= ( ((var_1_10) - (10))))) {
   if ( (! (var_1_8))) {
   }
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
          var_1_2
         ) < (
          var_1_3
         ))
        ) ? (
                                             ((
                                                   ((
           var_1_3
          ) <= (
           var_1_2
          ))
         ) ? (
                                              ((
           var_1_1
          ) == (
                                               ((signed long int) (
                                                ((
                                                 ((((( 1 )) > (( var_1_4 ))) ? (( 1 )) : (( var_1_4 ))))
            ) - (
             var_1_5
            ))
           ))
          ))
         ) : (
                                              ((
           var_1_1
          ) == (
                                               ((signed long int) (
            var_1_4
           ))
          ))
         ))
        ) : (
                                             ((
          var_1_1
         ) == (
                                              ((signed long int) (
           var_1_4
          ))
         ))
        ))
       ) && (
                                            ((
                                                  ((
          32.5
         ) >= (
          var_1_11
         ))
        ) ? (
                                             ((
                                                   ((
           var_1_7
          ) && (
           var_1_8
          ))
         ) ? (
                                              ((
           var_1_6
          ) == (
                                               ((signed char) (
            -4
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
                                            ((
                                                  ((
                                                   ((
                                                    ((
           var_1_5
          ) / (
           var_1_10
          ))
         ) < (
          var_1_1
         ))
        ) && (
         var_1_7
        ))
       ) ? (
                                             ((
         var_1_9
        ) == (
                                              ((signed char) (
          32
         ))
        ))
       ) : (
        1
       ))
      ))
     ) && (
                                           ((
       var_1_11
      ) == (
                                            ((double) (
        199.4
       ))
      ))
     ))
    ) && (
                                          ((
                                                 ((
                                                  ((
                                                   ((
         var_1_11
        ) * (
         var_1_3
        ))
       ) > (
        var_1_2
       ))
      ) && (
                                                  ((
        var_1_10
       ) != (
        var_1_21
       ))
      ))
     ) ? (
                                           ((
       var_1_12
      ) == (
                                            ((float) (
        32.75f
       ))
      ))
     ) : (
      1
     ))
    ))
   ) && (
                                         ((
                                                ((
                                                 (- (
       16.75
      ))
     ) <= (
      var_1_11
     ))
    ) ? (
                                          ((
      var_1_13
     ) == (
                                           ((signed short int) (
                                            ((
        var_1_10
       ) - (
        var_1_14
       ))
      ))
     ))
    ) : (
                                          ((
      var_1_13
     ) == (
                                           ((signed short int) (
                                            ((((( var_1_21 )) > (( var_1_10 ))) ? (( var_1_21 )) : (( var_1_10 ))))
      ))
     ))
    ))
   ))
  ) && (
                                        ((
                                               ((
     var_1_8
    ) || (
                                                ((
                                                 ((
       var_1_5
      ) * (
       var_1_14
      ))
     ) <= (
                                                 (~ (
       100000000
      ))
     ))
    ))
   ) ? (
                                         ((
                                                ((
      var_1_14
     ) >= (
                                                 ((
       var_1_10
      ) - (
       10
      ))
     ))
    ) ? (
                                          ((
                                                 (! (
       var_1_8
      ))
     ) ? (
                                           ((
       var_1_15
      ) == (
                                            ((signed char) (
        var_1_16
       ))
      ))
     ) : (
      1
     ))
    ) : (
     1
    ))
   ) : (
                                         ((
     var_1_15
    ) == (
                                          ((signed char) (
                                           ((
       var_1_17
      ) - (
                                            ((
                                             ((
         var_1_18
        ) + (
         var_1_19
        ))
       ) - (
        var_1_20
       ))
      ))
     ))
    ))
   ))
  ))
 ) && (
                                       ((
   var_1_21
  ) == (
                                        ((signed long int) (
    last_1_var_1_21
   ))
  ))
 ))
) && (
                                      ((
  var_1_22
 ) == (
                                       ((unsigned long int) (
   var_1_18
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
