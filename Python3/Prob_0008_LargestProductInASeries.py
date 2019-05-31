# Largest Product in a series

series = "73167176531330624919225119674426574742355349
                1949349698352031277450632623957831801698480186
                9478851843858615607891129494954595017379583319
                5285320880551112540698747158523863050715693290
                9632952274430435576689664895044524452316173185
                6403098711121722383113622298934233803081353362
                7661428280644448664523874930358907296290491560
                4407723907138105158593079608667017242712188399
                8797908792274921901699720888093776657273330010
                5336788122023542180975125454059475224352584907
                7116705560136048395864467063244157221553975369
                7817977846174064955149290862569321978468622482
                8397224137565705605749026140797296865241453510
                0474821663704844031998900088952434506585412275
                8866688116427171479924442928230863465674813919
                1231628245861786645835912456652947654568284891
                2883142607690042242190226710556263211111093705
                4421750694165896040807198403850962455444362981
                2309878799272442849091888458015616609791913387
                5499200524063689912560717606058861164671094050
                7754100225698315520005593572972571636269561882
                670428252483600823257530420752963450"

def split(string):
    return[int(char) for char in string]

def spanProd(seriesArr, x):
    a,b,c,d,e,f,g,h,i,j,k,l,m = seriesArr[x],seriesArr[x+1],seriesArr[x+2],seriesArr[x+3],seriesArr[x+4],seriesArr[x+5],seriesArr[x+6],seriesArr[x+7],seriesArr[x+8],seriesArr[x+9],seriesArr[x+10],seriesArr[x+11],seriesArr[x+12]
    return(a*b*c*d*e*f*g*h*i*j*k*l*m)

def currSpan(seriesArr, x):
    a,b,c,d,e,f,g,h,i,j,k,l,m = seriesArr[x],seriesArr[x+1],seriesArr[x+2],seriesArr[x+3],seriesArr[x+4],seriesArr[x+5],seriesArr[x+6],seriesArr[x+7],seriesArr[x+8],seriesArr[x+9],seriesArr[x+10],seriesArr[x+11],seriesArr[x+12]
    return(a,b,c,d,e,f,g,h,i,j,k,l,m)

bigNum = 0
x = 0
seriesArr = split(series)

while True:
    temp = spanProd(seriesArr, x)
    x += 1
    if temp > bigNum:
        bigNum = temp
        print('\n')
        print(currSpan(seriesArr, x-1))
        print(x-1)
        print(bigNum)
    if (x == 984):
        break
