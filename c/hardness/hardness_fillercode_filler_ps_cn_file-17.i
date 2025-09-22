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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch17Filler_PS_CN.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 25;
unsigned char var_1_2 = 25;
unsigned char var_1_3 = 0;
unsigned char var_1_4 = 0;
signed long int var_1_5 = 4;
unsigned char var_1_6 = 1;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 1;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 0;
double var_1_11 = 7.3;
double var_1_12 = 1.25;
double var_1_13 = 128.8;
signed char var_1_14 = -1;
signed char var_1_15 = 10;
signed short int var_1_16 = 8;
signed short int var_1_17 = 10;
unsigned long int var_1_18 = 128;
unsigned long int var_1_19 = 3963666122;
float var_1_20 = 15.875;
float var_1_21 = 4.2;
float var_1_22 = 5.5;
signed short int var_1_23 = -10;
unsigned long int var_1_24 = 50;
signed long int var_1_25 = 500;
unsigned long int var_1_26 = 16;
unsigned long int var_1_27 = 4;
unsigned char var_1_28 = 0;
signed short int var_1_29 = -25;
unsigned short int var_1_30 = 25;
unsigned short int var_1_31 = 32;
unsigned char var_1_32 = 10;
double var_1_33 = 31.95;
unsigned char var_1_34 = 32;
unsigned char var_1_35 = 64;
unsigned long int var_1_36 = 4;
unsigned long int var_1_37 = 2761773211;
unsigned short int var_1_38 = 50;
unsigned char var_1_39 = 128;
unsigned long int last_1_var_1_18 = 128;
void initially(void) {
}
void step(void) {
            var_1_20 = (
             ((((( var_1_21 )) < (( var_1_22 ))) ? (( var_1_21 )) : (( var_1_22 ))))
 );
             if ( ((128u) <= (var_1_24))) {
              if ( (( ((var_1_20) >= (var_1_21))) && ( (( ((var_1_24) * (var_1_25))) < ( (((((var_1_26)) < ((var_1_27))) ? ((var_1_26)) : ((var_1_27))))))))) {
               if ( ((var_1_25) > (var_1_24))) {
                var_1_23 = (
                 ((((4) < 0 ) ? -(4) : (4)))
    );
   } else {
                if (var_1_28) {
                 var_1_23 = (
      var_1_29
     );
    } else {
                 var_1_23 = (
      5
     );
    }
   }
  } else {
               var_1_23 = (
    var_1_29
   );
  }
 }
             var_1_30 = (
  var_1_31
 );
             if ( (( (( ((var_1_20) * (var_1_21))) / (var_1_33))) <= (var_1_22))) {
              if ( ((var_1_22) < (var_1_33))) {
               var_1_32 = (
                (((((((((( var_1_34 ) + ( var_1_35 ))) < 0 ) ? -((( var_1_34 ) + ( var_1_35 ))) : ((( var_1_34 ) + ( var_1_35 )))))) < 0 ) ? -((((((( var_1_34 ) + ( var_1_35 ))) < 0 ) ? -((( var_1_34 ) + ( var_1_35 ))) : ((( var_1_34 ) + ( var_1_35 )))))) : ((((((( var_1_34 ) + ( var_1_35 ))) < 0 ) ? -((( var_1_34 ) + ( var_1_35 ))) : ((( var_1_34 ) + ( var_1_35 ))))))))
   );
  } else {
               if (var_1_28) {
                var_1_32 = (
                 ((((( ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))) )) > (( ((((( var_1_34 )) < (( 1 ))) ? (( var_1_34 )) : (( 1 )))) ))) ? (( ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))) )) : (( ((((( var_1_34 )) < (( 1 ))) ? (( var_1_34 )) : (( 1 )))) ))))
    );
   }
  }
 } else {
              var_1_32 = (
   var_1_35
  );
 }
             if (var_1_28) {
              if ( ((var_1_22) <= (var_1_20))) {
               if ( ((var_1_27) > (var_1_34))) {
                var_1_36 = (
                 ((
      var_1_37
     ) - (
      var_1_34
     ))
    );
   }
  } else {
               var_1_36 = (
    var_1_30
   );
  }
 } else {
              var_1_36 = (
   var_1_32
  );
 }
             if ( ((var_1_34) <= ( ((5) | ( ((var_1_39) - (var_1_35))))))) {
              if ( ((var_1_31) > (var_1_35))) {
               var_1_38 = (
    var_1_34
   );
  } else {
               var_1_38 = (
    var_1_32
   );
  }
 }
 unsigned char stepLocal_0 = var_1_6;
                                         if ( ((stepLocal_0) && (var_1_7))) {
                                          if (var_1_7) {
                                           var_1_5 = (
                                            ((
                                             ((((last_1_var_1_18) < 0 ) ? -(last_1_var_1_18) : (last_1_var_1_18)))
    ) - (
                                             ((((( var_1_4 )) < (( var_1_2 ))) ? (( var_1_4 )) : (( var_1_2 ))))
    ))
   );
  } else {
                                           var_1_5 = (
    8
   );
  }
 }
                              if ( ((var_1_5) < (var_1_3))) {
                               var_1_8 = (
                                ((
                                 ((
     var_1_7
    ) || (
                                  ((
      var_1_6
     ) || (
      var_1_9
     ))
    ))
   ) && (
    var_1_10
   ))
  );
 } else {
                               var_1_8 = (
                                (! (
    var_1_10
   ))
  );
 }
 unsigned char stepLocal_3 = ((var_1_8) && (var_1_10));
                                if ( (( ((var_1_9) && (var_1_8))) || (stepLocal_3))) {
                                 var_1_18 = (
                                  ((
    var_1_19
   ) - (
                                   ((((( (( 1991720936u ) - ( var_1_17 )) )) < (( var_1_2 ))) ? (( (( 1991720936u ) - ( var_1_17 )) )) : (( var_1_2 ))))
   ))
  );
 } else {
                                 var_1_18 = (
   var_1_2
  );
 }
                              var_1_1 = (
                               ((
   50
  ) + (
                               ((((( var_1_2 )) < (( ((((( var_1_3 )) < (( var_1_4 ))) ? (( var_1_3 )) : (( var_1_4 )))) ))) ? (( var_1_2 )) : (( ((((( var_1_3 )) < (( var_1_4 ))) ? (( var_1_3 )) : (( var_1_4 )))) ))))
  ))
 );
 signed long int stepLocal_1 = ((8) + (var_1_1));
                               if ( ((var_1_4) == (stepLocal_1))) {
                                var_1_11 = (
                                 ((((( var_1_12 )) > (( var_1_13 ))) ? (( var_1_12 )) : (( var_1_13 ))))
  );
 }
                               if ( (( ((64.4f) + (1.5f))) <= (var_1_13))) {
                                if ( ((var_1_5) >= (var_1_4))) {
                                 var_1_14 = (
    var_1_15
   );
  }
 }
 signed long int stepLocal_2 = ((var_1_5) * ( ((var_1_15) & (var_1_17))));
                                if ( ((var_1_12) >= (9.6))) {
                                 if (var_1_10) {
                                  var_1_16 = (
                                   ((
     2
    ) - (
     var_1_17
    ))
   );
  } else {
                                  if ( ((stepLocal_2) <= (var_1_3))) {
                                   var_1_16 = (
     var_1_5
    );
   } else {
                                   var_1_16 = (
     var_1_4
    );
   }
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 127);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 127);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 127);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 1);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 1);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 1);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= -922337.2036854766000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= -922337.2036854766000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_15 >= -127);
 assume_abort_if_not(var_1_15 <= 126);
 var_1_17 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 32766);
 var_1_19 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_19 >= 2147483647);
 assume_abort_if_not(var_1_19 <= 4294967294);
 var_1_21 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_21 >= -922337.2036854766000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854766000e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_22 >= -922337.2036854766000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854766000e+12F && var_1_22 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 4294967295);
 var_1_25 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_25 >= -2147483648);
 assume_abort_if_not(var_1_25 <= 2147483647);
 var_1_26 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 4294967295);
 var_1_27 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 4294967295);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 1);
 var_1_29 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_29 >= -32767);
 assume_abort_if_not(var_1_29 <= 32766);
 var_1_31 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 65534);
 var_1_33 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_33 >= -922337.2036854776000e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854776000e+12F && var_1_33 >= 1.0e-20F ));
 assume_abort_if_not(var_1_33 != 0.0F);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 127);
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 127);
 var_1_37 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_37 >= 2147483647);
 assume_abort_if_not(var_1_37 <= 4294967294);
 var_1_39 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_39 >= 127);
 assume_abort_if_not(var_1_39 <= 255);
}
void updateLastVariables(void) {
 last_1_var_1_18 = var_1_18;
}
int property(void) {
 if ( ((var_1_6) && (var_1_7))) {
  if (var_1_7) {
  } else {
  }
 }
 if ( ((var_1_5) < (var_1_3))) {
 } else {
 }
 if ( ((var_1_4) == ( ((8) + (var_1_1))))) {
 }
 if ( (( ((64.4f) + (1.5f))) <= (var_1_13))) {
  if ( ((var_1_5) >= (var_1_4))) {
  }
 }
 if ( ((var_1_12) >= (9.6))) {
  if (var_1_10) {
  } else {
   if ( (( ((var_1_5) * ( ((var_1_15) & (var_1_17))))) <= (var_1_3))) {
   } else {
   }
  }
 }
 if ( (( ((var_1_9) && (var_1_8))) || ( ((var_1_8) && (var_1_10))))) {
 } else {
 }
 return ((
             ((
              ((
               ((
                ((
                 ((
                                          ((
       var_1_1
      ) == (
                                           ((unsigned char) (
                                            ((
         50
        ) + (
                                            ((((( var_1_2 )) < (( ((((( var_1_3 )) < (( var_1_4 ))) ? (( var_1_3 )) : (( var_1_4 )))) ))) ? (( var_1_2 )) : (( ((((( var_1_3 )) < (( var_1_4 ))) ? (( var_1_3 )) : (( var_1_4 )))) ))))
        ))
       ))
      ))
     ) && (
                                                     ((
                                                           ((
        var_1_6
       ) && (
        var_1_7
       ))
      ) ? (
                                                      ((
        var_1_7
       ) ? (
                                                       ((
         var_1_5
        ) == (
                                                        ((signed long int) (
                                                         ((
                                                          ((((last_1_var_1_18) < 0 ) ? -(last_1_var_1_18) : (last_1_var_1_18)))
          ) - (
                                                          ((((( var_1_4 )) < (( var_1_2 ))) ? (( var_1_4 )) : (( var_1_2 ))))
          ))
         ))
        ))
       ) : (
                                                       ((
         var_1_5
        ) == (
                                                        ((signed long int) (
          8
         ))
        ))
       ))
      ) : (
       1
      ))
     ))
    ) && (
                                         ((
                                               ((
       var_1_5
      ) < (
       var_1_3
      ))
     ) ? (
                                          ((
       var_1_8
      ) == (
                                           ((unsigned char) (
                                            ((
                                             ((
          var_1_7
         ) || (
                                              ((
           var_1_6
          ) || (
           var_1_9
          ))
         ))
        ) && (
         var_1_10
        ))
       ))
      ))
     ) : (
                                          ((
       var_1_8
      ) == (
                                           ((unsigned char) (
                                            (! (
         var_1_10
        ))
       ))
      ))
     ))
    ))
   ) && (
                                         ((
                                               ((
      var_1_4
     ) == (
                                                ((
       8
      ) + (
       var_1_1
      ))
     ))
    ) ? (
                                          ((
      var_1_11
     ) == (
                                           ((double) (
                                            ((((( var_1_12 )) > (( var_1_13 ))) ? (( var_1_12 )) : (( var_1_13 ))))
      ))
     ))
    ) : (
     1
    ))
   ))
  ) && (
                                        ((
                                               ((
                                                ((
      64.4f
     ) + (
      1.5f
     ))
    ) <= (
     var_1_13
    ))
   ) ? (
                                         ((
                                                ((
      var_1_5
     ) >= (
      var_1_4
     ))
    ) ? (
                                          ((
      var_1_14
     ) == (
                                           ((signed char) (
       var_1_15
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
    var_1_12
   ) >= (
    9.6
   ))
  ) ? (
                                        ((
    var_1_10
   ) ? (
                                         ((
     var_1_16
    ) == (
                                          ((signed short int) (
                                           ((
       2
      ) - (
       var_1_17
      ))
     ))
    ))
   ) : (
                                         ((
                                                ((
                                                 ((
       var_1_5
      ) * (
                                                  ((
        var_1_15
       ) & (
        var_1_17
       ))
      ))
     ) <= (
      var_1_3
     ))
    ) ? (
                                          ((
      var_1_16
     ) == (
                                           ((signed short int) (
       var_1_5
      ))
     ))
    ) : (
                                          ((
      var_1_16
     ) == (
                                           ((signed short int) (
       var_1_4
      ))
     ))
    ))
   ))
  ) : (
   1
  ))
 ))
) && (
                                      ((
                                             ((
                                              ((
    var_1_9
   ) && (
    var_1_8
   ))
  ) || (
                                              ((
    var_1_8
   ) && (
    var_1_10
   ))
  ))
 ) ? (
                                       ((
   var_1_18
  ) == (
                                        ((unsigned long int) (
                                         ((
     var_1_19
    ) - (
                                          ((((( (( 1991720936u ) - ( var_1_17 )) )) < (( var_1_2 ))) ? (( (( 1991720936u ) - ( var_1_17 )) )) : (( var_1_2 ))))
    ))
   ))
  ))
 ) : (
                                       ((
   var_1_18
  ) == (
                                        ((unsigned long int) (
    var_1_2
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
