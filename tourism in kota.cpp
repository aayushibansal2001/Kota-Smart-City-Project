#include<iostream>
#include<stdlib.h>
#include<process.h>
using namespace std;
class tourism{
public:
    void intro();
    void tourist_attractions();

};
void tourism::intro()
{
    cout<<"With history, culture, cuisine, nature and heritage, Kota has a lot on offer for your perusal."
    " The desert city cites an attractive historical beginning and has seen a lot of valour, majesty,"
    " courtliness and grandeur, etching India’s glorious monarchy. Proud Rajput kings once ruled over western"
    " India adding to this country’s glory and richness. Kota is within the Hadoti region located in the south"
    " eastern part of Rajasthan. The River Chambal cools the town as it flows through it. In the 17th century"
    " Kota region a section of Hadoti was gifted to Madho Singh a deserving prince, and Kota attained the"
    " prestigious Rajput hallmark of gallantry and Rajputana culture.\n The best time to visit Kota is from October to March"<<endl<<endl;

}
void tourism::tourist_attractions()
{
    cout<<" TOURIST ATTRACTIONS IN KOTA"<<endl;
    cout<<"1. Forts and Palaces"<<endl;
    cout<<"2. Gardens"<<endl;
    cout<<"3. Temples"<<endl;
    cout<<"4. Museums"<<endl;
    cout<<"5. Lakes & Waterfalls"<<endl;
}

class forts_and_palaces
{ public:
    void display()
    {
        system("cls");            //It refreshes the screen and clears the terminal.
        cout<<"FORTS AND PALACES IN KOTA"<<endl;
        cout<<"1. Kotah Garh City Palace"<<endl;
        cout<<"2. Jagmandir Palace"<<endl;
        cout<<"3. Raniji Ki Baoli"<<endl;
        cout<<"4. Abheda Mahal"<<endl;
        cout<<"5. Umed Bhawan"<<endl;
    }
    void CityPalace()
    {
        system("cls");
        cout<<"An Overview of Kotah Garh City Palace"<<endl<<endl;
        cout<<"A confabulation of Mughal and Rajasthani architecture and art, the City Palace is a monument "
        "of the glorious royal past of the Kota city. City palace is a fantastic landmark in Kota attracting"
        " thousands of tourists every year.\n\n"
        "The palace is adorned with imposing wall paintings, mirror walls, mirror ceilings, hanging illuminated "
        "lights and floral decorations. Breathtaking marble floorings and walls and stylish fashioned entrance,"
        " all these make City Palace a memorable location. The attractive garden around the palace adds the beauty"
        " of the Palace. City Palace encloses a grand museum enclosing huge collection of medieval weaponries, "
        "costumes and apparels of erstwhile kings and queens, artifacts and handicrafts showing the cultural "
        "heritage of the bygone splendid days."<<endl<<endl;
        cout<<"It is 5 km from city center"<<endl<<endl;
        cout<<"Popular for: History Buffs & Experience Seekers"<<endl<<endl;
        cout<<"Timings: All days of the week 10:00 AM - 5:00 PM"<<endl<<endl;
        cout<<"Entry Fee : INR 10 per person"<<endl<<endl;
        cout<<"Things to do around City Palace: \n Sahkari Bazaar \n Chambal River Cruise \n Chopati Bazzar \n Sawan Puhar Waterpark \n Central Square Mall"<<endl<<endl;
        cout<<"Restaurants near City Palace: "<<endl;
        cout<<"\t\tName\t\t\t\tAddress"<<endl;
        cout<<"\tKota's Zaika\t\t\tNayapura, Hotel Saraswati Palace, Near Ratan Kachori and sweets"<<endl;
        cout<<"\tKota castle restaurant\t\t hn 29 cenal road land mark city opp to shri hari hospital"<<endl;
        cout<<"\tThe Highway King\t\tNear St. John's School, Gyan Sarovar Kunhadi, Kota, Rajasthan 324008"<<endl<<endl;


}
void JagmandirPalace()
    {
        system("cls");
        cout<<"An Overview of Jagmandir Palace"<<endl<<endl;
        cout<<"This is one of the most popular destinations in Kota. Located in the middle of Kishor Sagar Lake"
        " in Kota, one can scarcely believe at the marvellous engineering which made this creation possible."
        " Built in the 1740s by one of the queens of Kota, Jagmandir Palace was once a summer retreat for the"
        " rulers of Kota, with the pristine waters of Kishore Sagar Lake inviting scores of tourists to the same."<<endl<<endl;
        cout<<"4 km from city center"<<endl<<endl;
        cout<<"Popular for: History Buffs, God Lovers and Photo Fanatics"<<endl<<endl;
        cout<<"Things to do around Jagmandir Palace:\n Central Square Mall \n Swarn Rajat Market \n Jawahar Market"<<endl<<endl;
        cout<<"Restaurants near Jagmandir Palace:\n";
        cout<<"\t\tName\t\t\t\tAddress"<<endl;
        cout<<"\tSwagat Restaurant\t\tSurya Royal Hotel, 11, Jhalawar Road"<<endl;
        cout<<"\tEatos Restaurant\t\t12-C, Nursery Scheme, Talwandi, Kota-5, Kota-Rajasthan 324004, India"<<endl<<endl;
}
void RanijiKiBaoli()
{
    system("cls");
    cout<<"An Overview of Raniji Ki Baoli"<<endl<<endl;
    cout<<"Raniji Ki Baoli is an ancient baoli (stepwell) near Kota in Bundi. It was built by the Rajputs and "
    "boasts of a striking architecture. The baoli has a narrow gateway lined with four sturdy pillars and slender "
    "arched on the high roof. A flight of stairs descend into a part well, part temple and part palace with scarce "
    "water reserves. Raniji Ki Baoli is an important heritage monument of the city."<<endl<<endl;
    cout<<"It is 34 km from city center."<<endl<<endl;
    cout<<"Entry Fee: Free"<<endl<<endl;
    cout<<"Popular for: Historic Places"<<endl<<endl;
    cout<<"Things to do near Raniji ki Baoli: \n Aquagreens Waterpark \n City Mall \n Radhika Resort and Waterpark \n Ahluwalias's The Great Mall of Kota"<<endl<<endl;
    cout<<"Restaurants near Raniji ki Baoli:\n";
    cout<<"\t\tName\t\t\t\tAddress"<<endl;
    cout<<"\tIcon Garden Restaurant\t\tResort Exotika NH12,Bundi Road"<<endl;
    cout<<"\tDaniel's Food\t\t\tKunhari, Electricity Board Area, Kota, Rajasthan Opp Allen Sangyan"<<endl;
    cout<<"\tJodhpur Restaurant\t\tRawat Bhata Road, Kota, Rajasthan"<<endl<<endl;
}

void AbhedaMahal()
    {
        system("cls");
        cout<<"An Overview of Abheda Mahal"<<endl<<endl;
        cout<<"Abheda Mahal is situated near the Chambal river of Kota. The palace was established by Ummed Maharaj,"
        "and it has a great history and many different stories behind it's establishment. The palace has a pond which"
        " houses beautiful lotus flowers, turtles. It is said that earlier this pond also contained many crocodiles. The"
        " palace has a great architecture and is a perfect place for picnic and for photography. The palace image falls on the "
        "water in the pond which reflects it's image which gives a great view."<<endl<<endl;
        cout<<"Popular for: History Buffs"<<endl<<endl;
        cout<<"Timings: All days of the week 10:00 AM - 5:00 PM"<<endl<<endl;
        cout<<"Entry Fee : \n For Indians: Rs 20/- per head \n For Foreign Nationals: Rs 40/- per head"<<endl<<endl;
        cout<<"Things to do around Abheda Mahal: \n Lakshman Jhoola \n Purana Cinema Hall \n Hanuman Mandir "<<endl<<endl;
        cout<<"Restaurants near Abheda Mahal: "<<endl;
        cout<<"\t\tName\t\t\t\tAddress"<<endl;
        cout<<"\tTamku Restaurant\t\t\tKota, Rajasthan 323021"<<endl;
        cout<<"\tHariyali Garden restaurant\t\t Sawan Phuhar water park ,Bundi road,NH-12,Kota, Kota, Rajasthan, India"<<endl;
        cout<<"\tFlavour Restaurant\t\t\tOm Cineplex, 11, Indra Vihar Opera Hospital Road, Kota, India"<<endl<<endl;
    }
void UmedBhawan()
    {
        system("cls");
        cout<<"An Overview of Umed Bhawan"<<endl<<endl;
        cout<<"Displaying a blend of Rajput and Victorian architecture, Umed Bhawan Palace has an aura of its own. "
        "This beautiful palace was built in 1009 by Maharao Umed Singh II of Kota. Green lawns, huge courtyards, "
        "picturesque ceilings, marble corridors, hunting trophies of yesteryears are the special features of the palace. "
        "The palace has 32 huge rooms replete with modern amenities. Umed Bhawan Palace strikes a stark balance with "
        "contemporary living and Rajasthan's culture."<<endl<<endl;
        cout<<"Popular for: Architectural and historical heritage"<<endl<<endl;
        cout<<"Timings: All days of the week 9:00 AM - 5:00 PM"<<endl<<endl;
        cout<<"Entry Fee : \n For Indians: Rs 30/- per person \n For foreigners: Rs 100/- per person"<<endl<<endl;
        cout<<"Things to do around Umed Bhawan: \n Kotsa- Travellers Gallery \n Ganesh Handicrafts \n Baba Art Emporium \n Rao Jodha Desert Rock Park"<<endl<<endl;
        cout<<"Restaurants near Umed Bhawan: "<<endl;
        cout<<"\t\tName\t\t\t\tAddress"<<endl;
        cout<<"\tDylan Cafe Restaurant\t\tGulab Sagar Baccha, Hanuman ji ki Gali Gulab Sagar"<<endl;
        cout<<"\tKarni Bhawan Restaurant\t\t Palace Road, Karni Bhawan Hotel, Ratananda"<<endl;
        cout<<"\tPachranga\t\t\tCircuit House Road Ranbanka Palace"<<endl<<endl;


}

};
class gardens
{
public:
    void display()
    {
        system("cls");
        cout<<"GARDENS IN KOTA"<<endl;
        cout<<"1. Seven Wonders Park"<<endl;
        cout<<"2. Chambal Gardens"<<endl;
        cout<<"3. Kota Zoological Park"<<endl;
        cout<<"4. Chatra Vilas Garden"<<endl;
        cout<<"5. Darrah Wildlife Sanctuary"<<endl;
        cout<<"6. Lucky Burj Garden"<<endl;
    }
    void SevenWondersPark()
{
    system("cls");
    cout<<"An Overview of Seven Wonders Park"<<endl<<endl;
    cout<<"Seven Wonders Park in Kota comprises of miniatures of all the Seven Wonders of the World."
     "These include Taj Mahal, Great Pyramid, Eiffel Tower, Leaning Tower, Christ the Redeemer of Brazil,"
     " Colosseum, and Statue of Liberty. These miniatures have been built on the bank of the Kishore Sagar"
     " Lake thereby enhancing its beauty. The park was built at a mind-blowing cost of 20 crores by the Urban"
     " Development Department."<<endl<<endl;
     cout<<"Ranked 2 out of many sightseeing in Kota"<<endl<<endl;
     cout<<"Situated in: Ballabhbari"<<endl<<endl;
     cout<<"Entry fee: free"<<endl<<endl;
     cout<<"Opening Hours: 2:00 PM"<<endl<<endl;
     cout<<"Closing Hours: 10.00 PM"<<endl<<endl;
     cout<<"Best time to visit: During sunset"<<endl<<endl;
     cout<<"Facilities available: Food available for purchase, bathroom facilities, camera allowed"<<endl<<endl;
     cout<<"Restaurants near Seven Wonder's Park:\n"<<endl;
    cout<<"\t\tName\t\t\t\tAddress"<<endl;
    cout<<"\tThe Right Place Cafe\t\tC-11, Vallabh Bari Opposite 7 Wonders Park"<<endl;
    cout<<"\tIndish Resto And Cafe\t\t72 Shopping Centre, Opposite Of Rotary Binani Sabhagar"<<endl;
    cout<<"\tSheesha Restaurant\t\tKotri Rd Police Chowki, Gumanpura"<<endl<<endl;
}
void ChambalGardens()
{
    system("cls");
    cout<<"An Overview of Chambal Gardens"<<endl<<endl;
    cout<<"Chambal Garden is located in Amar Niwas on the banks of Chambal River. It is an attraction in Kota"
    " and draws tourists from all over the world. At the centre of the beautifully landscaped garden is a pond"
    " which is home to several Gharials.A suspension bridge in the garden is an excellent way to explore "
    "specific regions of the landscaped beauty. Chambal Garden has also been featured in a Hollywood Blockbuster,"
    " 'Badrinath ki Dulhaniya'."<<endl<<endl;
    cout<<"It is 7 km from city center."<<endl<<endl;
    cout<<"Entry fee: INR 0"<<endl<<endl;
    cout<<"Timings: 10:00AM to 7:00 PM"<<endl<<endl;
    cout<<"Major attractions at Chambal Garden:\n"<<endl;
    cout<<"Children's play area- \n A special play area is a favourite amongst children which has several,"
    " rides, slides, swings and a jungle gym. There is also a suspension bridge that the kids love a lot."<<endl;
    cout<<"Toy Train- \n A toy train runs all across the garden. It is a fun way to explore the beautifully landscaped garden."<<endl;
    cout<<"Boating- \n Visitors can go boating on a serene boat ride in the pond at a minimal rate of INR 50 per person."<<endl;
    cout<<"Crocodile Pond- \n  It is one of the few locations where visitors can watch the crocodiles in Rajasthan. The"
    " suspension bridge runs above the pond area, and visitors can watch the crocodiles from up there."<<endl<<endl;
    cout<<"Popular for: Nature Lovers & Photo Fanatics"<<endl<<endl;
    cout<<"Things to do around Chambal Gardens:\n Dadabari Market \n Saiman Plaza \n Gma Plaza Market \n Ghoomar Beer Bar"<<endl<<endl;
    cout<<"Restaurants near Kishore Sagar Lake:\n"<<endl;
    cout<<"\t\tName\t\t\t\tAddress"<<endl;
    cout<<"\tFood Court Wonder Mart\t\tWonder Mart, 431 Dadabari Exrension, Modi College Road"<<endl;
    cout<<"\tJain Mess\t\t\tJawahar Nagar, Talwandi, Kota, Rajasthan, India"<<endl;
    cout<<"\tEatos Restaurant\t\t12-C, Nursery Scheme, Talwandi, Kota-5, Kota-Rajasthan 324004, India"<<endl<<endl;
}
void Zoo()
{
    system("cls");
    cout<<"An Overview of Kota Zoological Park"<<endl<<endl;
    cout<<"Kota Zoological Park is positioned near Kishore Sagar Lake and is one of the should-see locations in Kota."
    " This zoological park is a domestic to the diverse mammalian species including the tiger, undergo, leopard, "
    "panther, black dollar, macaque, rabbit and many others. This park additionally affords a safe haven to the "
    "avifauna like the Brahminy eagle, lark, woodpecker, cuckoo, owl etc. Kota Zoological Park is understood for its "
    "unspoiled green surroundings.October-March is the quality season for visiting this zoological park as it's miles "
    "the period whilst the weather is appropriate and the animals welcome their babies."<<endl<<endl;
     cout<<"Timings: All days of the week (except Tuesday) 9:00 AM - 6:30 PM"<<endl<<endl;
    cout<<"Entry Fee : \n For Indians: Rs 20/- per head \n For Foreign Nationals: Rs 40/- per head"<<endl<<endl;
    cout<<"Popular for: Picnic, Photography, Safari etc."<<endl<<endl;
}
void ChatraVilas()
{
    system("cls");
    cout<<"An Overview of Chatra Vilas Garden"<<endl<<endl;
    cout<<"Chatra Vilas Garden is a well-known visitor attraction in Kota. Along with the beauty of the garden, the "
    "vacationers can also see masses of royal cenotaphs in the lawn. Located close to Chambal Hotel, this location "
    "is preferred by many domestic and international tourists. The lawn is a primary appeal to historians and college "
    "students too as one could recognize approximately the records of the region and various rulers of Kota at "
    "exclusive eras."<<endl<<endl;
    cout<<"Things to do around Chatra Vilas Garden:\n Saiman Plaza \n Ghoomar Beer Bar \n Gma Plaza Market \n Central Square mall"<<endl<<endl;
    cout<<"Restaurants near Chatra Vilas Garden:\n";
    cout<<"\t\tName\t\t\t\tAddress"<<endl;
    cout<<"\tSwagat Restaurant\t\tSurya Royal Hotel, 11, Jhalawar Road"<<endl;
    cout<<"\tMaheshwari Restaurant\t\t384, Rajiv Gandhi Nagar, Kota, Rajasthan, India"<<endl<<endl;
}
void Darrah()
{
   system("cls");
   cout<<"An Overview of Darrah Wildlife Sanctuary"<<endl<<endl;
   cout<<"Darrah Wildlife Sanctuary is situated around 56 kms away from Kota near Bundi. The sanctuary boasts of a"
   " rich wildlife and is home to asiatic elephant, sambar deer, elks etc among several other exotic animal and plant"
   " species. The sanctuary is mostly popular for wildlife safaris, treks and sightseeing. Initially it was used as"
   " a hunting ground by the Royal families."<<endl<<endl;
   cout<<"Its is 0 km from city center"<<endl<<endl;
    cout<<"Timings : 7:00 AM - 5:00 PM"<<endl<<endl;
    cout<<"Entry Fee : Indians - INR 20 Foreigners - INR 100"<<endl<<endl;
}

void LuckyBurj()
{
    system("cls");
    cout<<"An Overview of Lucky Burj Garden"<<endl<<endl;
    cout<<"Lucky Burj Garden located in Kota is a pleasing and calm area to kick back out. The garden is also a "
    "famous vacationer vicinity of Kota. It is busy with both locals and site visitors. The lawn is most chosen "
    "location for evenings to go for picnics or to go for a walk. The garden is protected with lush green plant "
    "life and colorful owers. The garden is bustling in the course of weekends, traffic can experience the view, "
    "taste local cuisines and make the ride to the lawn memorable."<<endl<<endl;
    cout<<"Timings: All days of the week 8:00 AM - 8:30 PM"<<endl<<endl;
    cout<<"Entry Fee : \n For Indians: Rs 10/- per head \n For Foreign Nationals: Rs 20/- per head"<<endl<<endl;
    cout<<"Popular for: Picnic, Photography, etc."<<endl<<endl;
}
};
class temples
{
public:
    void display()
    {
        system("cls");
        cout<<"TEMPLES IN KOTA"<<endl;
        cout<<"1. Garadia Mahadev Temple"<<endl;
        cout<<"2. Shivpuri Dham"<<endl;
        cout<<"3. Godavri Dham Temple"<<endl;
        cout<<"4. Kansua Shiv Mandir"<<endl;
        cout<<"5. Khade Ganesh Ji Temple"<<endl;
    }
    void GaradiaMahadev()
    {
        system("cls");
        cout<<"An Overview of Garadia Mahadev Temple"<<endl<<endl;
        cout<<"Situated in Daulatganj near Kota, Garadiya Mahadev Temple is not just a revered Hindu temple"
        " but also a popular tourist spot because of its location at the scenic Chambal gorge. Perched at a "
        "height of 500 feet from the mean sea level on a picturesque cliff, the temple is enshrined by Hindu"
        " God Shiva. Boasting of immense scenic beauty, views of the virgin green plains sprawling all over "
        "and flanked by river Chambal on the side, the place is one of the most ideal picnic spots in the region."
        " The presence of several peacocks and other avian species attract a lot of birdwatchers and photography "
        "buffs. Considered to be the best place to relax and unwind, the vantage point is surely a must- visit."<<endl<<endl;
        cout<<"It is 17 km from city centre."<<endl<<endl;
        cout<<"Entry fee: INR 0"<<endl<<endl;
        cout<<"Photography and Videography charges: INR 50"<<endl<<endl;
        cout<<"Timings: 5:00 AM to 7PM"<<endl<<endl;
        cout<<"Popular for: God Lovers and Nirvana Seekers"<<endl<<endl;
        cout<<"Things to do around Garadia Mahadev Temple:\n Chambal River Cruise \n Mahaveer Dharamshala Market \n Sawan Puhar Waterpark \n Central Square mall"<<endl<<endl;
        cout<<"Restaurants near Garadia Mahadev Temple:\n";
        cout<<"\t\tName\t\t\t\tAddress"<<endl;
        cout<<"\tKota's Zaika\t\t\tNayapura, Hotel Saraswati Palace, Near Ratan Kachori and sweets"<<endl;
        cout<<"\tThe Highway King\t\tNear St.John's School, Gyan Sarovar Kunhadi, Kota, Rajasthan 324008"<<endl;
        cout<<"\tKota Castle Restaurant\t\tHn 29 Central Road Landmark City Opp to Shri Hari Hospital"<<endl;
        cout<<"\tAmar Dhaba\t\t\tBhimganj Mandi, Kota, Rajasthan, India"<<endl<<endl;

    }
    void Shivpuri()
    {
       system("cls");
       cout<<"An Overview of Shivpuri Dham"<<endl<<endl;
        cout<<"Shivpuri Dham is one the ancient most and unique temple in Kota. It has as many as 525 shivalingas "
        "at one place. The place is thronged by pilgrims and devotees all through the year; however, the busiest "
        "time of the year is Shivratri or Rasleela. Between the shivalingas, there is a huge statue of God Pashupati Nath."<<endl<<endl;
        cout<<"It is 6 km from city center."<<endl<<endl;
        cout<<"Timings : 24 hours"<<endl<<endl;
        cout<<"Entry Fee : No entry fee"<<endl<<endl;
         cout<<"Popular for: God Lovers"<<endl<<endl;
        cout<<"Things to do around Shivpuri Dham:\n Lodha Market \n City Mall \n Z Cine Mall \n Central Square mall"<<endl<<endl;
        cout<<"Restaurants near Shivpuri Dham:\n";
        cout<<"\t\tName\t\t\t\tAddress"<<endl;
        cout<<"\tNatural Restaurant\t\tVigyan Nagar, Kota, Rajasthan, India"<<endl;
        cout<<"\tRoyal Firdous Restaurant\tSH 51, Dhanmandi, Kota, Rajasthan, India"<<endl;
        cout<<"\tPalm Restaurant\t\t\tHotel The Grand Chandiram, Near LIC Building, Jhalawar Road"<<endl;
        cout<<"\tMaheshwari Restaurant\t\t384,Rajeev Ghandi Nagar, Kota, Rajasthan, India"<<endl<<endl;

    }
    void GodavriDham()
    {
       system("cls");
       cout<<"An Overview of Godavri Dham Temple"<<endl<<endl;
       cout<<"Located in Dadabari in Kota, Godavari Dham Temple is dedicated to Lord Hanuman and is based on the"
       " banks of river Chambal. The temple hosts a special morning and midnight aarti on Tuesdays and Saturdays "
       "which is attended by hundreds of pilgrims. Besides, the temple also houses idols of several other gods "
       "and goddesses including Lord Shiva, Bhairav, Ganpati etc."<<endl<<endl;
       cout<<"It is 8 km from city center"<<endl<<endl;
       cout<<"Popular for: God Lovers"<<endl<<endl;
       cout<<"Timings: All days of the week 7:00 AM - 8:00 PM"<<endl<<endl;
        cout<<"Entry Fee : No entry fee"<<endl<<endl;
        cout<<"Things to do around Godavri Dham Temple:\n New Motor Market \n Central Square Mall \n Lakshmi Narayan Market \n Saiman Plaza"<<endl<<endl;
        cout<<"Restaurants near Godavri Dham Temple:\n";
        cout<<"\t\tName\t\t\t\tAddress"<<endl;
        cout<<"\tPalm Restaurant\t\t\t\tHotel The Grand Chandiram, Near LIC Building, Jhalawar Road"<<endl;
        cout<<"\tRoyal Firdous Restaurant\t\tSH 51, Dhanmandi, Kota, Rajasthan, India"<<endl;
        cout<<"\tNatural Restaurant\t\t\tVigyan Nagar, Kota, Rajasthan, India"<<endl<<endl;
}
    void Kansua()
    {
        system("cls");
        cout<<"An Overview of Kansua Shiv Mandir"<<endl<<endl;
        cout<<"Kansua Temple is one of the most ancient temples near Bundi in Kota which is enshrined by Lord Shiva."
        " The temple houses a shivalinga which has four heads; it is believed that the shrine was constructed by the"
        " Pandavas when they visited Kota during their exile. The temple is built just right by River Chambal and is"
        " also known as Karneshwar Temple."<<endl<<endl;
        cout<<"It is 8 km from city center."<<endl<<endl;
        cout<<"Timings : 6:00 AM - 7:00 PM"<<endl<<endl;
        cout<<"Entry Fee : No entry fee"<<endl<<endl;
    }
    void KhadeGanesh()
    {
        system("cls");
        cout<<"An Overview of Khade Ganesh ji Temple"<<endl<<endl;
        cout<<"Believed to be more than 600 years old idol, Khade Ganesh is one of the most important religious place in Kota."
        "Situated close to river Chambal, there is a lake nearby where several Peacocks could be spotted. The unique part "
        "about this temple is that Ganesh's idol is in standing pose, which is supposed to be the only standing idol of Ganesh"
        " in India."<<endl<<endl;
        cout<<"It is 12 km from city center."<<endl<<endl;
        cout<<"Things to do around Khade Ganesh Ji Temple:\n Vishwakarma Market \n Pandya Groups City Mall \n Z Cine Mall \n Azad Market"<<endl<<endl;
        cout<<"Restaurants near Khade Ganesh Ji Temple:\n";
        cout<<"\t\tName\t\t\t\tAddress"<<endl;
        cout<<"\tOm Restaurant\t\t\tBodhgaya Rd, Bodh Gaya"<<endl;
        cout<<"\tFood Court Wonder Mart\t\tWonder Mart, 431 Dadabari Extension, Modi College Road"<<endl;
        cout<<"\tEatos Restaurant\t\t12-C, Nursery Scheme, Talwandi, Kota-5, Kota-Rajasthan 324004, India"<<endl<<endl;

    }

};
class museums
{
public:
    void display()
    {
        system("cls");
        cout<<"MUSEUMS IN KOTA"<<endl;
        cout<<"1. Brij Vilas Palace Government Museum"<<endl;
        cout<<"2. Rao Madho Singh Museum"<<endl;
    }
    void GovMuseum()
    {
        system("cls");
        cout<<"An Overview of Brij Vilas Palace Government Museum"<<endl<<endl;
        cout<<"Housed in the premises of Brijvilas Palace near Kishore Sagar in Kota, Government Museum is a perfect"
        " depiction of the culture and history of Rajasthan. The museum is replete with artefacts, archaeological "
        "findings, documents, coins and other valuable exhibits. One of the most prominent exhibit is the statue "
        "brought from Baroli. Photography is prohibited."<<endl<<endl;
        cout<<"It is 3 km from city center"<<endl<<endl;
        cout<<"Timings : 10:00 AM - 5:00 PM Closed on Monday"<<endl<<endl;
        cout<<"Things to do around Government Museum:\n Swarn Rajat Market \n New Cloth Market \n Central Square Mall \n Saiman Plaza"<<endl<<endl;
        cout<<"Restaurants near Government Museum:\n"<<endl;
        cout<<"\t\tName\t\t\t\tAddress"<<endl;
        cout<<"\tSwagat Restaurant\t\tSurya Royal Hotel, 11, Jhalawar Road"<<endl;
        cout<<"\tPalm Restaurant\t\t\tHotel The Grand Chandiram, Near LIC Building, Jhalawar Road"<<endl;
        cout<<"\tNon Veg Restaurant\t\tNear Aerodrome Circle, SH 51, Dhanmandi, Kota, Rajasthan, India"<<endl<<endl;
    }
    void RaoMadhoMuseum()
    {
        system("cls");
        cout<<"An Overview of Rao Madho Singh Museum"<<endl<<endl;
        cout<<"Housed in the premises of Old Palace of Kota, Rao Madho Singh Museum boasts of an incredible "
        "collection of rich artefacts and documents depicting the history and culture of Rajasthan. Silver "
        "figurines, terracotta figures, coins, sculptures and manuscripts attracts the students, historians "
        "and tourists alike. The museum sprawls over two storeys in several galleries."<<endl<<endl;
        cout<<"It is 5km from city center."<<endl<<endl;
        cout<<"Popular for: History Buffs"<<endl<<endl;
        cout<<"Timings : 10:00 AM - 5:00 PM"<<endl<<endl;
        cout<<"Entry Fee : Lower Section: INR 10 Upper Section: INR 50"<<endl<<endl;
        cout<<"Things to do around Rao Madho Singh Museum: \n Kalawati Paliwal Market \n Central Square Mall \n Saiman Plaza \n New Motor Market"<<endl<<endl;
        cout<<"Restaurants near Rao Madho Singh Museum:\n";
        cout<<"\t\tName\t\t\t\tAddress"<<endl;
        cout<<"\tPalm Restaurant\t\t\t\tHotel The Grand Chandiram, Near LIC Building, Jhalawar Road"<<endl;
        cout<<"\tSwagat Restaurant\t\t\tBodhgaya Rd,Bodh Gaya"<<endl;
        cout<<"\tRoyal Firdous Restaurant\t\tSH 51, Dhanmandi, Kota, Rajasthan, India"<<endl<<endl;
}
};
class lakes_and_waterfalls
{
public:
    void display()
    {
        system("cls");
        cout<<"LAKES AND WATERFALLS IN KOTA"<<endl;
        cout<<"1. Kishore Sagar Lake"<<endl;
        cout<<"2. Gaipernath Waterfall"<<endl;
        cout<<"3. Kota  Barrage"<<endl;
    }
    void KishoreSagar()
    {
        system("cls");
        cout<<"An Overview of Kishore Sagar lake"<<endl<<endl;
        cout<<"Kishore Sagar is an artificial picturesque lake dating back to 1346 constructed by the Bundi"
        " Prince Dehra Deh. It located by the side of attractive Brij Vilas palace museum."<<endl<<endl;
        cout<<"4 km from city center"<<endl<<endl;
        cout<<"Popular for: Nature Lovers & Photo Fanatics"<<endl<<endl;
        cout<<"Things to do around Kishore Sagar Lake:\n Gma Plaza Market \n New Sarafa Market \n Central Square Mall \n Blue Sea Bar"<<endl<<endl;
        cout<<"Restaurants near Kishore Sagar Lake:\n"<<endl;
        cout<<"\t\tName\t\t\t\tAddress"<<endl;
        cout<<"\tMaheshwari Restaurant\t\t384,Rajeev Ghandi Nagar, Kota, Rajasthan, India"<<endl;
        cout<<"\tFlavour Restaurant\t\tOm Cineplex, 11, Indra Vihar Opera Hospital Road, Kota, India"<<endl;
        cout<<"\tEatos Restaurant\t\t12-C, Nursery Scheme, Talwandi, Kota-5, Kota-Rajasthan 324004, India"<<endl<<endl;

    }
    void Gaipernath()
    {
        system("cls");
        cout<<"An Overview of Gaipernath Waterfall"<<endl<<endl;
        cout<<"Gaipernath Waterfall is situated near Kota city centre in Kota. It is a picturesque tourist spot popular"
        " for picnics, small treks, nature photography and the like. The ideal time to visit the waterfall is during"
        " monsoons when the rains refurbish the water reserves and you can experience the cascading falls in all its"
        " glory. You can also take a dip in the freshwater at the base."<<endl<<endl;
        cout<<"It is 7 km from city center"<<endl<<endl;
        cout<<"Entry Fee : No entry fee"<<endl<<endl;
        cout<<"Timings : 24 hours"<<endl<<endl;
        cout<<"Popular for: Nature Lovers & Photo Fanatics"<<endl<<endl;
        cout<<"Things to do around Gaipernath Waterfall:\n Gma Plaza Market \n Swarn Rajat Market \n Central Square Mall \n Saiman Plaza"<<endl<<endl;
        cout<<"Restaurants near Gaipernath Waterfall:\n"<<endl;
        cout<<"\t\tName\t\t\t\tAddress"<<endl;
        cout<<"\tMaheshwari Restaurant\t\t384,Rajeev Ghandi Nagar, Kota, Rajasthan, India"<<endl;
        cout<<"\tSwagat Restaurant\t\tBodhgaya Rd, Bodh Gaya"<<endl;
        cout<<"\tEatos Restaurant\t\t12-C, Nursery Scheme, Talwandi, Kota-5, Kota-Rajasthan 324004, India"<<endl<<endl;
    }
    void KotaBarrage()
    {
      system("cls");
      cout<<"An Overview of Kota Barrage"<<endl<<endl;
      cout<<"Kota Barrage was certainly not constructed keeping tourism in mind. However, its majestic appeal has "
      "turned it into one over the years. The gushing flow of foaming white water is an absolute treat for the eyes "
      "from atop the bridge. Visitors flock here to enjoy this majestic scene, especially in monsoon when the gates "
      "are all open. The area is characterised by a cool, relaxing breeze because of the proximity of the water. It "
      "is one of those places where you can keep quiet and let the place make the noise. Kota Barrage is a favourite "
      "evening time gathering. You will find people in couples or groups standing along the railings enjoying the view "
      "and spending quality time with their family and loved ones."<<endl<<endl;
      cout<<"It is 6 km from city center."<<endl<<endl;
      cout<<"Timings : 24 hours"<<endl<<endl;
        cout<<"Entry Fee : No entry fee"<<endl<<endl;
        cout<<"Restaurants near Kota Barrage:\n"<<endl;
        cout<<"\t\tName\t\t\t\tAddress"<<endl;
        cout<<"\tMaheshwari Restaurant\t\t384,Rajeev Ghandi Nagar, Kota, Rajasthan, India"<<endl;
        cout<<"\tShri Gautam Restaurant\t\tShop No-09, Thermal Main Road"<<endl;
        cout<<"\tDesh Sevak Bhojnalaya\t\tOpposite Police Chouki"<<endl<<endl;
    }
};

//Global declaration of class objects
   tourism t;
   forts_and_palaces fp;
   gardens g;
   temples temp;
   museums m;
   lakes_and_waterfalls lw;

   void goto_forts_and_palaces()
   {
        char b;
        cout<<"Want to go back?(Y/N) :";
        cin>>b;
        if(b=='y')
        {fp.display();}
        else exit(0);
   }
   void goto_gardens()
   {
       char b;
        cout<<"Want to go back?(Y/N) :";
        cin>>b;
        if(b=='y')
        {g.display();}
        else exit(0);
   }
   void goto_temples()
   {
       char b;
        cout<<"Want to go back?(Y/N) :";
        cin>>b;
        if(b=='y')
        {temp.display();}
        else exit(0);
   }
   void goto_museums()
   {
       char b;
        cout<<"Want to go back?(Y/N) :";
        cin>>b;
        if(b=='y')
        {m.display();}
        else exit(0);
   }
   void goto_lakes_and_waterfalls()
   {
       char b;
        cout<<"Want to go back?(Y/N) :";
        cin>>b;
        if(b=='y')
        {lw.display();}
        else exit(0);
   }
int main()
{  int c,ch;
   cout<<"\t\t\t\t\t     KOTA TRAVEL GUIDE"<<endl;
   cout<<"\t\t\t\t\tAn Insight Into KOTA Tourism"<<endl<<endl<<endl;
   t.intro();
   t.tourist_attractions();
   do{
   cout<<"\nSelect your choice (Enter 0 to exit): ";
   cin>>c;
   cout<<endl;
   switch(c)
   {
      case 0: cout<<"Thanks for the visit"; break;

       case 1: fp.display();
                do{cout<<"Which place would you like to visit?\nEnter your choice (Enter 0 to go back): ";
                cin>>ch;
                switch(ch)
                {
                    case 0: system("cls"); t.tourist_attractions(); break;
                    case 1: fp.CityPalace();
                            goto_forts_and_palaces();
                            break;
                    case 2: fp.JagmandirPalace();
                            goto_forts_and_palaces();
                            break;
                    case 3: fp.RanijiKiBaoli();
                            goto_forts_and_palaces();
                            break;
                    case 4: fp.AbhedaMahal();
                            goto_forts_and_palaces();
                            break;
                    case 5: fp.UmedBhawan();
                            goto_forts_and_palaces();
                            break;
                    default: cout<<"Your choice do not match";
                }}while(ch==1 || ch==2 || ch==3 || ch==4 || ch==5);
                break;
       case 2: g.display();
               do{cout<<"Which place would you like to visit?\nEnter your choice (Enter 0 to go back): ";
                cin>>ch;
                switch(ch)
                {
                   case 0: system("cls"); t.tourist_attractions(); break;
                    case 1: g.SevenWondersPark();
                            goto_gardens();
                            break;
                    case 2: g.ChambalGardens();
                            goto_gardens();
                            break;
                    case 3: g.Zoo();
                            goto_gardens();
                            break;
                    case 4: g.ChatraVilas();
                            goto_gardens();
                            break;
                    case 5: g.Darrah();
                            goto_gardens();
                            break;
                    case 6: g.LuckyBurj();
                            goto_gardens();
                            break;
                    default: cout<<"Your choice do not match";
                }}while(ch==1 || ch==2 || ch==3||ch==4||ch==5||ch==6);
               break;
       case 3: temp.display();
               do{cout<<"Which place would you like to visit?\nEnter your choice (Enter 0 to go back): ";
                cin>>ch;
                switch(ch)
                {
                    case 0: system("cls"); t.tourist_attractions(); break;
                    case 1: temp.GaradiaMahadev();
                            goto_temples();
                            break;
                    case 2: temp.Shivpuri();
                            goto_temples();
                            break;
                    case 3: temp.GodavriDham();
                            goto_temples();
                            break;
                    case 4: temp.Kansua();
                            goto_temples();
                            break;
                    case 5: temp.KhadeGanesh();
                            goto_temples();
                            break;
                    default: cout<<"Your choice do not match";
                }}while(ch==1||ch==2||ch==3||ch==4||ch==5);
               break;
       case 4: m.display();
               do{cout<<"Which place would you like to visit?\nEnter your choice (Enter 0 to go back): ";
                cin>>ch;
                switch(ch)
                {
                    case 0: system("cls"); t.tourist_attractions(); break;
                    case 1: m.GovMuseum();
                            goto_museums();
                            break;
                    case 2: m.RaoMadhoMuseum();
                            goto_museums();
                            break;
                    default: cout<<"Your choice do not match";
                }}while(ch==1||ch==2);
               break;
       case 5: lw.display();
               do{cout<<"Which place would you like to visit?\nEnter your choice (Enter 0 to go back): ";
                cin>>ch;
                switch(ch)
                {
                    case 0: system("cls"); t.tourist_attractions(); break;
                    case 1: lw.KishoreSagar();
                            goto_lakes_and_waterfalls();
                            break;
                    case 2: lw.Gaipernath();
                            goto_lakes_and_waterfalls();
                            break;
                    case 3: lw.KotaBarrage();
                            goto_lakes_and_waterfalls();
                            break;
                    default: cout<<"Your choice do not match";
                }}while(ch==1||ch==2||ch==3);
               break;
         default: cout<<"Your choice do not match.\n";

   }
   } while(c!=0);


   return 0;
}
