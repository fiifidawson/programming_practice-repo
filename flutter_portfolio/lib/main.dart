import 'package:flutter/material.dart';

void main() {
  runApp(const PersonalPortfolioApp());
}

class PersonalPortfolioApp extends StatelessWidget {
  const PersonalPortfolioApp({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    // INSIDE THE BUILD METHOD
    return const MaterialApp(
        debugShowCheckedModeBanner: false,
        home: Scaffold(
          body: Center(
            child: Text('Hello World'),
          ),
        ));
  }
}

class PersonalPortfolio extends StatefulWidget {
  const PersonalPortfolio({Key? key}) : super(key: key);

  @override
  PersonalPortfolioState createState() => PersonalPortfolioState();
}

class PersonalPortfolioState extends State<PersonalPortfolio> {
  final Color appColor = Colors.blueAccent;
  final String avatarImg =
      'https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcRWSz7CNlZUSL83QvvSmqBcaiq_kY1FBhPoPSCrgpPe&s';

  @override
  Widget build(BuildContext context) {
    // INSIDE THE BUILD METHOD
    return Center(
        child: Column(
            mainAxisSize: MainAxisSize.min,
            mainAxisAlignment: MainAxisAlignment.center,
            crossAxisAlignment: CrossAxisAlignment.center,
            children: [
          Container(
              width: 100,
              height: 100,
              margin: const EdgeInsets.only(bottom: 20),
              decoration: BoxDecoration(
                  borderRadius: BorderRadius.circular(50),
                  image: DecorationImage(
                    image: NetworkImage(avatarImg),
                    fit: BoxFit.cover,
                  ),
                  border: Border.all(
                    color: appColor,
                    width: 8,
                  ))),
          Text('Roman Jaquez',
              style: TextStyle(
                  color: appColor, 
                  fontSize: 20, 
                  fontWeight: FontWeight.bold)),
          const Text('Flutter GDE / Cloud Architect'),
          const SizedBox(height: 20),
          TextButton(
              onPressed: () {},
              child: Row(
                  mainAxisAlignment: MainAxisAlignment.center,
                  mainAxisSize: MainAxisSize.min,
                  children: [
                    Icon(Icons.email, color: appColor),
                    const SizedBox(width: 10),
                    Text('romanejaquez@gmail.com',
                        style: TextStyle(color: appColor))
                  ])
                ),
        ])
      );
  }
}