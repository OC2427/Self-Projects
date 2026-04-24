import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class SENTENCE_PATTERN{
    static Map<Character, String[]> patternMap = new HashMap<>();
    public static void loadPatterns() {
        patternMap.put('A', new String[]{
"  ******   ",
" **    **  ",
"**      ** ",
"**      ** ",
"********** ",
"**      ** ",
"**      ** ",
"**      ** ",
"**      ** "
});
        patternMap.put('B', new String[]{
"******    ",
"**    **  ",
"**     ** ",
"**    **  ",
"*******   ",
"**    **  ",
"**     ** ",
"**    **  ",
"******    "
        });
        patternMap.put('C', new String[]{
"   *****  ",
" **    ** ",
"**        ",
"**        ",
"**        ",
"**        ",
"**        ",
" **    ** ",
"   *****  "
        });
        patternMap.put('D', new String[]{
"******    ",
"**    **  ",
"**     ** ",
"**     ** ",
"**     ** ",
"**     ** ",
"**     ** ",
"**    **  ",
"******    "
        });
        patternMap.put('E', new String[]{
"******* ",
"**      ",
"**      ",
"**      ",
"******* ",
"**      ",
"**      ",
"**      ",
"******* "
        });
        patternMap.put('F', new String[]{
"******* ",
"**      ",
"**      ",
"**      ",
"******* ",
"**      ",
"**      ",
"**      ",
"**      "
        });
        patternMap.put('G', new String[]{
"  *****  ",
" **   ** ",
"**       ",
"**       ",
"**       ",
"**  **** ",
"**    ** ",
" **   ** ",
"  *****  "
        });
        patternMap.put('H', new String[]{
"**    ** ",
"**    ** ",
"**    ** ",
"**    ** ",
"******** ",
"**    ** ",
"**    ** ",
"**    ** ",
"**    ** "
        });
        patternMap.put('I', new String[]{
"******** ",
"******** ",
"   **    ",
"   **    ",
"   **    ",
"   **    ",
"   **    ",
"******** ",
"******** "
        });
        patternMap.put('J', new String[]{

"******** ",
"     **  ",
"     **  ",
"     **  ",
"     **  ",
"     **  ",
"     **  ",
"**   **  ",
" *****   "
        });
        patternMap.put('K', new String[]{
"**    ** ",
"**   **  ",
"**  **   ",
"** **    ",
"****     ",
"** **    ",
"**  **   ",
"**   **  ",
"**    ** "
        });
        patternMap.put('L', new String[]{
"**      ",
"**      ",
"**      ",
"**      ",
"**      ",
"**      ",
"**      ",
"******* ",
"******* "
        });
        patternMap.put('M', new String[]{
"**      ** ",
"***    *** ",
"****  **** ",
"** **** ** ",
"**  **  ** ",
"**      ** ",
"**      ** ",
"**      ** ",
"**      ** "
        });
        patternMap.put('N', new String[]{
"**      ** ",
"***     ** ",
"****    ** ",
"** **   ** ",
"**  **  ** ",
"**   ** ** ",
"**    **** ",
"**     *** ",
"**      ** "
        });
        patternMap.put('O', new String[]{
"   ***    ",
" **   **  ",
"**     ** ",
"**     ** ",
"**     ** ",
"**     ** ",
"**     ** ",
" **   **  ",
"   ***    "
        });
        patternMap.put('P', new String[]{
"******    ",
"**    **  ",
"**     ** ",
"**    **  ",
"******    ",
"**        ",
"**        ",
"**        ",
"**        "
        });
        patternMap.put('Q', new String[]{
"   ***    ",
" **   **  ",
"**     ** ",
"**     ** ",
"**     ** ",
"**     ** ",
"** *** ** ",
" **   **  ",
"   *** ** "
        });
        patternMap.put('R', new String[]{
"******    ",
"**    **  ",
"**     ** ",
"**    **  ",
"******    ",
"**  **    ",
"**   **   ",
"**    **  ",
"**     ** "
        });
        patternMap.put('S', new String[]{
"  *****  ",
" **      ",
"**       ",
" **      ",
"   **    ",
"     **  ",
"      ** ",
"     **  ",
" *****   "
        });
        patternMap.put('T', new String[]{
"******** ",
"******** ",
"   **    ",
"   **    ",
"   **    ",
"   **    ",
"   **    ",
"   **    ",
"   **    "
        });
        patternMap.put('U', new String[]{
"**     ** ",
"**     ** ",
"**     ** ",
"**     ** ",
"**     ** ",
"**     ** ",
"**     ** ",
" **   **  ",
"   ***    "
        });
        patternMap.put('V', new String[]{
"**       ** ",
"**       ** ",
"**       ** ",
" **     **  ",
" **     **  ",
"  **   **   ",
"  **   **   ",
"   ** **    ",
"    ***     "
        });
        patternMap.put('W', new String[]{
"**      ** ",
"**      ** ",
"**      ** ",
"**      ** ",
"**  **  ** ",
"** **** ** ",
"****  **** ",
"***    *** ",
"**      ** "
        });
        patternMap.put('X', new String[]{
"**      ** ",
" **    **  ",
"  **  **   ",
"   ****    ",
"    **     ",
"   ****    ",
"  **  **   ",
" **    **  ",
"**      ** "
        });
        patternMap.put('Y', new String[]{
"**      ** ",
" **    **  ",
"  **  **   ",
"   ****    ",
"    **     ",
"   **      ",
"  **       ",
" **        ",
"**         "
        });
        patternMap.put('Z', new String[]{
"********** ",
"*********  ",
"      **   ",
"     **    ",
"    **     ",
"   **      ",
"  **       ",
" ********* ",
"********** "
        });
        patternMap.put('1', new String[]{
"  ***    ",
" ****    ",
"** **    ",
"   **    ",
"   **    ",
"   **    ",
"   **    ",
"******** ",
"******** "
        });
        patternMap.put('2', new String[]{
"  *****   ",
" **   **  ",
"**     ** ",
"      **  ",
"     **   ",
"    **    ",
"   **     ",
"  ******* ",
" ******** "
        });
        patternMap.put('3', new String[]{
"  *****   ",
" **   **  ",
"**     ** ",
"      **  ",
"    **    ",
"      **  ",
"**     ** ",
" **   **  ",
"  *****   "
        });
        patternMap.put('4', new String[]{
"     ***   ",
"    ****   ",
"   ** **   ",
"  **  **   ",
" **   **   ",
"********** ",
"      **   ",
"      **   ",
"      **   "
        });
        patternMap.put('5', new String[]{
"********* ",
"**        ",
"**        ",
"**        ",
"  *****   ",
"       ** ",
"       ** ",
"**    **  ",
" ******   "
        });
        patternMap.put('6', new String[]{
" *******  ",
"**     ** ",
"**        ",
"**        ",
"********  ",
"**     ** ",
"**     ** ",
"**     ** ",
"  *****   "
        });
        patternMap.put('7', new String[]{
"********** ",
"       **  ",
"      **   ",
"     **    ",
"    **     ",
"   **      ",
"  **       ",
" **        ",
"**         "
        });
        patternMap.put('8', new String[]{
"  *****   ",
" **   **  ",
"**     ** ",
" **   **  ",
"   ***    ",
" **   **  ",
"**     ** ",
" **   **  ",
"  *****   "
        });
        patternMap.put('9', new String[]{
"  *****   ",
"**     ** ",
"**     ** ",
"**     ** ",
" ******** ",
"       ** ",
"       ** ",
"**     ** ",
" *******  "
        });
        patternMap.put('0', new String[]{
" *******  ",
"**     ** ",
"**     ** ",
"**     ** ",
"**     ** ",
"**     ** ",
"**     ** ",
"**     ** ",
" *******  "
        });
    }
    public static void RenderBanner(String word){
        String[] words = word.split(" ");
        for (String w : words) {
            for (int i = 0; i < 9; i++){
                StringBuilder line = new StringBuilder();
                for (char c : w.toCharArray()) {
                    String[] pattern = patternMap.get(c);
                    if (pattern != null){
                        line.append(pattern[i]).append("  ");
                    }
                }
                System.out.println(line);
            }
            System.out.println();
        }
    }
    public static void main(String[] args){
        loadPatterns();
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the word : ");
        String WORD = sc.nextLine(); 
        RenderBanner(WORD.toUpperCase());
    }
}