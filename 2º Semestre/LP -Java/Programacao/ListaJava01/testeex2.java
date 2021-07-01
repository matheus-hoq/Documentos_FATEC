/**
 * @(#)testeex2.java
 *
 *
 * @author
 * @version 1.00 2020/7/16
 */


public class testeex2 {

    public testeex2() {
    	for ( int i = 0 ; i < m.length ; i++) {
			for ( int j = 0 ; j < m[i].length ; j++) {
				if ( i >= j && i + j >= d -1 ) {
					for ( int k = 0 ; k < m.length ; k++) {
						for ( int l = 0 ; l < m[k].length ; l++) {
							if ( k >= l && k + l >= d -1 ) {
								if ( m[i][j] > m[k][l] ) {
									temp = m[i][j];
									m[i][j] = m[k][l];
									m[k][l] = temp;
								}
							}
						}
					}
				}
			}
		}
    }


}